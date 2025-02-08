// program15------------------------

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int limitcase;
    cout<<"Enter the LimitValue: ";
    cin>>limitcase;
    int count=1;
    for(int i=0;i<limitcase;i++){
        for(char j='A';j<'A'+(limitcase-i);j++){
            cout<<j<<" ";
            count++;
        }
        cout<<"\n";
    }
}
