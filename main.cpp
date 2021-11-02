#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <stdio.h>

int main()
{

    std::cout << "Choose an option" << std::endl;
    std::cout << "1 - Excercise 1" << std::endl;
    std::cout << "2 - Excercise 2" << std::endl;
    std::cout << "3 - Excercise 3" << std::endl;
    std::cout << "x - Exit" << std::endl;
    int num, iter, i, n;
    double pi = 0.0;
    long double z = 1.0;
    std::cin >> num;
        switch(num) {
    case 1:
        std::cout << "Enter the number of iterations" << std::endl;
        std::cin >> iter;
        for(int i=0; i<1000 ;i++) {
            pi = pi + (pow(-1,i)/(2*i+1));
        }
        std::cout << "pi is equal to: " << std::setprecision(iter) << (pi*4) << std::endl;
        break;
    case 2:
        for(i=0; i<=255; i++)
            {

            if  (i%40 != 0) {
                printf("ASCII value of character %c = %d\n", i, i); }
            else {
                printf("ASCII value of character %c = %d\n", i, i);
                system("pause"); }
        }
        break;
    case 3:
        std::cout << "Enter n: " << std::endl;
        std::cin >> n;
        if (n > 1){
        for(int i = 1; i <= n; ++i) {
                    z *= i;
                }}
        else { z = 1; }
        std::cout << "Factorial of n is: " << z << std::endl;

        break;
    default:
        std::cout << "Exit" << std::endl;
        break;
}

    int option, min, max, l, x, a=0;
    std::cout << "Choose an option" << std::endl;
    std::cout << "1 - Excercise 1" << std::endl;
    std::cout << "2 - Excercise 2" << std::endl;
    std::cout << "'any other sign' - Exit" << std::endl;
    std::cin >> option;

        switch (option) {
    case 1:
        std::cout << "Provide the minimal and maximal number" << std::endl;
        std::cin >> min;
        std::cin >> max;
        std::cout<<"Prime Numbers between "<<min<<" and "<<max<<" are:" << std::endl;

            for(l=min; l<=max; l++)
            {
                 for(x=2; x<l; x++)
                {
                    if(l%x==0)
                    {
                        a++;
                        break;
                    }
                }
                if(a==0 && l!=1)
                    std::cout<<l<<std::endl;
                 a = 0;
            }
        break;
    case 2:
        int num1, num2;
        std::cout << "Provide two positive numbers" << std::endl;
        std::cin >> num1;
        std::cin >> num2;
        if (num1%num2 == 0) {
        std::cout << "The least common multiple for those numbers is: " << num1 << std::endl;
        }
        else if (num2%num1 == 0) {
        std::cout << "The least common multiple for those numbers is: " << num2 << std::endl;
        }
        else {
        std::cout << "The least common multiple for those numbers is: " << num1*num2 << std::endl;
        }
            break;
        }
    return 0;
}
