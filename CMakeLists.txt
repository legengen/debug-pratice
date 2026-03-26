cmake_minimum_required(VERSION 3.10)

project(debug_practice)

aux_source_directory(. SRCS)
add_executable(debug_pra ${SRCS})