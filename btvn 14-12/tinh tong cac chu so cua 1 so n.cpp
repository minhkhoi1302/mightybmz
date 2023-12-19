#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "nhap so nguyen n: ";
    cin >> n;

    if (n < 0) {
        cout << "Vui long nhap so nguyen duong." << endl;
        return 1;
    }

    int sum = 0;
    int digit;

    while (n > 0) {
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }

    cout << "Tong cac chu so la: " << sum << endl;

    return 0;
}
