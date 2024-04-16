#include <iostream>

struct A{
    int age;
    char* name;
};

enum color_t {BLACK, GREEN, RED};

enum class Color {GREEN, BLUE, RED};

int main(){

   Color color = Color::RED;

   std::cout << (color == Color::RED) << "\n";
}

