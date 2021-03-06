#pragma once

#include "matrix.h"

typedef Matrix<std::tuple<uint, uint, uint>> Image;

Image canny(const Image& src_image, uint threshold1, uint threshold2);
