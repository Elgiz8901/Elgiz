#include <iostream>

using namespace std;

int main(){
    int a,i=0;
    cout<<"ededi daxil edin:";
    cin>>a;
    if(a<0){
        a=-a;
    }
    while(a>0){
        a=a/10;
        i=i+1;
    }
    cout<<i;


    return 0;
}

