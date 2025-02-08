// program11-----------------------

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int limitcase;
    cout<<"Enter the LimitValue: ";
    cin>>limitcase;
    int count=1;
    for(int i=1;i<=limitcase;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                cout<<count<<" ";
                if(count==0){count=1;}
                else{count=0;}
                if(j==i){count=1;}
            }
            else{
                cout<<count<<" ";
                if(count==1){count=0;}
                else{count=1;}
                if(j==i){count=0;}
            }
        }
        cout<<"\n";
    }
    return 0;
}
