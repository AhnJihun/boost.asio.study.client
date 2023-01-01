cmake_minimum_required(VERSION 3.23)

project(
    boost.asio.study.clinet
)

set( BOOST_VERSION 1.81 )

set( SOURCE_DIR Src )
set( SOURCE_FILES ${SOURCE_DIR}/main.cpp )

message("Boost Path : $ENV{BOOST_PATH}")

#boost include & linking
include_directories(/Users/jihunahn/Desktop/Lib/boost_1_81_0/include)
link_directories(/Users/jihunahn/Desktop/Lib/boost_1_81_0/lib)

add_executable( boost.asio.study.clinet ${SOURCE_FILES} )