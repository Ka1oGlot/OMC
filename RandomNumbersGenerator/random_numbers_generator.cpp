#include <iostream>
#include <ctime>
#include <cstdlib>

int rand(int low, int high) {
    return std::rand() % ((high + 1) - low) + low;
}

int main(){
    int low, high;
    srand(static_cast<unsigned>(time(nullptr)));

    std::cout << "Enter low edge: ";
    std::cin >> low;
    std::cout << "Enter high edge: ";
    std::cin >> high;

    if (low > high) {
        std::cerr << "Error: lower edge is bigger than higher!\n";
        exit(EXIT_FAILURE);
    }
    
    std::cout << rand(low, high) << std::endl;
    return 0;
}