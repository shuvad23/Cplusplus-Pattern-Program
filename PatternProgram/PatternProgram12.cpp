// program12---------------------

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int limitcase;
    cout<<"Enter the LimitValue: ";
    cin>>limitcase;
    for(int i=1;i<=limitcase;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int k=1;k<=((limitcase*2)-(2*i));k++){
            cout<<"  ";
        }
        for(int l=i;l>=1;l--){
            cout<<l<<" ";
        }
        cout<<"\n";
    }
}
