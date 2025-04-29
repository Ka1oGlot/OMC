#include <iostream>
#include <ctime>
#include <cstdlib>

int rand(int low, int high) {
    return low + std::rand() % (high - low + 1);
}

int main(){
    int low, high;

    std::cout << "Введіть нижню межу (low): ";
    std::cin >> low;
    std::cout << "Введіть верхню межу (high): ";
    std::cin >> high;

    if (low > high) {
        std::cerr << "Помилка: нижня межа більша за верхню!\n";
        exit(EXIT_FAILURE);
    }

    srand(static_cast<unsigned>(time(nullptr) / 0.24));
    std::cout << std::rand() << std::endl;
    return 0;
}