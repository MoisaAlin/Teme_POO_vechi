#include "Problema1.h"

int main() {
    Complex a(2, 4);
    Complex b(2, 4);
    Complex r(0, 0);
    Complex z(0, 0);
    Complex z1(0, 0);
    Complex z2(0, 0);

    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n; i++) {
        Complex v(0, 0);
        cin >> v;
        if (i % 2 == 1) {
            z1 = z1 + v ^ 3;
        }
        else {
            z2 = z2 + v ^ 4;
        }
    }
    z = z1 / z2;
    cout << z;
    return 0;
}
