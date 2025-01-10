//
// Created by elias on 10/01/2025.
//

#include <gtest/gtest.h>
#include "OptionPricer.h"

TEST(OptionPricer, CallPrice) {
  OptionPricer pricer(100.0, 100.0, 0.05, 0.2, 1.0);
  ASSERT_NEAR(pricer.calculateCallPrice(), 10.45, 0.01);
}

TEST(OptionPricer, PutPrice) {
  OptionPricer pricer(100.0, 100.0, 0.05, 0.2, 1.0);
  ASSERT_NEAR(pricer.calculatePutPrice(), 5.57, 0.01);
}