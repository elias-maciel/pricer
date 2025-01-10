//
// Created by elias on 10/01/2025.
//

#include <iostream>
#include "OptionPricer.h"

int main() {
  double spotPrice = 100.0;
  double strikePrice = 100.0;
  double riskFreeRate = 0.05;
  double volatility = 0.2;
  double timeToMaturity = 1.0;

  OptionPricer pricer(spotPrice, strikePrice, riskFreeRate, volatility, timeToMaturity);

  double callPrice = pricer.calculateCallPrice();
  double putPrice = pricer.calculatePutPrice();

  std::cout << "Call Price: " << callPrice << std::endl;
  std::cout << "Put Price: " << putPrice << std::endl;

  return 0;
  }