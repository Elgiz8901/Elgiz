#include <iostream>

using namespace std;

int main(){
      for (int n = 1; n <= 100; n++) {
        int tersi = 0, k = n;

        while (k > 0) {
            int qaliq = k % 10;
            tersi = tersi * 10 + qaliq;
            k=k/10;
        }

        if (n == tersi)
            cout << n << " ";
    }


    return 0;
}

