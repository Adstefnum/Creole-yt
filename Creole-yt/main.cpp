#include <SFML/Graphics.hpp>
#include "Vector3.h"
#include <iostream>
#include <iomanip>

int main()
{
    Vector3 v1(5, 2, 3);

    Vector3 v2(1, 5, 9);

    Vector3 result = v1 + v2;
    float resultf = v1.calculateAngleBetween(v2);

    std::cout << std::setw(15) << v1.x << std::setw(8) << "|" << std::setw(8) << v1.y << "|" << std::setw(8) << v1.z << std::endl;
    std::cout << std::setw(15) << v2.x << std::setw(8) << "|" << std::setw(8) << v2.y<< "|" << std::setw(8) << v2.z << std::endl;
    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    std::cout << std::setw(15) << result.x << std::setw(8) << "|" << std::setw(8) << result.y << "|" << std::setw(8)  << result.z << std::endl;
    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    std::cout << resultf << std::endl;

    return 0;
}
