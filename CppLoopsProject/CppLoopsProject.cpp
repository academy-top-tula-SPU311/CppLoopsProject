#include <iostream>

int main()
{
    /* summa Gauss
    int numberMax{ 1000 };

    int summa{};
    int number{ 1 };

    while (number <= numberMax)
    {
        summa += number;
        number++;
    }

    std::cout << "Summa = " << summa << "\n";

    */


    int summa{};
    int number;

    // summa while not zero
    /*while (number != 0)
    {
        std::cout << "Input number (0 - exit): ";
        std::cin >> number;

        summa += number;
    }*/

    
    do {
        std::cout << "Input number (0 - exit): ";
        std::cin >> number;
        
        if(number != 0)
            summa += number;

    } while (number != 0);

    std::cout << "Summa = " << summa << "\n";
    

    // Power
    /*double x;
    int n;
    double p{ 1. };

    std::cout << "Input number: ";
    std::cin >> x;
    std::cout << "Input exp: ";
    std::cin >> n;*/

    /*int i{};
    while (i < n)
    {
        p *= x;
        i++;
    }*/

    /*for (int i{}; i < n; i++)
        p *= x;

    std::cout << "Power = " << p << "\n";*/
    

    // Factorial
    /*int n;
    std::cout << "Input n: ";
    std::cin >> n;

    unsigned long long fact{ 1 };

    int j{ 1 };
    while (j <= n)
        fact *= j++;
    std::cout << j;


    for (int i = 1; i <= n; i++)
        fact *= i;*/

    /*double i{ 1 };
    
    while (i >= 0)
    {
        std::cout << i << "\n";
        i = i - 0.1;
    }*/

    /*int number;
    std::cout << "Input number: ";
    std::cin >> number;

    for (int i{ 1 }; i < 10; i++)
        std::cout << number << " * " 
                  << i << " = " 
                  << number * i << "\n";*/

    int nMax{ 1000 };

    int summa{};
    for (int i = 1; i <= nMax; i++)
        if(i % 2 == 0)
            summa += i;

    summa = 0;
    for (int i{ 2 }; i <= nMax; i+=2)
        summa += i;


}
