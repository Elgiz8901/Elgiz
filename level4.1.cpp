#include <iostream>

using namespace std;

int main(){
    int a,i=0,cem=0;
    cout<<"ededi daxil edin:";
    cin>>a;
    while(i<a){
        i=i+1;
        if(i%2==0){
            cem=cem+i*i;

        }
    }
    cout<<cem;
    return 0;
}

