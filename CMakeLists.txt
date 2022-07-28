cmake_minimum_required(VERSION 2.8.12)
set(CMAKE_C_COMPILER "gcc-10")
set(CMAKE_CXX_COMPILER "g++-10")
 project(MD5Encrypter)


 include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
 conan_basic_setup()

 add_executable(md5 md5.cpp)
 target_link_libraries(md5 ${CONAN_LIBS})
target_compile_features(md5 PUBLIC cxx_std_20)
set_target_properties(md5 PROPERTIES CXX_EXTENSIONS ON)
target_compile_options(md5 PUBLIC "-fconcepts")
