#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int **x = new int*[n];
    for (int i = 0; i < n; i++)
        x[i] = new int [n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> x[i][j];
    int I, J, min, max;
    for (int i = 0; i < n; i++) {
        int lmax = 0;
        for (int j = 0; j < n; j++)
            lmax += x[i][j];
        if (lmax > max || i == 0) {
           max = lmax;
           I = i;
        }
    }
    for (int j = 0; j < n; j++) {
        int lmin = 0;
        for (int i = 0; i < n; i++)
            lmin += x[i][j];
        if (lmin < min || j == 0) {
            min = lmin;
            J = j;
        }
    }
    cout << x[I][J];
    for (int i = 0; i < n; i++)
        delete []x[i];
        delete []x;
    return 0;
}
