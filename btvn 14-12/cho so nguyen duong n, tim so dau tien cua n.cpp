#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "nhap so nguyen duong n: ";
    cin >> n;

    while (n >= 10) {
        n /= 10;
    }

    cout << "chu so dau tien cua n la: " << n << endl;

    return 0;
}
