#include <iostream>

int main(){
    int* ptr1 = new int;

    int* arr1 = new int[10];

    int* ptr2 = new (std::nothrow) int[1000000];


}