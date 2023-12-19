#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int a,b;
    int sum;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;
   
   
    int greatestCommonDivisor = gcd(a, b);
    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << greatestCommonDivisor << endl;
    int leastCommonMultiple = lcm(a, b);
    cout << "Bo chung nho nhat cua " << a << " va " << b << " la: " << leastCommonMultiple << endl;

}
