// program05------------------------
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int limitcase;
    cout<<"Enter the LimitValue: ";
    cin>>limitcase;
    for(int i=1;i<=limitcase;i++){
        for(int j=limitcase;j>=i;j--){
            cout<<"* ";
        }
        cout<<"\n";
    }

    return 0;
}