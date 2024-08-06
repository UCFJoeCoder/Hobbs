set(TARGET Triangle)
project(${TARGET})

set(DEPENDENCIES Shapes)

file(GLOB HEADERS "*.h")
file(GLOB SOURCES "*.cpp")

add_library(${TARGET} SHARED ${HEADERS} ${SOURCES})
target_link_libraries(${TARGET} ${DEPENDENCIES})

install(TARGETS ${TARGET})