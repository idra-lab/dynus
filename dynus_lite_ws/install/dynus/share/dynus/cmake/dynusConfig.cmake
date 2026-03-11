# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_dynus_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED dynus_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(dynus_FOUND FALSE)
  elseif(NOT dynus_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(dynus_FOUND FALSE)
  endif()
  return()
endif()
set(_dynus_CONFIG_INCLUDED TRUE)

# output package information
if(NOT dynus_FIND_QUIETLY)
  message(STATUS "Found dynus: 0.0.0 (${dynus_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'dynus' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${dynus_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(dynus_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${dynus_DIR}/${_extra}")
endforeach()
