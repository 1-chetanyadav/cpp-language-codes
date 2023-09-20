#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "type number a ";
    cin >> a;
    cout << "type number b ";
    cin >> b;
    cout << "type number c ";
    cin >> c;

    
    if (a>b)
    {
        if (a>c){
            cout << "a is great";
        }
        else {
            cout << "c is great";
        }
    }
    else{
        cout << "b is great";
    }
    return 0;
}