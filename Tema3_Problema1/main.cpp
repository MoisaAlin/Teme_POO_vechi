#include "Problema1.h"
int n, i, j, mat[70], maxim = -1, minim = 9001, p1max, p2max, p1min, p2min, z, ant, k, kmax, p1kmax, p2kmax;
int main() {
    Zaruri Z;
    int v[7];
    Z.initializare();
    n = 9000;
    int zar1, zar2;
    srand(time(NULL));
    zar1 = Z.randomzar();
    /// cout << zar1 << " ";
    Z.frecventa(zar1);
    zar2 = Z.randomzar();
    ///cout << zar2 << "\n";
    Z.frecventa(zar2);
    z = zar1 * 10 + zar2;
    mat[z]++;
    if (mat[z] > maxim) {
        maxim = mat[z];
        p1max = zar1;
        p2max = zar2;
    }
    ant = z;
    for (i = 2; i <= n; i++) {
        zar1 = Z.randomzar();
        ///cout << zar1 << " ";
        Z.frecventa(zar1);
        zar2 = Z.randomzar();
        Z.frecventa(zar2);
        z = zar1 * 10 + zar2;
        mat[z]++;
        if (mat[z] > maxim) {
            maxim = mat[z];
            p1max = zar1;
            p2max = zar2;
        }
        if (z == ant) {
            k++;
            if (k > kmax) {
                kmax = k;
                p1kmax = z / 10;
                p2kmax = z % 10;
            }
        }
        else {
            k = 1;
        }
        ant = z;
        ///cout << zar2 << "\n";
    }
    for (i = 11; i <= 66; i++) {
        if (mat[i] < minim && mat[i] != 0) {
            minim = mat[i];
            p1min = i / 10;
            p2min = i % 10;
        }
    }
    cout << "Perechea cu numar maxim de aparitii:" << p1max << " " << p2max << "\n";
    cout << "Perechea cu numar minim de aparitii:" << p1min << " " << p2min << "\n";
    cout << "Perechea cu numar maxim de aparitii consecutive:" << p1kmax << " " << p2kmax << "\n";
    Z.afisfrecv();
	
	return 0;
}