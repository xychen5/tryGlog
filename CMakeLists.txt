cmake_minimum_required(VERSION 3.19)
project(tryGlogLion)

set(CMAKE_CXX_STANDARD 14)


include_directories(
        "F:/prjs/ThirdParty/glog/include"
        "F:/prjs/ThirdParty/gflags/include"
)

link_directories(
        "F:/prjs/ThirdParty/glog/lib"
        "F:/prjs/ThirdParty/gflags/lib"
)

link_libraries(
        glog.lib
        gflags_static.lib
)

add_executable(tryGlogLion
        main.cpp
        )

target_link_libraries (tryGlogLion
        glog.lib
        gflags_static.lib
        )

