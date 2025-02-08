// program24-------------------------------


#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int limitcase;
    cout<<"Enter the LimitValue: ";
    cin>>limitcase;
    int a=0;
    for(int i=1;i<=limitcase*2-1;i++){
        for(int j=1;j<=limitcase*2-1;j++){
            if(i==1 || i==limitcase*2-1){cout<<"* ";}
            else if(j==1 || j==((limitcase*2)-1)-a || j==i || j==limitcase*2-1){cout<<"* ";}
            else{cout<<"  ";}
        }
        a++;
        cout<<"\n";
    }
    return 0;
}
