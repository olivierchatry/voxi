cmake_minimum_required (VERSION 3.6)

project(voxi CXX)

add_subdirectory(externals/DiligentEngine)


set(SOURCE
  src/VoxApp.cpp
  src/vox.cpp
)

set(INCLUDE
  src/VoxApp.h
  src/vox.h
)

set(SHADERS)
set(ASSETS)

set(INSTALL_DILIGENT_SAMPLES OFF)
add_sample_app("voxi" "./" "${SOURCE}" "${INCLUDE}" "${SHADERS}" "${ASSETS}")

# add_subdirectory(externals/DiligentEngine)

# set(SOURCE
#     src/main.cpp
#     src/vox.cpp
# )

# add_executable(voxi WIN32 ${SOURCE})
# target_compile_options(voxi PRIVATE -DENGINE_DLL)
# target_include_directories(voxi PRIVATE 
#   "./"
#   "./externals/DiligentEngine"
# )

# set_target_properties(voxi PROPERTIES
#     CXX_STANDARD 11
#     CXX_STANDARD_REQUIRED ON
#     CXX_EXTENSIONS OFF
# )

# target_link_libraries(voxi PRIVATE GL X11 Diligent-GraphicsEngineOpenGL-shared)

# if(VULKAN_SUPPORTED)
#     target_link_libraries(voxi PRIVATE Diligent-GraphicsEngineVk-shared xcb)
# endif()
