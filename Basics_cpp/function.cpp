#include <bits/stdc++.h>
using namespace std;

void printmyname(string name){
    cout<<"printmyname"<<" hey i am "<<name<<endl;
}
void passbyvalue(string name){
    name[0] = 's';
    cout<<"passbyvalue "<<name<<endl;
}

void passbyref(string &name){
    name[0] = 'T';
    cout<<"passbyref "<<name<<endl;
}


int main(){
    string name;
    cin>>name;
    printmyname(name);
    cout<<"printmyname"<<" hey i am "<<name<<endl;
    passbyvalue(name);
    cout<<"passbyvalue "<<name<<endl;
    passbyref(name);
    cout<<"passbyref "<<name<<endl;
}




// Basically in pass by value a copy of input or parameters is passed but in pass by reference, the address of the parameter is
// passed so if we do anything with that it probably change that parameter too