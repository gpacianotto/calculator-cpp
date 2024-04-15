#ifndef CLASSES_H
#define CLASSES_H
#include <string>
using namespace std;


class Calculadora {
    public:
        double soma(double n1, double n2);
        double multiplicacao(double n1, double n2);
        double divisao(double n1, double n2);
        double subtracao(double n1, double n2);
        double pot(double n1, double n2);
        int getTimesUsed();
    private:
        int _times_used = 0;
};

#endif