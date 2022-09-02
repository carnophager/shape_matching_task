cmake_minimum_required(VERSION 3.17)
project(robo)

set(CMAKE_CXX_STANDARD 17)

configure_file(utils/input.bin input.bin COPYONLY)
configure_file(utils/output.bin output.bin COPYONLY)
#file(COPY utils/input.bin)
add_executable(robo main.cpp utils/CommonDefines.h utils/EyePatterns.h utils/FileParser.h utils/FunctionTracer.h utils/Image.cpp utils/SolutionEvaluator.h utils/input.bin)