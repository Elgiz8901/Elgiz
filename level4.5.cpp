#include <iostream>

using namespace std;

int main(){
    int n,k=0;
    cout<<"Eded daxil edin:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            k=k+1;
        }
    }
    cout<<k;
    return 0;
}

