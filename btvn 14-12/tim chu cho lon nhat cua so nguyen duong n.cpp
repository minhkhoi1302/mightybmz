#include <iostream>
using namespace std;

int main() {

  int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    int chu_so_lon_nhat = n % 10;

    
    while (n > 0) {
        int chu_so = n % 10;
        if (chu_so > chu_so_lon_nhat) {
            chu_so_lon_nhat = chu_so;
        }
        n /= 10;
    }

    cout << "chu so lon nhat la: " << chu_so_lon_nhat << endl;

    return 0;
}
