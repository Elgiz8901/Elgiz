#include <iostream>

using namespace std;

int main() {

    int a,q,ters=0;
    cout<<"ededi daxil edin:";
    cin>>a;
    while(a>0){
        q=a%10;
        a=a/10;
        ters=ters*10+q;
    }
    cout<<ters;

    return 0;
}





