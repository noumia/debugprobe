set -exuo pipefail

build() {
    rm -rf $1
    mkdir $1

    cd $1
    cmake -G Ninja $2 -DCMAKE_BUILD_TYPE=RelWithDebInfo ..
    ninja
    cd ..
}

build build-probe ''
build build-xiao -DXIAO=1
build build-zero -DZERO=1

rm -rf uf2
mkdir uf2

cp build-xiao/*.uf2 uf2
cp build-zero/*.uf2 uf2
cp build-probe/*.uf2 uf2
