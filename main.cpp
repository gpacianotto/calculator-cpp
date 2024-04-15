#include "classes.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    
    int real_argc = argc - 1;

    if(real_argc % 3 != 0) {
        cout<<"arguments missing, exiting...\n";
        return 1;
    }

    Calculadora c;

    int i = 1;

    while(i < argc)
    {   
        
        /* cout<<"i: "<<i<<"\n"; */
        string operation = argv[i];
        double arg1 = stod(argv[i+1]);
        double arg2 = stod(argv[i+2]);

        /* cout<<"operation: "<<operation<<"\n";
        cout<<"arg1: "<<arg1<<"\n";
        cout<<"arg2: "<<arg2<<"\n"; */

        if(operation == "soma") {
            double result = c.soma(arg1, arg2);
            cout << arg1<< " + " << arg2 << " = " <<result<<"\n";
            i = i + 3;
            continue;
        }

        if(operation == "subtracao") {
            double result = c.subtracao(arg1, arg2);
            cout << arg1<< " - " << arg2 << " = " <<result<<"\n";
            i = i + 3;
            continue;
        }

        if(operation == "multiplicacao") {
            double result = c.multiplicacao(arg1, arg2);
            cout << arg1<< " * " << arg2 << " = " <<result<<"\n";
            i = i + 3;
            continue;
        }

        if(operation == "divisao") {
            double result = c.divisao(arg1, arg2);
            cout << arg1<< " - " << arg2 << " = " <<result<<"\n";
            i = i + 3;
            continue;
        }

        if(operation == "potencia") {
            double result = c.pot(arg1, arg2);
            cout << arg1<< " ^ " << arg2 << " = " <<result<<"\n";
            i = i + 3;
            continue;
        }

        i = i + 3;
        
    }

    return 0;
}