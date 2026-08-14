//sum of digits of a number.
#include<iostream>
using namespace std;

void add_digits_of_number(){
    int n;
    cout<<"Enter the numbwe:";
    cin>>n;
    int sum=0;
    int lastdigit=0;
    while(n>0){
       lastdigit =n%10;
        n=n/10;
        sum +=lastdigit;
    }
    cout <<sum;
}
int main(){
    add_digits_of_number();
    return 0;
}
