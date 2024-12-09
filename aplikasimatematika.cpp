#include <iostream> 

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

    findRoots(a, b, c);

    cout << "Masukkan nilai x untuk menghitung f(x): ";
    cin >> x;
    double result = evaluateFunction(a, b, c, x);
    cout << "Nilai fungsi pada x = " << x << " adalah: " << result << endl;
}

void gradientCalculation() {
    float x1, y1, x2, y2;

    cout << "=== Menghitung Gradien ===" << endl;
    cout << "Masukkan koordinat titik pertama (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Masukkan koordinat titik kedua (x2 y2): ";
    cin >> x2 >> y2;

    if (x1 == x2) {
        cout << "Gradien tidak terdefinisi karena garis vertikal." << endl;
    } else {
        float gradien = (y2 - y1) / (x2 - x1);
        cout << "Gradien garis adalah: " << gradien << endl;
    }
}

int main() {
    char choice;

    cout << "=== Find the Treasure Solution ===" << endl;

    do {
        cout << "Pilih program yang ingin dijalankan:" << endl;
        cout << "A) Fibonacci rows program (Deret Fibonacci)" << endl;
        cout << "B) Quadratic function program (Fungsi Kuadrat)" << endl;
        cout << "C) Gradien calculation program (Kalkulasi Gradien)" << endl;
        cout << "D) Have you found the solution? (Exit)" << endl;
        cout << "Masukkan pilihan (A/B/C/D): ";
        cin >> choice;

        switch (choice) {
            case 'A':
            case 'a':
                fibonacci();
                break;
            case 'B':
            case 'b':
                quadraticFunction();
                break;
            case 'C':
            case 'c':
                gradientCalculation();
                break;
            case 'D':
            case 'd':
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silhakan coba lagi." << endl;
        }

    } while (choice != 'D' && choice != 'd');

    return 0;
}
