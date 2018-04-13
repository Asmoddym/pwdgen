#!/bin/sh

BUILD_DIR="./build"

if [ ! -e "${BUILD_DIR}" ]
then
    mkdir ${BUILD_DIR}
elif [ ! -d "${BUILD_DIR}" ]
then
    echo "Removing ${BUILD_DIR} file before creating the ${BUILD_DIR} directory..."
    rm -rf ${BUILD_DIR}
    mkdir ${BUILD_DIR}
fi

cd ${BUILD_DIR}
cmake ..
make $1
cd ..
