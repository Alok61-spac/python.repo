//factorial of n numbres.
#include <iostream>
using namespace std;

int factorial(int n){
    int Factorial=1;
    while(1<=n){
        Factorial *= n;
        n--;
    }
    return Factorial;
}
int main() {
    cout<<factorial(5);
    return 0;
}

