
#include<iostream>
#include <>

using namespace std;


int main()
{

    int  wight ;
    float length , BMI;
    string type , help;
    

    cout << "what is ur type ? : \n";
    cin >> type;

    cout << "what is ur wight (KG) ? : \n";
    cin >> wight;

    cout << "what is ur length (M) NOT (cm) ? : \n";
    cin >> length;

    BMI = wight/pow(length , 2);

    
    if (BMI < 18.5)
    {
        cout << "You are suffering from thinness.";
    }

    else if (BMI > 18.5 && BMI < 25)
    {
        cout << "You are of normal weight.";
    }
    
    else if  (BMI > 25 && BMI < 30)
    {
        cout << "You are overweight.";
    }

    else if  (BMI < 30)
    {
        cout << "You are suffering from obesity.";
    }





    return 0;

}