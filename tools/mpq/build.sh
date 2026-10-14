#!/bin/sh
# Build StormLib (shared, bundled zlib/bzip2/libtom*) and the mpqx CLI.
#   tools/mpq/build.sh <StormLib source dir> <build dir>
# Produces <build dir>/libstorm.so and <build dir>/mpqx (rpath set to <build dir>).
set -e
SRC=${1:?StormLib source dir}
OUT=${2:?build dir}
HERE=$(cd "$(dirname "$0")" && pwd)
mkdir -p "$OUT"
OUT=$(cd "$OUT" && pwd)
cmake -S "$SRC" -B "$OUT/stormlib" -DBUILD_SHARED_LIBS=ON -DCMAKE_BUILD_TYPE=Release \
  -DSTORM_USE_BUNDLED_LIBRARIES=ON -DWITH_BUNDLED_LIBTOMMATH=ON -DWITH_BUNDLED_LIBTOMCRYPT=ON \
  -DSTORM_SKIP_INSTALL=ON
cmake --build "$OUT/stormlib" -j"$(nproc)"
cp -P "$OUT"/stormlib/libstorm.so* "$OUT"/
g++ -O2 -std=c++17 -I"$SRC/src" "$HERE/mpqx.cpp" -L"$OUT" -lstorm -Wl,-rpath,"$OUT" -o "$OUT/mpqx"
echo "built $OUT/mpqx"
