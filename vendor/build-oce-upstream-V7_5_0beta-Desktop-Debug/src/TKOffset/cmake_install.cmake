# Install script for directory: /home/user/hal-core-2.0/vendor/oce-upstream-V7_5_0beta/src/TKOffset

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/llvm-objdump-14")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib${OCCT_INSTALL_BIN_LETTER}/libTKOffset.so.7.5.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib${OCCT_INSTALL_BIN_LETTER}/libTKOffset.so.7"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib${OCCT_INSTALL_BIN_LETTER}" TYPE SHARED_LIBRARY FILES
    "/home/user/hal-core-2.0/vendor/build-oce-upstream-V7_5_0beta-Desktop-Debug/lin64/clang/libd/libTKOffset.so.7.5.0"
    "/home/user/hal-core-2.0/vendor/build-oce-upstream-V7_5_0beta-Desktop-Debug/lin64/clang/libd/libTKOffset.so.7"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib${OCCT_INSTALL_BIN_LETTER}/libTKOffset.so.7.5.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib${OCCT_INSTALL_BIN_LETTER}/libTKOffset.so.7"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/user/hal-core-2.0/vendor/build-oce-upstream-V7_5_0beta-Desktop-Debug/lin64/clang/libd:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/llvm-strip-14" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib${OCCT_INSTALL_BIN_LETTER}/libTKOffset.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib${OCCT_INSTALL_BIN_LETTER}/libTKOffset.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib${OCCT_INSTALL_BIN_LETTER}/libTKOffset.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib${OCCT_INSTALL_BIN_LETTER}" TYPE SHARED_LIBRARY FILES "/home/user/hal-core-2.0/vendor/build-oce-upstream-V7_5_0beta-Desktop-Debug/lin64/clang/libd/libTKOffset.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib${OCCT_INSTALL_BIN_LETTER}/libTKOffset.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib${OCCT_INSTALL_BIN_LETTER}/libTKOffset.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib${OCCT_INSTALL_BIN_LETTER}/libTKOffset.so"
         OLD_RPATH "/home/user/hal-core-2.0/vendor/build-oce-upstream-V7_5_0beta-Desktop-Debug/lin64/clang/libd:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/llvm-strip-14" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib${OCCT_INSTALL_BIN_LETTER}/libTKOffset.so")
    endif()
  endif()
endif()

