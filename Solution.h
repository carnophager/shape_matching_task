#ifndef SOLUTION_H_
#define SOLUTION_H_

#include <cstdint>

#include "utils/Image.h"
#include "utils/FunctionTracer.h"

class Solution {
public:
  void compute([[maybe_unused]]std::vector<PackedImage> &images) {
    FunctionTracer<std::chrono::milliseconds> tracer("compute", "ms");
    //TODO: fill solution
    int s = 5;
    int d = s+ 5;
    std::cout << "solutio" << std::endl;
  }

  void compute([[maybe_unused]]std::vector<StrideImage> &images) {
    FunctionTracer<std::chrono::milliseconds> tracer("compute", "ms");
    //TODO: fill solution
    tracer.captureDuration();
    size_t images_count = images.size();
    for ( int id = 0; id < images_count; ++id) {
        StrideImage& image = images[id];
        size_t pixels_size = image.redPixels.size();
        for (int i = 0; i < pixels_size; ++i) {
            uint8_t& red_pixel = image.redPixels[i];
            if (red_pixel >= 200) {
                red_pixel -= 150;
            }

            //std::cout << unsigned(images[id].redPixels[i]) << ", " << unsigned(images[id].greenPixels[i]) << ", "
              //      << unsigned(images[id].bluePixels[i]) << ", " << unsigned(images[id].alphaPixels[i]) << ", ";
        }
    }
      //std::cout << std::endl;
  }
};

#endif /* SOLUTION_H_ */
