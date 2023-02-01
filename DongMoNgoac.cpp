#include<iostream>
using namespace std;
int sum[20] = {0};
char arr[20];
void print(char arr[], int n) {
       for (int i = 1; i <= n; i++) {
         cout << arr[i] << " ";
        }
         cout << endl; 
}
void back(int i, int n) {
    if (i == n) {
        if (sum[i] == 0) {
            print(arr, n);
            return;
         } 
         //else {
        //     sum[i] = 0;
        // }
    } else {
        for (int c = -1; c <= 1; c += 2) {
            sum[i+1] = sum[i] + c;
            if (sum[i + 1] < 0) {
                sum[i+1] -= c;
            } else {
                if (c == 1) {
                    arr[i + 1] = '(';
                } else {
                    arr[i + 1] = ')';
                }
                back(i + 1, n);
            }
        }
    }
}
int main() {
    int n;
    cin >> n;
    back(0, n );
}