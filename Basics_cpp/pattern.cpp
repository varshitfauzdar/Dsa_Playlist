#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    int size = 2*n - 1;
    for(int i = 0;i < 2*n-1 ; i++){
        for(int j = 0; j< 2*n-1; j++){
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int minDist = min(min(top, bottom), min(left, right));

            cout << n - minDist;
        }
        cout<<endl;
    }
}
