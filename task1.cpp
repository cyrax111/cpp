#include <iostream>                                    
#include <cmath>                                     

int main() {
    double x, y;
    double z1, z2;

    // std::cout << "Введите x: ";
    // std::cin >> x;
    // std::cout << std::endl << "введите y: ";
    // std::cin >> y;

    double step = 0.01;

    for(x = 0; x <= M_PI; x+=step) {
        for(y = 0; y <= M_PI; y+=step) {
            z1 = pow(cos(x), 4) + pow(sin(x), 2) + 1/4 * pow(sin(2*x), 2) - 1;
            z2 = sin(y+x) * sin(y-x);
            if(z1 == z2) break;
        }
        if(z1 == z2) break;
    }
    

    if(z1 == z2) {
        std::cout << "z1(" << z1 << ") равно z2(" << z2 << ")" << std::endl;
        return 0;
    }
    return 1;
}
