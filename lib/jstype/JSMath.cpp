#include "JSMath.h"
#include <cmath>

std::random_device Math::_rd;
std::default_random_engine Math::_e(Math::_rd());
std::uniform_real_distribution<double> Math::_u(0, 1);

double Math::random() {
  return _u(_e);
}

int64_t Math::floor(double value) {
  return (int64_t)::floor(value);
}
int64_t Math::round(double value) {
  return (int64_t)::round(value);
}
int64_t Math::ceil(double value) {
  return (int64_t)::ceil(value);
}
