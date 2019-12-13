
#pragma once

#include <vector>
#include <cstdint>
namespace vox {
  inline int x(const uint32_t v) { return (v >> 24) & 0xff; }
  inline int y(const uint32_t v) { return (v >> 16) & 0xff; }
  inline int z(const uint32_t v) { return (v >> 8 ) & 0xff; }
  inline int c(const uint32_t v) { return (v      ) & 0xff; }

  struct material_t {
    int     id;
    int     type;
    float   weight;
    int     property;
    float   property_value[8];
  };

  struct model_t {
    int size_x;
    int size_y;
    int size_z;

    std::vector<uint32_t> voxels;
  };

  struct vox_t {
    std::vector<model_t>    models;
    std::vector<material_t> materials;
    unsigned int            palette[256];
  };

  bool parse(char* fileName, vox_t& vox);

}