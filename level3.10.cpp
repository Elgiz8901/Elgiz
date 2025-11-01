#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"nece eded daxil edin:";
    cin>>n;
    int a=0,b=1,c;
    cout<<"fibonocci ededleri:";
    for(int i=1; i<=n;i++){
        cout<<a<<",";
        c=a+b;
        a=b;
        b=c;
    }


    return 0;
}





