#include <iostream>
#include "matrix/matrix.h"

#include <perfcpp/event_counter.h>

#define CACHE_FLUSH_SIZE 1000000

std::string benchmark(bool baseline = false, uint32_t iterations = 100);
bool validate();