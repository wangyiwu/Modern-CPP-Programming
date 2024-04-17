#include <iostream>

struct S {
    int a;
    int b;
};


int main(){

    int a(10);


    std::cout << a << "\n";

    int b1 = 1;
    int b2{-1};

    //why not show error here
    unsigned b3 = -1;

    unsigned b4{1};

    std::cout << b3 << "\n";

    S s1 = {1,2};

    S s2{3,4};

    S s3{.a = 5, .b = 6};

    std::cout << s3.a << "\n" << s3.b << "\n";

}