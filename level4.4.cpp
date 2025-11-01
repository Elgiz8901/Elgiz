#include <iostream>

using namespace std;

int main(){
    for(int i=100;i<1000;i++){
        int s=0;
        int k=i;
        while(k>0){
            s=s+k%10;
            k=k/10;
        }

        if(s==10){
            cout<<i<<" ";
        }
    }
    return 0;
}

