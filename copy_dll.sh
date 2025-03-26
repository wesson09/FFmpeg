#!/bin/sh

# to setup a proper debug environment, copy all versionned DLL into this folder, and necessary mingw dll to start ffmpeg/ffprobe
dirs=(
    ./lib*/*-*.dll
    $MSYSTEM_PREFIX/bin/libbz2-1.dll
    $MSYSTEM_PREFIX/bin/libiconv-2.dll
    $MSYSTEM_PREFIX/bin/liblzma-5.dll
    $MSYSTEM_PREFIX/bin/libstdc++-6.dll
    $MSYSTEM_PREFIX/bin/libwinpthread-1.dll    
    $MSYSTEM_PREFIX/bin/zlib1.dll    
)
target=(
    ./
)

rsync -argsv --progress ${dirs[@]} ${target[@]}
