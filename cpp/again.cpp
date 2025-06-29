
#include<iostream>
#include"print.hpp"
using namespace std;

float check_nmbr(string prompt)
{
    float nmbr;
    
    while(true)
    {
        print(prompt);
        cin >> nmbr;

        if (cin.fail())
        {  
            
            print("ERROR NUMBER 0");
            print("Invalid input! Please enter a number.");
            cin.clear();
            cin.ignore(1000 , '\n');
        }

        else
        {
            return nmbr;
        }
    }
}

char check_op(string prompt)
{
    char op;
    
    while(true)
    {
        print(prompt);
        cin >> op;

        if (cin.fail())
        {  
            
            print("ERROR NUMBER 1");
            print("Invalid input! Please try again");
            cin.clear();
            cin.ignore(1000 , '\n');
        }

        else
        {
            return op;
        }
    }
}









int main()
{
    int nmbr1 , nmbr2;
    char op;

    nmbr1 = check_nmbr("Enter your 1st nmbr : ");

    nmbr2 = check_nmbr("Enter your 2nd nmbr : ");
       
    op = check_op("Enter your OP : ");




}



// later
