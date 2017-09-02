cmake_minimum_required(VERSION 2.8)

PROJECT(pthread_demos)

ADD_EXECUTABLE(hello_pthread a_hello_pthread.cpp)
ADD_EXECUTABLE(pass_arg       b_pass_arg.cpp)
ADD_EXECUTABLE(pass_multi_arg c_pass_multi_arg.cpp)
ADD_EXECUTABLE(pass_multi_arg c_pass_multi_arg.cpp)

TARGET_LINK_LIBRARIES(hello_pthread   pthread)
TARGET_LINK_LIBRARIES(pass_arg        pthread)
TARGET_LINK_LIBRARIES(pass_multi_arg  pthread)

SET(EXECUTABLE_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/bin")
