//printing of squar pattern
#include <iostream>
using namespace std;

int main(){
    int num=3;
    int n= 3;
    int numb=1;
    for(int i = 1;i<=num;i++){
        for(int z=1;z<=n;z++){
            cout<<numb<<" ";
            numb++;
        }
        cout<<endl;
    }
    return 0;
}