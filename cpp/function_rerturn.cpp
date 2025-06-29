
#include<iostream>
#include "print.hpp"
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
            cin.ignore(1000, '\n');
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

        if (op == '+' || op == '-' || op == '*' || op == '/')
        {
            return op;
        }
        else
        {
            print("ERROR NUMBER 1");
            print("Invalid operator! Please enter +, -, *, or /");
            cin.clear();
            cin.ignore(1000, '\n');
        }


       
    }
}



char calc_again()
{
    char answer;
    print("==============================");
    print("do u wanna to calc with this result? [y - n] : ");
    cin >> answer;
    return answer;
}




float calc(float nmbr ,float nmbr2 , char op)
{
    float result;
    if (op == '+')
    {
        result = nmbr + nmbr2;
        print("result " , nmbr , " + " , nmbr2 , " =");
        print(result);
       
    }
    else if (op == '-')
    {
        result = nmbr - nmbr2;
        print("result " , nmbr , " - " , nmbr2 , " =");
        print(result);
    
    }
    else if (op == '*')
    {
        result = nmbr * nmbr2;
        print("result " , nmbr , " * " , nmbr2 , " =");
        print(result);
        
    }
    else if(op == '/')
    {
        if (nmbr2 == 0.0f)
        {
            print("cant not by divide 0 \n");
            print("ERROR NUMBER 2");
            return nmbr;
        }
        result = nmbr / nmbr2;
        print("result " , nmbr , " / " , nmbr2 , " =");
        print(result);
        
    }
    else 
    {
        print("ERROR NUMBER 3");
        print("Invalid operator! Please enter +, -, *, or /");
    }

    return result;
}



int main()
{
    float nmbr , nmbr2;
    char op;

    nmbr = check_nmbr("Enter your first number : ");


    nmbr2 = check_nmbr("Enter your sec number : ");

    op = check_op("Enter your op : ");

    float result = calc(nmbr , nmbr2 , op);

    while(true)
    {
        float nmbr;
        
        char answer = calc_again();

        if (answer == 'y')
        {
            nmbr = check_nmbr("Enter your first number : ");
            op = check_op("Enter your op : ");
            result = calc(result ,nmbr  , op);
        }
        else
        {
            break;
        }



    }




   return 0;

}