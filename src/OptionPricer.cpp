//
// Created by elias on 10/01/2025.
//
#include "OptionPricer.h"

OptionPricer::OptionPricer(double spot, double strike, double rate, double volatility, double timeToMaturity)
    : spotPrice(spot), strikePrice(strike), riskFreeRate(rate), volatility(volatility), timeToMaturity(timeToMaturity) {}

double OptionPricer::calculateCallPrice() const {
    return spotPrice * normalCDF(d1()) - strikePrice * std::exp(-riskFreeRate * timeToMaturity) * normalCDF(d2());
}

double OptionPricer::calculatePutPrice() const {
    return strikePrice * std::exp(-riskFreeRate * timeToMaturity) * normalCDF(-d2()) - spotPrice * normalCDF(d1());
}

double OptionPricer::d1() const {
    return (std::log(spotPrice/strikePrice + (riskFreeRate + 0.5 * volatility * volatility))* timeToMaturity)
        / (volatility * std::sqrt(timeToMaturity));
}

double OptionPricer::d2() const {
    return d1() - volatility * std::sqrt(timeToMaturity);
}

double OptionPricer::normalCDF(double x) const {
    return 0.5 * (1.0 + std::erf(x/std::sqrt(2.0)));
  }