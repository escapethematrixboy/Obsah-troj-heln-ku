#include <iostream>
#include <cmath>

int main() {

    double firstNum, secondNum, thirdNum, result, userChoise;

    std::cout << "Obsah trojúhelníku: \n"
         << "1. Klasický vzorec (základna a výška)\n"
         << "2. Heronův vzorec (když znáš délky všech tří stran)\n"
         << "3. Vzorec pomocí úhlu\n"
         << "Který způsob by vám vyhovoval? (1, 2, 3): ";
    
    std::cin >> userChoise;

    if (userChoise == 1) {
        
        std::cout << "Uved' délku a výšku: ";
        std::cin >> firstNum >> secondNum;
        std::cout << "Obsah trojúhelníku je: " << 0.5 * firstNum * secondNum << std::endl;

    }

    else if (userChoise == 2) {

        std::cout << "Uved' délky strán a, b, c: ";
        std::cin >> firstNum >> secondNum >> thirdNum;

        double s = (firstNum + secondNum + thirdNum) / 2;
        double area = sqrt(s * (s - firstNum) * (s - secondNum) * (s - thirdNum));

        std::cout << "Obsah trojúhelníku je: " << area << std::endl;

    }

    else if (userChoise == 3) {

        std::cout << "Uved' dvě strány a úhel mezi nimi: ";
        std::cin >> firstNum >> secondNum >> thirdNum;

        double angleInRadians = thirdNum * M_PI / 180.0;
        double area = 0.5 * firstNum * secondNum * sin(angleInRadians);

        std::cout << "Obsah trojúhelníku je: " << area << std::endl;

    }

    else {

        std::cout << "Neplatná volba" << std::endl;

    }

    return 0;
}
