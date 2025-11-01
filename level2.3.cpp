#include <iostream>

using namespace std;

int main(){
    int a,b,c;

    cout<<"uc eded daxil edin:";

    cin>>a>>b>>c;

    if(a>=b && a>=c)
        cout<<a<<" en boyukdur."<<endl;

    else if(b>=a && b>=c)
        cout<<b<<" en boyukdur."<<endl;
    else
        cout<<c<<" en boyukdur."<<endl;


    return 0;
}
