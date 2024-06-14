# Install script for directory: /home/user/hal-core-2.0/projects/cnc

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
    set(CMAKE_INSTALL_CONFIG_NAME "")
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
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/user/hal-core-2.0/build/projects/cnc/../../../bin/cnc" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/user/hal-core-2.0/build/projects/cnc/../../../bin/cnc")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/user/hal-core-2.0/build/projects/cnc/../../../bin/cnc"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/user/hal-core-2.0/build/projects/cnc/../../../bin/cnc")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/user/hal-core-2.0/build/projects/cnc/../../../bin" TYPE EXECUTABLE FILES "/home/user/hal-core-2.0/build/projects/cnc/cnc")
  if(EXISTS "$ENV{DESTDIR}/home/user/hal-core-2.0/build/projects/cnc/../../../bin/cnc" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/user/hal-core-2.0/build/projects/cnc/../../../bin/cnc")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/user/hal-core-2.0/build/projects/cnc/../../../bin/cnc"
         OLD_RPATH "/usr/local/lib:/opt/qt-creator/5.15.1/gcc_64/lib:/home/user/hal-core-2.0/build/projects/cnc/../../../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/user/hal-core-2.0/build/projects/cnc/../../../bin/cnc")
    endif()
  endif()
endif()
