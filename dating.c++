#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
using namespace std;
// int match();
int getdata(int a);
// int result();
int main()
{
    int a;
    cout << "person 1 Enter your details";
    getdata(a);
    // match();
    return 0;
}
int getdata(int a)
{
    struct dating
    {
        string name, interest, h1, h2, h3, city;
        char noob[15];
        int num, yob, a;
    } p1, p2;

    cout << "person 1 Enter your deatils";
    cout << "\n\nEnter your name" << endl;
    std::getline(cin, p1.name);
    cout << "Enter your birth year" << endl;
    std::cin >> p1.yob;
    cout << "Enter your city" << endl;
    std::cin >> p1.city;
    cout << "Enter your 3 hobbies" << endl;
    cout << "1 hobby" << endl;
    std::cin >> p1.h1;
    cout << "2 hobby" << endl;
    std::cin >> p1.h2;
    cout << "3 hobby" << endl;
    std::cin >> p1.h3;

    cout << "\nperson 2 Enter your deatils\n";
    cout << "Enter your name\n";
    std::getline(cin, p2.name);
    cout << "Enter your birth year" << endl;
    std::cin >> p2.yob;
    cout << "Enter your city" << endl;
    std::cin >> p2.city;
    cout << "Enter your 3 hobbies" << endl;
    cout << "1 hobby" << endl;
    std::cin >> p2.h1;
    cout << "2 hobby" << endl;
    std::cin >> p2.h2;
    cout << "3 hobby" << endl;
    std::cin >> p2.h3;

    return 0;
}