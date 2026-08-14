//subtraction of digits of a number.
#include<iostream>
using namespace std;

int subtract_digit(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    int last_digit =number%10;
    int subtract= last_digit;
    number /=10;
    for(int i=10;number>0;i+=0){
         last_digit = number%i;
        subtract -= last_digit;
        number/=i;
    }
    return subtract;
}
int main(){
   cout<<subtract_digit();
    return 0;
}