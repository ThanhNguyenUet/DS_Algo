#include<iostream>
using namespace std;
bool used[20] = {false};
int arr[20];
void print(int arr[], int n) {
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// bool checked(int i, int j, int k) {
//     bool used[3] = {false};
//     used[i - 1] = true;
//     used[j - 1] = true;
//     used[k - 1] = true;
//     return used[0] && used[1] && used[2];
// }
void back(int i, int n) {
    if (i == n) {
        // print
        print(arr, n);
        return ;
    } else {
        for (int c = 1; c <= n; c ++) {
            if (!used[c]) {
                arr[i + 1] = c;
                used[c] = true;
                back(i + 1, n);
                used[c] = false;
            }
        }
    }
}
int main() {
    /*
        NAIVE APPROACH
    */  
    // for (int i = 1; i <= 3; i++) {
    //     for (int j = 1; j<= 3; j++) {
    //         for (int k = 1; k <= 3; k++) {
    //             if ((i != j) && (j != k) && (k != i)) {
    //                 cout << i << " " << j << " " << k << endl;
    //             }
    //         }
    //     }
    // }
    /*
        NAIVE BUT BETTER EXECUTING
    */
    // for (int i = 1; i <= 3; i++) {
    //     for (int j = 1; j <= 3; j++) {
    //         for (int k = 1; k <= 3; k++) {
    //                 if (checked(i, j, k)) {
    //                     cout << i << " " << j << " " << k << endl;
    //                 }
    //         }
    //     }
    // }
    /*
        BACKTRACK APPROACH
    */
    int n;
    cin >> n;
    back(0 , n);
}