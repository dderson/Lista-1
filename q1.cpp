#include <iostream>

int main(void)
{
    int x, y, z;
    float media;
    std::cout << "Digite 3 números inteiros" << std::endl;
    std::cin >> x >> y >> z;
    media = (x+y+z)/3;

    std::cout << "A média é " << media << "." << std::endl;

 return 0;
}