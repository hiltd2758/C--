#include <iostream>

void drawChristmasTree(const int base_height, const int num_levels) {
 
  const int max_layer_width = (2 * num_levels) - 1;


  for (int level = 1; level <= num_levels; ++level) {

    for (int layer = 1; layer <= level; ++layer) {
    
      const int num_leaves = (2 * layer) - 1;
      const int num_spaces =  (max_layer_width / 2) - (num_leaves / 2);


      for (int i = 0; i < num_spaces; ++i) {
        std::cout << " ";
      }

      for (int i = 0; i < num_leaves; ++i) {
        std::cout << "*";
      }

      std::cout << std::endl;
    }
  }

  const int num_spaces_for_base = max_layer_width / 2;
  for (int i = 0; i < base_height; ++i) {

    for (int j = 0; j < num_spaces_for_base; ++j) {
      std::cout << " ";
    }

    std::cout << "*" << std::endl;
  }
}

int main() {
  drawChristmasTree(5, 5);
  return 0;
}