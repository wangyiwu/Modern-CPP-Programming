#include <iostream>

struct {
    int x;
} my_struct;


int main(){
    my_struct.x = 10;

    std::cout << my_struct.x << "\n";
}