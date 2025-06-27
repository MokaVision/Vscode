#include <iostream>
using namespace std;


void sayhello(string name , int age)
{
    cout << "\n=======================\n\n";

    cout << "hello " << name << "\n";
    cout << "ur age is : " << age << "\n";
    
}


int main()
{
    string name;
    int age;

    cout << "what is ur name : ";
    cin >> name;

    cout << "how old are u : ";
    cin >> age;


    sayhello(name , age);


    return 0;

}
