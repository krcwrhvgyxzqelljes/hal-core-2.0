#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "TKService" for configuration "Debug"
set_property(TARGET TKService APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(TKService PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib\${OCCT_INSTALL_BIN_LETTER}/libTKService.so.7.5.0"
  IMPORTED_SONAME_DEBUG "libTKService.so.7"
  )

list(APPEND _cmake_import_check_targets TKService )
list(APPEND _cmake_import_check_files_for_TKService "${_IMPORT_PREFIX}/lib\${OCCT_INSTALL_BIN_LETTER}/libTKService.so.7.5.0" )

# Import target "TKV3d" for configuration "Debug"
set_property(TARGET TKV3d APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(TKV3d PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib\${OCCT_INSTALL_BIN_LETTER}/libTKV3d.so.7.5.0"
  IMPORTED_SONAME_DEBUG "libTKV3d.so.7"
  )

list(APPEND _cmake_import_check_targets TKV3d )
list(APPEND _cmake_import_check_files_for_TKV3d "${_IMPORT_PREFIX}/lib\${OCCT_INSTALL_BIN_LETTER}/libTKV3d.so.7.5.0" )

# Import target "TKOpenGl" for configuration "Debug"
set_property(TARGET TKOpenGl APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(TKOpenGl PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib\${OCCT_INSTALL_BIN_LETTER}/libTKOpenGl.so.7.5.0"
  IMPORTED_SONAME_DEBUG "libTKOpenGl.so.7"
  )

list(APPEND _cmake_import_check_targets TKOpenGl )
list(APPEND _cmake_import_check_files_for_TKOpenGl "${_IMPORT_PREFIX}/lib\${OCCT_INSTALL_BIN_LETTER}/libTKOpenGl.so.7.5.0" )

# Import target "TKMeshVS" for configuration "Debug"
set_property(TARGET TKMeshVS APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(TKMeshVS PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib\${OCCT_INSTALL_BIN_LETTER}/libTKMeshVS.so.7.5.0"
  IMPORTED_SONAME_DEBUG "libTKMeshVS.so.7"
  )

list(APPEND _cmake_import_check_targets TKMeshVS )
list(APPEND _cmake_import_check_files_for_TKMeshVS "${_IMPORT_PREFIX}/lib\${OCCT_INSTALL_BIN_LETTER}/libTKMeshVS.so.7.5.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
