// program08------------------------------

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int limitcase;
    cout<<"Enter the LimitValue: ";
    cin>>limitcase;
    int countvalue=limitcase;
    for(int i=limitcase;i>=1;i--){
        for(int j=1;j<=limitcase-countvalue;j++){
            cout<<"  ";
        }
        for(int k=(2*i-1);k>=1;k--){
            cout<<"* ";
        }
        countvalue--;
        cout<<"\n";
    }

    return 0;
}

