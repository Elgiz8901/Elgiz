#include <iostream>

using namespace std;

int main(){

    int cem=0,qaliq,eded;

    cout<<"Ededi daxil edin:";
    cin>>eded;

    if(eded<0){
        eded=-eded;

    }
    while(eded>0){
        qaliq=eded%10;
        cem+=qaliq;
        eded/=10;
    }

    cout<<cem;

    return 0;
}





