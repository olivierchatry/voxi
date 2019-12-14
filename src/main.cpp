#include <fstream>
#include <string.h>

#include "vox.h"

int main(int ac, char** av) {
  vox::vox_t model;
  vox::parse(av[1], model);
}