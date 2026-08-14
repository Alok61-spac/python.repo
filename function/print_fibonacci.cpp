//print nth fibonacci.
#include<iostream>
using namespace std;

int print_fibonacci(){
    int number;
    cout<<"Enter your number:";
    cin>>number;
    int first_number=0;
    int second_number=1;
    cout<<first_number<<endl<<second_number<<endl;
    for(int i=0;i<=number;i++){
        int fibonacci=first_number+second_number;
        cout<<fibonacci;
        first_number=second_number;
        second_number=fibonacci;
        cout<<endl;
    }
}
int main(){
    print_fibonacci();
    return 0;
}