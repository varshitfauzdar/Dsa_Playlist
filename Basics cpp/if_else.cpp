#include <bits/stdc++.h>
using namespace std;

int main() {
        int a;
        cin>>a;
        if(a>=90){
            cout<<"Grade A"<<endl;
        }
        else if(a>=70 && a<90){
            cout<<"Grade B"<<endl;
        }
        else if(a>=50 && a<70){
            cout<<"Grade C"<<endl;
        }
        else if(a>=35 && a<50){
            cout<<"Grade D"<<endl;
        }
        else{
            cout<<"Fail"<<endl;
        }
    }