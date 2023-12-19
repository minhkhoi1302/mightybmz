#include <iostream>
using namespace std;

int main() {
    int n;
    int sum;
    cout << "nhap so n: ";
    cin >> n;
    cout << "tat ca cac uoc cua so " << n << " la ";
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << " ";
            sum += i;
        }  
    }
    printf("tong cac uoc so la :%d",sum);
}
