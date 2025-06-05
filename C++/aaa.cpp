
#include<iostream>
#include<array>
#include<cmath>
using namespace std;

int main()
{
    array<int , 3 > aa = {1 , 2 , 3 };
    cout << "count of array : " << sizeof(aa)/sizeof(aa[1]);
    return 1;
}