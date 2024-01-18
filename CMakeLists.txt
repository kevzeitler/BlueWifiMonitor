cmake_minimum_required(VERSION 3.15)
project(BlueWifiMonitor)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find GTKmm
find_package(PkgConfig)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)

# Add the GTKmm include directories and link against the libraries
include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})
link_libraries(${GTKMM_LIBRARIES})

# Add the source files
set(SOURCES
    src/main.cpp
)

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCES})

