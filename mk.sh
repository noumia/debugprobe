set -exuo pipefail

build() {
    rm -rf $1
    mkdir $1

    cd $1
    cmake -G Ninja $2 -DCMAKE_BUILD_TYPE=RelWithDebInfo ..
    ninja
    cd ..
}

build build-xiao -DXIAO=1
