#include <iostream>
#include <stdexcept> 

using namespace std;

void fibonacci() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "=== Deret Fibonacci ===" << endl;
    cout << "Masukkan jumlah bilangan Fibonacci yang ingin ditampilkan: ";
    cin >> n;

    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm;
        if (i < n) {
            cout << ", ";
        }
    }
    cout << endl;
}

void findRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        cout << "Fungsi kuadrat memiliki dua akar real." << endl;
    } else if (discriminant == 0) {
        cout << "Fungsi kuadrat memiliki satu akar ganda." << endl;
    } else {
        cout << "Fungsi kuadrat tidak memiliki akar real." << endl;
    }
}

double evaluateFunction(double a, double b, double c, double x) {
    return a * x * x + b * x + c;
}

void quadraticFunction() {
    double a, b, c, x;

    cout << "=== Fungsi Kuadrat: ax^2 + bx + c ===" << endl;
    cout << "Masukkan koefisien a: ";
    cin >> a;
    cout << "Masukkan koefisien b: ";
    cin >> b;
    cout << "Masukkan koefisien c: ";
    cin >> c;
