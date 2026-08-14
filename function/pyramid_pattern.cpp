//pyramid pattern made up od
#include<iostream>
using namespace std;

void print_pyramid(){
    for(int row=1;row<=6;row++){
        for(int space=row;space<=6;space++){
            cout<<" ";
        }
        for(int number=1;number<=row;number++){
            cout<<number;
        }
        for(int number2=row-1;number2>=1;number2--){
            cout<<number2;
        }
        cout<<endl;
    }
}
int main(){
    print_pyramid();
    return 0;
}