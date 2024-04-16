#include <iostream>

int f(int a, unsigned b, int* array) { 
        if (a > b)
            return array[a - b]; 
        return 0;
}

int main(){
    unsigned x = 32;

    x += 2u - 4;

    std::cout << x << "\n";

    uint64_t x2 = 32;

    x += 2u - 4;

    std::cout << x << "\n";

    
}
