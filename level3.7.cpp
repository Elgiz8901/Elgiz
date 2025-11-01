#include <iostream>

using namespace std;

int main(){

    int eded,cem=0;

    while (true){

        cout<<"o-dan ferqli bir eded daxil edin:";

        cout<<"Eded daxil edin:";
        cin>>eded;

        if(eded==0)
            break;
        cem=cem+eded;

    }
    cout<<cem;


    return 0;
}





