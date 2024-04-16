#include <iostream>
using namespace std;

int main(){

    std::cout << 5.0 / 0.0 << "\n";

    auto inf = std::numeric_limits<float>::infinity;

    cout << -5.0 / 0.0 << "\n";

    cout << (-0.0 == 0.0) << "\n";
    
}