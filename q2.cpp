#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
    int x, y, z;
    float media;
    //std::cout << "Digite 3 números interiros" << std::endl;
    //std::cin >> x >> y >> z;
    x = atoi(argv[1]);
    y = atoi(argv[2]);
    z = atoi(argv[3]);
    media = (x+y+z)/3;

    /* std::cout<< argc<<std::endl; */

    std::cout << "A média é " << media << "." << std::endl;


 return 0;
}