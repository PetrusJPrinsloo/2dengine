cmake_minimum_required(VERSION 3.14)
project(2DGameEngineCLion)

set(CMAKE_CXX_STANDARD 14)

# Adds the files that are part of the project
add_executable(
        2DGameEngineCLion
        src/Main.cpp
        src/Game.cpp
        src/Game.h
        src/Constants.h
        src/EntityManager.h
        src/EntityManager.cpp
        src/Entity.h
        src/Entity.cpp
        src/AssetManager.h
        src/AssetManager.cpp
        src/TextureManager.h
        src/TextureManager.cpp
        src/Animation.cpp
        src/Animation.h
        src/Map.cpp
        src/Map.h
        src/Collision.h
        src/Collision.cpp
        src/FontManager.h
        src/FontManager.cpp
        src/Components/TextLabelComponent.h
        src/Components/ColliderComponent.h
        src/Components/SpriteComponent.h
        src/Components/TransformComponent.h
        src/Components/TileComponent.h
        src/Components/KeyboardControlComponent.h
        src/Components/ProjectileEmitterComponent.h
)

# Tells CMake that the find scripts are inside inside subfolder /cmake
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${2DGameEngineCLion_SOURCE_DIR}/cmake")

# Asks CMake to find the SDL libraries in our system
find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)

# Asks CMake to include the library folders during build
include_directories(
        ${SDL2_INCLUDE_DIR}
        ${SDL2_IMAGE_INCLUDE_DIR}
        ${SDL2_TTF_INCLUDE_DIR})

# Asks CMake to link against the libraries during build
target_link_libraries(
        2DGameEngineCLion
        ${SDL2_LIBRARY}
        ${SDL2_IMAGE_LIBRARIES}
        ${SDL2_TTF_LIBRARIES})