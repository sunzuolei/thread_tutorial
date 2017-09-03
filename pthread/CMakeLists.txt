cmake_minimum_required(VERSION 2.8)

PROJECT(pthread_demos)

ADD_EXECUTABLE(hello_pthread   a_hello_pthread.cpp)
ADD_EXECUTABLE(pass_arg        b_pass_arg.cpp)
ADD_EXECUTABLE(pass_multi_arg  c_pass_multi_arg.cpp)
ADD_EXECUTABLE(pass_arg_unsafe d_pass_arg_unsafe.cpp)
ADD_EXECUTABLE(join_thread     e_join_thread.cpp)
ADD_EXECUTABLE(dotpro_mutex    f_dotpro_mutex.cpp)

TARGET_LINK_LIBRARIES(hello_pthread   pthread)
TARGET_LINK_LIBRARIES(pass_arg        pthread)
TARGET_LINK_LIBRARIES(pass_multi_arg  pthread)
TARGET_LINK_LIBRARIES(pass_arg_unsafe pthread)
TARGET_LINK_LIBRARIES(join_thread     pthread)
TARGET_LINK_LIBRARIES(dotpro_mutex    pthread)

SET(EXECUTABLE_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/bin")
