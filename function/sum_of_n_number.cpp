//sum of n numbers.
#include <iostream>
using namespace std;
void sum(){
    int n;
    cout<<"Enter the number of turms:";
    cin>>n;
    int sum = n*(n+1)/2;
    cout<<"Sum ="<<sum;
        
    }
int main(){
    sum();
    return 0;
}
