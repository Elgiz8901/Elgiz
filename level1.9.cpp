#include <iostream>

using namespace std;

int main()
{
    int saat,saniye,deqiqe,q;

    cout<<"saniyeni daxil edin:";

    cin>>saniye;

    saat=saniye/3600;
    deqiqe=(saniye%3600)/60;
    q=saniye%60;

    cout<<"saat:"<<saat<<endl<<"deqiqe:"<<deqiqe<<endl<<"saniye:"<<q<<endl;

    return 0;
}
