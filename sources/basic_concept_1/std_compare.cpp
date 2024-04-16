#include <iostream>


int main(){
    unsigned a = 4;
    int b = -3;

    bool v1 = (b < a);

    bool v2 = std::cmp_greater(a,b);

    std::cout << v1 << " \n" << v2 << "\n";

}