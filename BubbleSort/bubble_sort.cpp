#include <iostream>
#include <ctime>
#include <cstdlib>

void ShowArray(int* arr, int n) {
    for (int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
void InitializeArray(int* arr, int n) {
    for (int i = 0; i < n; i++){
        arr[i] = rand();
    }
}

int main(){
    int n;
    srand(static_cast<unsigned>(time(nullptr)));
    std::cout << "Enter the length of the array(n): ";
    std::cin >> n;
    int* arr = new int[n];
    InitializeArray(arr, n);
    std::cout << "Array before sorting:\n";
    ShowArray(arr, n);
    if (n<=0) {
        std::cerr << "Error: length must be positive!\n";
        exit(EXIT_FAILURE);
    }
    
    for (int i = 0; i < n-1; i++){
        for (int j = n-1; j > i; j--){
            if (arr[j] < arr[j-1]){
                std::swap(arr[j], arr[j-1]);
            }
        }
    }
    
    std::cout << "Array after sorting:\n";
    ShowArray(arr, n);
    return 0;
}