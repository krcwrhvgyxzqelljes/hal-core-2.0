#!/bin/bash

if [ "$1" == "d" ]; then
  if [ "$2" == "64" ]; then
    # set environment variables used by OCCT
    export CSF_FPE=0

    export TCL_DIR="/usr/lib/x86_64-linux-gnu"
    export TK_DIR="/usr/lib/x86_64-linux-gnu"
    export FREETYPE_DIR="/usr/lib/x86_64-linux-gnu"
    export FREEIMAGE_DIR=""
    export TBB_DIR=""
    export VTK_DIR=""
    export FFMPEG_DIR=""

    if [ "x@3RDPARTY_QT_DIR" != "x" ]; then
      export QTDIR=""
    fi

    export TCL_VERSION_WITH_DOT=""
    export TK_VERSION_WITH_DOT=""

    export CSF_OCCTBinPath="/home/user/hal-core-2.0/vendor/build-oce-upstream-V7_5_0beta-Desktop-Debug/lin64/clang/bind"
    export CSF_OCCTLibPath="/home/user/hal-core-2.0/vendor/build-oce-upstream-V7_5_0beta-Desktop-Debug/lin64/clang/libd"
    export CSF_OCCTIncludePath="/home/user/hal-core-2.0/vendor/build-oce-upstream-V7_5_0beta-Desktop-Debug/inc"
    export CSF_OCCTResourcePath="/home/user/hal-core-2.0/vendor/oce-upstream-V7_5_0beta/src"
    export CSF_OCCTDataPath="/home/user/hal-core-2.0/vendor/oce-upstream-V7_5_0beta/data"
    export CSF_OCCTSamplesPath="/home/user/hal-core-2.0/vendor/oce-upstream-V7_5_0beta/samples"
    export CSF_OCCTTestsPath="/home/user/hal-core-2.0/vendor/oce-upstream-V7_5_0beta/tests"
    export CSF_OCCTDocPath="/home/user/hal-core-2.0/vendor/oce-upstream-V7_5_0beta/doc"

    # for compatability with external application using CASROOT
    export CASROOT="/home/user/hal-core-2.0/vendor/oce-upstream-V7_5_0beta"
  fi
fi

