# For more information about build system see
# https://docs.espressif.com/projects/esp-idf/en/latest/api-guides/build-system.html
# The following five lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.5)

set(USE_COMPILER_EXECUTABLE_AS_LINKER TRUE)
#list(PREPEND $ENV{PATH} $ENV{IDF_DUPA})
#message("mydebug: IDF_DUPA is " $ENV{IDF_DUPA})
#message("mydebug: IDF_PATH is " $ENV{IDF_PATH})

#set(ENV{PATH} "$ENV{IDF_DUPA} $ENV{PATH}")
#message("mydebug: PATH is " $ENV{PATH})


include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(panels_tester LANGUAGES C CXX)


