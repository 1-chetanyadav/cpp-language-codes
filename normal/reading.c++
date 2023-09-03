#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string me;
    ifstream MyReadFile("myfile.txt");
    while(getline(MyReadFile,me)){
        cout << me;
    }
    MyReadFile.close();
    return 0;
}