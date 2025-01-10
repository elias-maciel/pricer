//
// Created by elias on 10/01/2025.
//
#ifndef OPTION_PRICER_H
#define OPTION_PRICER_H

#include <cmath>

class OptionPricer {
public:
    OptionPricer(double spot, double strike, double rate, double volatility, double timeToMaturity);

    double calculateCallPrice() const; // Calcula o preço da opção de compra
    double calculatePutPrice() const;  // Calcula o preço da opção de venda

private:
    double spotPrice;       // Preço do ativo subjacente (S)
    double strikePrice;     // Preço de exercício (K)
    double riskFreeRate;    // Taxa de juros livre de risco (r)
    double volatility;      // Volatilidade (σ)
    double timeToMaturity;  // Tempo até o vencimento (T)

    double d1() const;      // Calcula o d1 da fórmula de Black-Scholes
    double d2() const;      // Calcula o d2 da fórmula de Black-Scholes
    double normalCDF(double x) const; // Função de distribuição acumulada
};

#endif // OPTION_PRICER_H
