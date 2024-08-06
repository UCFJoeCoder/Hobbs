set(TARGET "Shapes")
project(${TARGET})

file(GLOB HEADERS "*.h")
file(GLOB SOURCES "*.cpp")

add_library(${TARGET} SHARED ${HEADERS} ${SOURCES})

install(TARGETS ${TARGET})

#add_library(${CMAKE_PROJECT_NAME} SHARED
#        # List C/C++ source files with relative paths to this CMakeLists.txt.
#        native-lib.cpp
#        )

#add_library(ShapesLib SHARED
#        # List C/C++ source files with relative paths to this CMakeLists.txt.
#        Collection.cpp
#        Shape.cpp
#        CircleInterface.cpp
#        )

#add_library(CircleLib SHARED Circle.cpp)
#add_library(RectangleLib SHARED Rectangle.cpp)
#add_library(TriangleLib SHARED Triangle.cpp)

#target_link_libraries(CircleLib ShapesLib)
#target_link_libraries(RectangleLib ShapesLib)
#target_link_libraries(TriangleLib ShapesLib)


# Specifies libraries CMake should link to your target library. You
# can link libraries from various origins, such as libraries defined in this
# build script, prebuilt third-party libraries, or Android system libraries.
#target_link_libraries(${CMAKE_PROJECT_NAME}
#        #        # List libraries link to the target library
#        ShapesLib
#        CircleLib
#        RectangleLib
#        TriangleLib
#        android
#        log)