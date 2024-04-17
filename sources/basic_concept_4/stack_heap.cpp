#include <iostream>

int* func(){
    int array[3] = {555,2,3};

    return array;
}

int main(){

    int* ptr = func();

    //ilegal address access
    std::cout << ptr[0] << "\n";

}

