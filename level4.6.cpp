#include <iostream>

using namespace std;

int main(){
   int N,l=0,s=0;
   cout<<"Eded sayin daxil edin:";
   cin>>N;
   int k;
   cout<<"Ededin birin daxil edin:";
   cin>>k;
   s=s+k;
   l=l+1;
   int max=k,min=k;
   for(int i=1;i<N;i++){
        int a;
        cout<<"Eded daxil edin:";
        cin>>a;
        s=s+a;
        l=l+1;
        if(max<a){
            max=a;
        }
        else if(min>a){
            min=a;
        }
   }
   double ortalama= s/l;
   cout<<"Boyuk eded:"<<max<<endl<<"Kicik eded:"<<min<<endl<<"Ortalama:"<<ortalama;

    return 0;
}

