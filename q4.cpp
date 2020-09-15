#include <iostream>
#include <cmath>
#include <cstdlib>
#include "q4.h"

int main(int argc, char* argv[]){

    //numero de elementos do conjunto
    float x = argc - 1;
    /* std::cin >> x; */
    float *v;
    float soma = 0.0;

    v = (float *)malloc(argc * sizeof(float));
    
    //recebendo elementos do conjunto
    for(int i=1; i < argc; i++){
        v[i] = atof(argv[i]);
        //soma dos elementos
        soma += v[i];
        /* std:: cout<< "a soma é: "<< soma<< std::endl; */
    }
    //media aritmetica
    
    float mediaAritmetica;
    mediaAritmetica = mediaAritimetica (soma, x);

    std:: cout<< "A media aritmetica é: "<< mediaAritmetica<< std::endl;
    //calculo da variancia
    float variancia = 0;
    float somaElementos;

    for(int i=1; i<= x; i++){
        somaElementos = pow((v[i]-mediaAritmetica), 2);
        /* std::cout<< "a soma de elementos é = "<< somaElementos << std::endl; */
        variancia += somaElementos;
        /* std::cout<< "a variancia é = "<< variancia << std::endl; */
    }

    variancia /= x;
    std::cout<< "A variância desse conjunto de números é: "  <<variancia<<std::endl;
    

    return 0;
}
