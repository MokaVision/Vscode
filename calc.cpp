
#include<iostream>
using namespace std;


void calc(int num1 , int num2 , string op)
{
    if (op == "+")
    {
        cout << "result num1 + num2 = \n";
        cout << num1 + num2 << "\n";
    }
    else if (op == "-")
    {
        cout << "result num1 - num2 = \n";
        cout << num1 - num2 << "\n";
    }
    else if (op == "*")
    {
        cout << "result num1 * num2 = \n";
        cout << num1 * num2 << "\n";
    }
    else if(op == "/")
    {
        cout << "result num1 / num2 = \n";
        cout << num1 / num2 << "\n";
    }
    else 
    {
        cout << "you op cant be use";
    }
    
}



int main()
{
    int num1 , num2;;
    string op;

    cout << "what is ur frist num : ";
    cin >> num1;

    cout << "what is ur sec num : ";
    cin >> num2;

    cout << "what is ur opartion [+ , - , * , /] : ";
    cin >> op;

    calc(num1 , num2 , op);



    return 0;
}