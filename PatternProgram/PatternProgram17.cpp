// program17-----------------------

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int limitcase;
    cout<<"Enter the LimitValue: ";
    cin>>limitcase;
    int countvalue=limitcase;
    for(int i=1;i<=limitcase;i++){
        for(int j=1;j<=limitcase-i;j++){
            cout<<"  ";
        }
        for(char ch='A';ch<'A'+limitcase-countvalue;ch++){
            cout<<ch<<" ";
        }
        for(char ch1='A'+limitcase-countvalue;ch1>='A';ch1--){
            cout<<ch1<<" ";
        }
        countvalue--;
        cout<<"\n";
    }
}
