#include <chrono>
#include <thread>
#include "DelayForCrossPlatform.h"

void delay(int milliseconds) {
  std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}
