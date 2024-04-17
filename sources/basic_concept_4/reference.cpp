#include <iostream>



void func(int (&array)[3]){
    std::cout << sizeof(array) << "\n";
}


int main(){

    int a = 10;

    int& b = a;

    int& c = b;

    ++b;
    ++c;


    std::cout << b << "\n";

    std::cout <<  c << "\n";


    int* d = &a;

    ++(*d);

    std::cout << a << "\n";



    int A[3], B[4];

    int* C = A;

    func(A);

    //func(B);

}