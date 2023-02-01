#include<iostream>
using namespace std;
int arr[20];
void print(int arr[], int n) {
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void back(int i, int n) {
    if (i == n) {
        print(arr, n);
        return ;
    } else {
        for (int c = 0; c <= 1; c ++) {
            arr[i + 1] = c;
            back(i + 1, n);
        }
    }
}
int main() {
    int n;
    cin >> n;
    back(0, n);
}