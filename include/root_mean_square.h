#pragma once

#include "matrix.h"

typedef Matrix<tuple<uint, uint, uint>> Image;

double root_mean_square(const Image&, const Image&, int shift_i, int shift_j);
