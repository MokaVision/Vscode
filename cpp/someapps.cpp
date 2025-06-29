

#include<iostream>
#include<cctype>
#include"print.hpp"
using namespace std;



int main()
{
    string name = "  EL   Z E r o  ";
    int size_name = name.size(); // 

    // for (int i = 0 ; i < size_name; i++)
    // {
    //     if (isupper(name[i]))
    //     {
    //         print(char(tolower(name[i])));
    //     }
    //     else
    //     {
    //         print(char(toupper(name[i])));
    //     }
        
    // }


    for (int g = 0 ; g < size_name ; g++ )
    {
        if (isspace(name[g]))
        {
            continue;
        }
        print(name[g]);
    }

    return 0;
    
}

