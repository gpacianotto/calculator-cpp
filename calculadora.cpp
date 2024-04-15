#include "classes.h"
#include <iostream>
using namespace std;

double Calculadora::soma(double n1, double n2) {
    _times_used++;
    return n1 + n2;
}

double Calculadora::multiplicacao(double n1, double n2) {
    _times_used++;
    return n1 * n2;
}

double Calculadora::divisao(double n1, double n2){
    _times_used++;
    if(n2 == 0) {
        cout<<"[Erro]: divisor não pode ser 0";
        return -1;
    }
    return n1/n2;
}

double Calculadora::subtracao(double n1, double n2) {
    _times_used++;
    return n1 - n2;
}

double Calculadora::pot(double n1, double n2) {
    double acc = n1;
    _times_used++;

    if(n2 == 0) {
        return 1;
    }

    for (size_t i = 0; i < n2; i++)
    {
        acc = acc * n1;
    }

    return acc;
}