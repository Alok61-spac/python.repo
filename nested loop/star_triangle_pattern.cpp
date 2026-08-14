//print triangle made up of star.
#include <iostream>
using namespace std;

int main(){
    for(int i = 1;i<6;i++){
        for(int z=1;z<i+1;z++){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}