#include<iostream>
#include<fstream>

using namespace std;
int main(){
    ofstream myfile("myfile.txt");
    myfile << "content";
    myfile.close();

    return 0;
}