#include <iostream>
using namespace std;

int main() {
    int n1 = 1;
    int n2 = 1;
    int n;
    cout << "scegliere un numero" << endl;
    cin >> n;
    if ((n==0) or (n==1)) {
        cout << "errore" << endl;
    } else {
        cout << n1 << endl;
        cout << n2 << endl;

        int i = 3;
        while (i++ <= n) {
            cout << n1 + n2 << endl;
            if (n >= 2) {
                if (n1 < n2){
                    n1 += n2;
                }else{
                    n2 += n1;
                }
                }
        }
   return 0;
}
