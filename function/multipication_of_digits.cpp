//multipication of digits of a number.
#include <iostream> 
using namespace std;

int multiply_digits(){
    int number;
    cout<<"enter the number:";
    cin>>number;
    int multipication=1;
    while(number>0){
        int last_digit = number%10;
        multipication *= last_digit;
        number/= 10;

    }
    return multipication;
}
int main(){
   int result= multiply_digits();
    cout<<result;
    return 0;

}