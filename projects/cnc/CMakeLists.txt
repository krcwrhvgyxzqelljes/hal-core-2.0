cmake_minimum_required(VERSION 3.5)
set(PROJECT "cnc") # The name of the file excluding .c or .h
project(${PROJECT} CXX)

# To run, in terminal:
# LD_LIBRARY_PATH=../lib ./cnc

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set variables.
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(BUILD_DIR "${CMAKE_CURRENT_BINARY_DIR}")

# Set includepaths for header files etc.
include_directories(${SRC_DIR})
include_directories(${SRC_DIR}/../../vendor/qt_functions)
include_directories(${SRC_DIR}/../../vendor/std_functions)
include_directories(${SRC_DIR}/../../vendor/occ_draw)
include_directories(${SRC_DIR}/../../vendor/icons)
include_directories(${SRC_DIR}/../../vendor/oce-upstream-V7_5_0beta/inc)
include_directories(${SRC_DIR}/../../vendor/Clothoids/lib/include)
include_directories(${SRC_DIR}/../../vendor/Clothoids/lib3rd/include)
include_directories(${SRC_DIR}/../../vendor/gcode_parser)
include_directories(${SRC_DIR}/../../src/hal)
include_directories(${SRC_DIR}/../../src/rtapi)
include_directories(${SRC_DIR}/../../include)

include_directories("usr/include")
include_directories("usr/local/lib")
include_directories("usr/local/include")

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

# Set path to eigen3, for install $ sudo apt-get install libeigen3-dev
include_directories("/usr/include/eigen3")


# Set include paths for libraries to link.
add_library(halcore_ SHARED IMPORTED) # or STATIC instead of SHARED
set_target_properties(halcore_ PROPERTIES
    IMPORTED_LOCATION ${BUILD_DIR}/../../../lib/libhalcore.so
    INTERFACE_INCLUDE_DIRECTORIES ${SRC_DIR}/../../src/hal
)

# Opencascade
find_package (OpenCASCADE REQUIRED)

SET(OpenCASCADE_LIBS
    TKGeomAlgo TKMesh TKHLR TKBO TKShHealing
    TKPrim
    TKernel TKMath TKTopAlgo TKService
    TKG2d TKG3d TKV3d TKOpenGl
    TKBRep TKXSBase TKGeomBase TKGeomAlgo
    TKXSDRAW
    TKLCAF TKXCAF TKCAF TKVCAF
    TKCDF TKBin TKBinL TKBinXCAF TKXml TKXmlL TKXmlXCAF
    # -- IGES support
    TKIGES
    # -- STEP support
    TKSTEP TKXDESTEP TKXDEIGES TKSTEPAttr TKSTEPBase TKSTEP209
    # -- STL support
    TKSTL
    # -- OBJ/glTF support
    TKRWMesh TKMeshVS
    # -- VRML support
    TKVRML
    # -- ViewerTest
    TKViewerTest
)

# Qt
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_PREFIX_PATH "/opt/qt-creator/5.15.1/gcc_64/lib/cmake")
include_directories("/opt/qt-creator/5.15.1/gcc_64/include/QtWidgets")
include_directories("/opt/qt-creator/5.15.1/gcc_64/include/QtGui")
include_directories("/opt/qt-creator/5.15.1/gcc_64/include")
include_directories("/opt/qt-creator/5.15.1/gcc_64/include/QtCore")

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets OpenGL REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets OpenGL REQUIRED)

set(PROJECT_SOURCES
    ${SRC_DIR}/main.cpp
    ${SRC_DIR}/mainwindow.cpp
    ${SRC_DIR}/mainwindow.h
    ${SRC_DIR}/mainwindow.ui
    ${SRC_DIR}/form.cpp
    ${SRC_DIR}/form.h
    ${SRC_DIR}/form.ui
    ${SRC_DIR}/OcctQtViewer.h
    ${SRC_DIR}/OcctQtViewer.cpp
    ${SRC_DIR}/icons.qrc
    ${SRC_DIR}/QGCodeEditor.cpp
    ${SRC_DIR}/QGCodeSyntaxHighlighter.cpp
    ${SRC_DIR}/QGCodeEditor.h
    ${SRC_DIR}/QGCodeSyntaxHighlighter.h
    ${SRC_DIR}/../../vendor/occ_draw/draw_primitives.h
    ${SRC_DIR}/../../vendor/occ_draw/draw_primitives.cpp
    ${SRC_DIR}/../../vendor/qt_functions/qt_functions.h
    ${SRC_DIR}/../../vendor/qt_functions/qt_functions.cpp
    ${SRC_DIR}/../../vendor/std_functions/std_functions.h
    ${SRC_DIR}/../../vendor/std_functions/std_functions.cpp
    ${SRC_DIR}/../../vendor/gcode_parser/gcode_parser.h
    ${SRC_DIR}/../../vendor/gcode_parser/gcode_parser.cpp
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(${PROJECT}
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(${PROJECT} SHARED
            ${PROJECT_SOURCES}
        )
else()
    add_executable(${PROJECT}
        ${PROJECT_SOURCES}
    )
endif()
endif()

if (BUILD_USPACE)
    add_definitions(-DULAPI)
else ()
    add_definitions(-DRTAPI)
endif ()

# Link.
target_link_libraries(${PROJECT_NAME} PRIVATE
    ${OpenCASCADE_LIBS} Qt5::Widgets Qt5::OpenGL ${OPENGL_LIBRARIES} ${GLUT_LIBRARY}
    -I../lib -L../lib  halcore_
)

# Make install
install(TARGETS ${PROJECT} DESTINATION ${BUILD_DIR}/../../../bin)
