#include <iostream>

int main(){

    int arr[4] = {1,2,3,4};

    std::cout << arr[1] << "\n";

    std::cout << *(arr + 1) << "\n";

    std::cout << arr << "\n";

}