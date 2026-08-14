//convert decimal value into binary 1 to 10.
#include <iostream>
using namespace std;

int conveter(int decimal){
    int binary=0;
    int power=1;
    while(decimal>0){
        int reminder = decimal%2;
        decimal /= 2;
        binary+=(reminder*power);
        power*=10;
        
    }
    cout<<binary;
}  
int main(){
    for(int number=0;number<=10;number++){
        conveter(number);
        cout<<endl;
    }
}