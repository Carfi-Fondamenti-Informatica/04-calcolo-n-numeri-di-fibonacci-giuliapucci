#include <iostream>
using namespace std;

int main() {
    int n1 = 1;
    int n2 = 1;
    int n;
    cin >> n;
    int i=3;
    if (n >= 2) {
        cout << n1 << endl;
        cout << n2 << endl;
        while (i++ <= n) {
            cout << n1 + n2 << endl;
            if (n1 < n2)
                n1 += n2;
            else n2 += n1;
        }
    }else{
        cout << "errore" << endl;
    }
   return 0;
}
