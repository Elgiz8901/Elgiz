#include <iostream>

using namespace std;

int main(){
    int bal;

    cout<<"Balinizi daxil edin:";
    cin>>bal;

    if(bal>=0 && bal<=50)
        cout<<"F";
    else if(bal<=60)
        cout<<"E";
    else if(bal<=70)
        cout<<"D";
    else if(bal<=80)
        cout<<"C";
    else if(bal<=90)
        cout<<"B";
    else
        cout<<"A";
    return 0;
}
