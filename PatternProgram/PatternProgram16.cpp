// program16--------------------------

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int limitcase;
    cout<<"Enter the LimitValue: ";
    cin>>limitcase;
    int countvalue=limitcase;
    for(char i='A';i<'A'+limitcase;i++){
        for(int j=0;j<=limitcase-countvalue;j++){
            cout<<i<<" ";
        }
        countvalue--;
        cout<<"\n";
    }
}
