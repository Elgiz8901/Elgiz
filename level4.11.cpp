#include <iostream>

using namespace std;

int main(){
      int a = 0, b = 1, c;

    cout << "Fibonacci ededleri: ";

    cout << a << " " << b << " ";

    c = a + b;

    while (c < 1000) {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }



    return 0;
}

