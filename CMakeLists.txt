cmake_minimum_required(VERSION 3.10)
project(dexcamera)

# set(CMAKE_VERBOSE_MAKEFILE on)

# set(CMAKE_BUILD_TYPE Debug)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_SKIP_RPATH true)
set(CMAKE_SKIP_BUILD_RPATH true)
set(CMAKE_SKIP_INSTALL_RPATH true)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/common/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

set(PERSTR dex)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LINK_DIRS ${EXECUTABLE_OUTPUT_PATH} ${LIBRARY_OUTPUT_DIRECTORY})
set(CMAKE_CXX_FLAGS
    "${CMAKE_CXX_FLAGS} -fvisibility=hidden -std=c++17 -Wl,-rpath,.,--disable-new-dtags -Wl,-rpath-link,${LIBRARY_OUTPUT_PATH} -Wno-format-security"
)

set(COMMON_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/common/src/cameraobj.cpp)

add_subdirectory(xema)
add_subdirectory(lumos)
add_subdirectory(photoneo)
add_subdirectory(rvbust)
add_subdirectory(tuyang)
add_subdirectory(daheng)
add_subdirectory(zivid)
add_subdirectory(basler)
add_subdirectory(ainstec)
add_subdirectory(unittest)
add_subdirectory(unittestdl)
