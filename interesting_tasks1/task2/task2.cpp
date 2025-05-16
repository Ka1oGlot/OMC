#include <iostream>

void ShowArray(int* arr, int n) {
    for (int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
long double fact(int n)
{
    if (n == 0 || n == 1){
        return 1;
    }
    return n * fact(n - 1);
}

int main(){
    int n;
    std::cout << "Enter the number of the rows(n): ";
    std::cin >> n;
    if (n < 0) {
        std::cerr << "Error: number of rows must be positive!\n";
        exit(EXIT_FAILURE);
    }
    int* arr = new int[n];
    for (int i = 0; i <= n; i++){
        arr[i] = fact(n)/(fact(i)*fact(n - i));
    }
    for (int i = 0; i <= n; i++){
        std::cout << arr[i] << " ";
    }
}