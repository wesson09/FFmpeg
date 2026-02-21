#!/bin/sh

# to setup a proper debug environment, copy all versionned DLL into this folder, and necessary mingw dll to start ffmpeg/ffprobe
dirs=(
    ./lib*/*-*.dll
    $MSYSTEM_PREFIX/bin/libkvazaar*.dll
    $MSYSTEM_PREFIX/bin/libva.dll
    $MSYSTEM_PREFIX/bin/libva_win32.dll
    $MSYSTEM_PREFIX/bin/libx265*.dll
    $MSYSTEM_PREFIX/bin/libx264*.dll
    $MSYSTEM_PREFIX/bin/libopenh*.dll
    $MSYSTEM_PREFIX/bin/libwinpthread-1.dll    
#    /usr/bin/msys-2.0.dll
#    $MSYSTEM_PREFIX/bin/libbz2-1.dll
#    $MSYSTEM_PREFIX/bin/libiconv-2.dll
#    $MSYSTEM_PREFIX/bin/liblzma-5.dll
#    $MSYSTEM_PREFIX/bin/libstdc++-6.dll
#    $MSYSTEM_PREFIX/bin/zlib1.dll    
)
target=(
    ./
)

rsync -argsv --progress ${dirs[@]} ${target[@]}
