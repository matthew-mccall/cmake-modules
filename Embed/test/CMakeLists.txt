cmake_minimum_required(VERSION 3.20)

project(EmbedTest)

include(../Embed.cmake)
embed_file(FILEPATH foo.txt)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC foo_txt)