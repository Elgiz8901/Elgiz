#include <iostream>

using namespace std;

int main(){
    int x;

    cout<<"bir eded daxil edin:";

    cin>>x;

    if(x>0)
        cout<<"Musbetdir."<<endl;

    else if(x<0)
        cout<<"Menfidir."<<endl;

    else
        cout<<"Sifirdir."<<endl;

    return 0;
}
