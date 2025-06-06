cmake_minimum_required(VERSION 3.20)
project(cpp_cli_app)

set(CMAKE_CXX_STANDARD 20)

# Define output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Find packages
cmake_policy(SET CMP0167 NEW)
find_package(nlohmann_json REQUIRED)
find_package(Boost REQUIRED)
find_package(SQLite3 REQUIRED)
find_package(GTest REQUIRED)

# App
add_executable(cpp_cli_app src/main.cpp)
target_link_libraries(cpp_cli_app PRIVATE nlohmann_json::nlohmann_json Boost::headers SQLite::SQLite3)

# Tests
enable_testing()
add_executable(cpp_cli_app_tests test/test_main.cpp)
target_link_libraries(cpp_cli_app_tests PRIVATE GTest::gtest_main nlohmann_json::nlohmann_json Boost::headers SQLite::SQLite3)
include(GoogleTest)
gtest_discover_tests(cpp_cli_app_tests)
