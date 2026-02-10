#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    if (a >= 90) {
        cout << "Grade A\n";
    } 
    else if (a >= 70) {
        cout << "Grade B\n";
    } 
    else if (a >= 50) {
        cout << "Grade C\n";
    } 
    else if (a >= 35) {
        cout << "Grade D\n";
    } 
    else {
        cout << "Fail\n";
    }

    return 0;
}
