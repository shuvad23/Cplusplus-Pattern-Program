// program06--------------------------

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int limitcase;
    cout<<"Enter the LimitValue: ";
    cin>>limitcase;
    for(int i=0;i<limitcase;i++){
        for(int j=1;j<=limitcase-i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    return 0;
}