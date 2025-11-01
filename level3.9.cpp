#include <iostream>

using namespace std;

int main() {

    int n,k=0;
    cout<<"eded daxil edin:";
    cin>>n;
    for(int i=1;i<=n;i++)
        if(n%i==0)
            k=k+1;
    if(k==2){
        cout<<"sadedir";
    }
    else if(k==0 ||k==1){
        cout<<"ne sade, ne murekkeb";
    }
    else{
        cout<<"murekkebdir";
    }

    return 0;
}





