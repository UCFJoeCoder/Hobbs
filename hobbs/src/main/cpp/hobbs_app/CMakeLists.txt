set(TARGET "HobbsApp")
project(${TARGET})

set(DEPENDENCIES Circle Rectangle Triangle Shapes android log)
#set(DEPENDENCIES Shapes android log)

#file(GLOB HEADERS "*.h")
file(GLOB SOURCES "*.cpp")

add_library(${TARGET} SHARED ${SOURCES})
target_link_libraries(${TARGET} ${DEPENDENCIES})
