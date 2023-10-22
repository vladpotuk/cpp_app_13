#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
    system("chcp 1251");
    system("cls");
    double number1, number2;

    
    std::cout << "¬вед≥ть перше число: ";
    std::cin >> number1;

   
    std::cout << "¬вед≥ть друге число: ";
    std::cin >> number2;

    
    if (number1 < number2) {
        std::cout << "ћенше число: " << number1 << std::endl;
    }
    else {
        std::cout << "ћенше число: " << number2 << std::endl;
    }

    return 0;
}







