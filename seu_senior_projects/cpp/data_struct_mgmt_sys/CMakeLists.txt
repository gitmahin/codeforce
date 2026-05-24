cmake_minimum_required(VERSION 3.23)

# Name the project
project(App)

# Create new library named AppLib
add_library(AppLib)

# Name the executable file
add_executable(App)

# Include all source files under ./lib folder
file(GLOB_RECURSE SOURCES
    "./lib/*.cpp"  
)

# Include all header files under ./lib folder
file(GLOB_RECURSE HEADERS
    "./lib/*.h"      
)

# Build the library
target_sources(AppLib
    PRIVATE
        ${SOURCES}

    PUBLIC
    FILE_SET HEADERS

    FILES
        base.h
        ${HEADERS}
    
)

# Create the "App"
target_sources(App
    PRIVATE
        # include app's main file
        main.cpp
)

# link all the libraries to the created "App"
target_link_libraries(App
    PRIVATE
        AppLib
)