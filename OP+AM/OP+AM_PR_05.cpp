// Практична 05
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

int alpha = 3;

int main() {
    int x; 
    double result = 0.0;
    std::cout << "Enter x: ";
    std::cin >> x;
    if ((alpha - x) > 0){
        result += sqrt(alpha - x);
    }
    else {
        result += pow((x + 2.0), 2) * pow((x-1.0), 3) + (double)sin(alpha * M_PI);
    }
    std::cout << sin(alpha * M_PI) << std::endl;
    std::cout << "x=" << x << ", alpha=" << alpha << ", result=" << result << std::endl;

    int a;
    int b;
    int c;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;

    double z1, z2, z3;
    z1 = -(2.0 * x + c) / (c * x + 2.0 * a);
    z2 = (double)(x-a) / sqrt(x) + c;
    z3 = ((3.0 * x) / c) + (-b / 2.0 * x * pow(x, 2) + 1);
    
    std::cout << "Result" << std::endl;
    std::cout << "1\t2\t3" <<std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::setw(7) << z1 << std::setw(7) << z2 << std::setw(7) << z3 << std::endl;
    return 0;
}