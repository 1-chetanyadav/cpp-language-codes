#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    int id;
    string name;
    
};
int main(){
    student sl;
    sl.id = 201;
    sl.name = "Aragats";
    cout << sl.id << endl;
    cout << sl.name << endl;

    return 0;
}