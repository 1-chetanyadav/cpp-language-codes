1.Classes and Objects :
#include <iostream>
    using namespace std;

class Car
{
public:
    string color;
    string model;

    void start()
    {
        cout << "Car started!" << endl;
    }

    void stop()
    {
        cout << "Car stopped!" << endl;
    }
};

int main()
{
    Car myCar;
    myCar.color = "Red";
    myCar.model = "Sedan";

    cout << "Color: " << myCar.color << endl;
    cout << "Model: " << myCar.model << endl;

    myCar.start();
    myCar.stop();

    return 0;
}
 

    2. Inheritance :
  
#include <iostream>
    using namespace std;

class Vehicle
{
public:
    void drive()
    {
        cout << "Vehicle is driving!" << endl;
    }
};

class Car : public Vehicle
{
public:
    void start()
    {
        cout << "Car started!" << endl;
    }
};

int main()
{
    Car myCar;
    myCar.start();
    myCar.drive();

    return 0;
}
 

    3. Polymorphism :
  
#include <iostream>
    using namespace std;

class Animal
{
public:
    virtual void makeSound()
    {
        cout << "Animal makes a sound!" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound() override
    {
        cout << "Dog barks!" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound() override
    {
        cout << "Cat meows!" << endl;
    }
};

int main()
{
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();

    animal1->makeSound();
    animal2->makeSound();

    delete animal1;
    delete animal2;

    return 0;
}
 

    4. Data Abstraction and Encapsulation :
  
#include <iostream>
    using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    void setAccountNumber(string accNum)
    {
        accountNumber = accNum;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount myAccount;
    myAccount.setAccountNumber("123456789");
    myAccount.deposit(1000);
    myAccount.withdraw(500);

    cout << "Account Balance: " << myAccount.getBalance() << endl;

    return 0;
}
 

    5. Constructors and Destructors :
  
#include <iostream>
    using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "Constructor called!" << endl;
    }

    ~MyClass()
    {
        cout << "Destructor called!" << endl;
    }
};

int main()
{
    MyClass obj; // Constructor called

    return 0; // Destructor called
}
 

    6. File Handling :
  
#include <iostream>
#include <fstream>
    using namespace std;

int main()
{
    ofstream outputFile("output.txt"); // Create/open a file for writing

    if (outputFile.is_open())
    {
        outputFile << "Hello, World!" << endl; // Write data to the file
        outputFile.close();                    // Close the file
    }
    else
    {
        cout << "Error opening the file!" << endl;
    }

    ifstream inputFile("input.txt");

    // Open a file for reading

    if (inputFile.is_open())
    {
        string line;
        while (getline(inputFile, line))
        {
            cout << line << endl; // Read and display each line from the file
        }
        inputFile.close(); // Close the file
    }
    else
    {
        cout << "Error opening the file!" << endl;
    }

    return 0;
}
 

    7. Friend Function :
  
#include <iostream>
    using namespace std;

class MyClass
{
private:
    int secretNumber;

public:
    MyClass(int num) : secretNumber(num) {}

    friend void printSecretNumber(const MyClass &obj);
};

void printSecretNumber(const MyClass &obj)
{
    cout << "Secret number: " << obj.secretNumber << endl;
}

int main()
{
    MyClass obj(42);
    printSecretNumber(obj);

    return 0;
}
 

    8. Inline Function :
  
#include <iostream>
    using namespace std;

inline int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    int result = add(num1, num2);

    cout << "Result: " << result << endl;

    return 0;
}
 