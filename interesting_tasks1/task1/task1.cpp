#include <iostream>

int main(){
    int n;
    std::cout << "Enter some number(n): ";
    std::cin >> n;

    std::cout << "Triples(a, b, c) that satisfy the equation a^2 + b^2 = c^2 and aren't bigger than " << n << std::endl;

    for (int a = 1; a <= n; a++){
        for (int b = a; b <= n; b++){
            for (int c = b; c <=n; c++){
                if (a*a + b*b == c*c){
                    std::cout << "(a: " << a << ", " << "b: " << b << ", " << "c: " << c << ")\n";
                }
                
            }
        }
    }
    return 0;
}