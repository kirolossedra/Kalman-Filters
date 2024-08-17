cmake_minimum_required(VERSION 3.10)  # Specify the minimum version of CMake required

# Set the project name and version
project(TestProject VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add Eigen directory to the include path
# If you have Eigen installed in a non-standard location, you may need to specify the path.
# Find Eigen package (You need to have Eigen installed, or Eigen must be located in the specified path)
find_package(Eigen3 3.3 REQUIRED NO_MODULE)

# Add the executable target
add_executable(UKF src/main.cpp src/ukf.cpp)

# Link Eigen to your target
target_link_libraries(UKF Eigen3::Eigen)

