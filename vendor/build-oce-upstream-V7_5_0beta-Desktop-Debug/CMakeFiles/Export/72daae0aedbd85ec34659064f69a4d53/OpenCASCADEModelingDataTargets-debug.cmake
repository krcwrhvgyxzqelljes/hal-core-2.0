#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "TKG2d" for configuration "Debug"
set_property(TARGET TKG2d APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(TKG2d PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib\${OCCT_INSTALL_BIN_LETTER}/libTKG2d.so.7.5.0"
  IMPORTED_SONAME_DEBUG "libTKG2d.so.7"
  )

list(APPEND _cmake_import_check_targets TKG2d )
list(APPEND _cmake_import_check_files_for_TKG2d "${_IMPORT_PREFIX}/lib\${OCCT_INSTALL_BIN_LETTER}/libTKG2d.so.7.5.0" )

# Import target "TKG3d" for configuration "Debug"
set_property(TARGET TKG3d APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(TKG3d PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib\${OCCT_INSTALL_BIN_LETTER}/libTKG3d.so.7.5.0"
  IMPORTED_SONAME_DEBUG "libTKG3d.so.7"
  )

list(APPEND _cmake_import_check_targets TKG3d )
list(APPEND _cmake_import_check_files_for_TKG3d "${_IMPORT_PREFIX}/lib\${OCCT_INSTALL_BIN_LETTER}/libTKG3d.so.7.5.0" )

# Import target "TKGeomBase" for configuration "Debug"
set_property(TARGET TKGeomBase APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(TKGeomBase PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib\${OCCT_INSTALL_BIN_LETTER}/libTKGeomBase.so.7.5.0"
  IMPORTED_SONAME_DEBUG "libTKGeomBase.so.7"
  )

list(APPEND _cmake_import_check_targets TKGeomBase )
list(APPEND _cmake_import_check_files_for_TKGeomBase "${_IMPORT_PREFIX}/lib\${OCCT_INSTALL_BIN_LETTER}/libTKGeomBase.so.7.5.0" )

# Import target "TKBRep" for configuration "Debug"
set_property(TARGET TKBRep APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(TKBRep PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib\${OCCT_INSTALL_BIN_LETTER}/libTKBRep.so.7.5.0"
  IMPORTED_SONAME_DEBUG "libTKBRep.so.7"
  )

list(APPEND _cmake_import_check_targets TKBRep )
list(APPEND _cmake_import_check_files_for_TKBRep "${_IMPORT_PREFIX}/lib\${OCCT_INSTALL_BIN_LETTER}/libTKBRep.so.7.5.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
