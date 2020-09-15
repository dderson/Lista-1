#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
    int cont;
    float media, soma=0;
    //std::cout << "Digite 3 números interiros" << std::endl;
    //std::cin >> x >> y >> z;
    /* x = atoi(argv[1]);
    y = atoi(argv[2]);
    z = atoi(argv[3]);
    media = (x+y+z)/3; */
    /* std:: cout << "argc = " << argc << std::endl; */

    for(int i=1; i < argc; i++){
        cont = atoi(argv[i]);
        soma += cont;
    }

    media = soma/(argc-1);

    std::cout << "A média é " << media << "." << std::endl;

 return 0;
}