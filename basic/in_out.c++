#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "hi"<<endl;
    cout << "what is your age" <<endl;
    cin >> age;
    if (age>17)
    {
        cout << "you can vote" << endl;
    }
    else {
        cout << "you can't vote"<<endl;
    }
    return 0;
}