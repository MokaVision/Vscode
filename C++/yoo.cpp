
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int waist , lenght , neck , fats;

    cout << "Neck : ";
    cin >> neck;

    cout << "lenght : ";
    cin >> lenght;
    
    cout << "waist : ";
    cin >> waist;

    fats = 86.010 * log10(waist - neck) - 70.041 * log10(lenght) + 36.76;

    cout << fats;




    
}