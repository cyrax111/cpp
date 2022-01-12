#include <iostream>                                    
#include <cmath>                                     

int main() {
    long double a, b, c, x;

    std::cout << "Введите a: ";
    std::cin >> a;
    std::cout << std::endl << "введите b: ";
    std::cin >> b;
    std::cout << std::endl << "введите c: ";
    std::cin >> c;
    std::cout << std::endl << "введите x: ";
    std::cin >> x;

    long double y = 1.2 * exp(pow(x, 2)) * (pow(a - b, 3) - c/pow(x, 2)) / ( (abs(a) - b) * (a - b) );
    long double z = pow(10, -1) * c * pow(x, 3) * tan(abs(a) - b);

    long double S = y + z;

    std::cout << "S = " << S << " (y=" << y << ",z=" << z << ")" << std::endl;

    return 0;
}
