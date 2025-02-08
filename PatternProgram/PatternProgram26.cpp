// program26-------------------


#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int limitcase;
    cout<<"Enter the value: ";
    cin>>limitcase;
    int ref=1;
    for(int i=0;i<limitcase;i++){
        for(int k=1;k<limitcase-i;k++){cout<<"  ";}
        
        for(int j=0;j<=i;j++){
            if(i==1 || j==0){ref=1;}
            else{
                ref=ref*(i-j+1)/j;
                
            }
            cout<<ref<<"   ";
        }
        cout<<"\n";
    }
    return 0;
}
