/**@Copyright (C) 2019 Ari Kupferberg, Zuyang Cao
 * @file        main.cpp
 * @author      Ari Kupferberg, Zuyang Cao
 * @date        09/26/2019
 * @brief       main.cpp for unit test file
 */

#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
