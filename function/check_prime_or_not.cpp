//check number is prime or not.
#include <iostream>
using namespace std;

int check_number(){
    int number;
    cout<<"Enter your number which one to be check for prime:";
    cin>>number;
    if(number<=1){
        cout<<"not prime";
        }
        else if(number%2==0){
            cout<<"not prime";
        }
        else{
            cout<<"prime";
        }

}
int main(){
    check_number();
    return 0;
}