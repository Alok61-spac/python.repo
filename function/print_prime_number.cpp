//print prime number  2 to N number.
#include<iostream>
using namespace std;

int print_prime_number(){
    int number;
    cout<<"Enter your number:";
    cin>>number;
    for(int i=2;i<=number;i++){
        if(i%2!=0){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    print_prime_number();
    return 0;
}