#include<iostream>
#include<math.h>
using namespace std;
int arr[20];
void print(int n) {
    for (int i = 1; i <= n; i++) {
        cout << "arr[" << i << "] = " << arr[i] << " "; 
    }
    cout << endl;
}
bool check (int x, int y) {
    // x la hang, y la cot
    int row = x; // row = 1
    while (row > 1) {
        row --;
        // abs(row - x) = abs(arr[row] - y) la dieu kien tren 2 duong cheo. 
        //tuy nhien co th no k nam tren duong cheo ma nam tren cot thidung arr[row] = y de check
        if ( arr[row] == y || abs(row - x) == abs(arr[row] - y)) {
            return false;
        }
    }
    return true;
}
void back(int i, int n) {
    if (i == n) {
        print(n);
        return ;
    } else {
        /*
            (1 - a1) - (2 - a2) arr[2] = 5 tuc la cot 5 hang 2 tuc i la hang , j la cot
        */
        for (int j = 1; j <= n; j++) { 
                if (check(i + 1 , j)) { // check (1,1)
                    arr[i + 1] = j; // arr[1] = 1
                    back(i + 1, n); // back[2]
                }
        }
    }
}
int main() {
    int n;
    cin >> n;
    back(0, n);
}