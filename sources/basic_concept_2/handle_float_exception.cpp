#include <cfenv>
#include <iostream>

using namespace std;

int main(){
    feclearexcept(FE_ALL_EXCEPT);

    auto x = 1.0 / 0;

    cout << (bool) fetestexcept(FE_DIVBYZERO) << "\n";
}