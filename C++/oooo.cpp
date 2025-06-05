
#include<iostream>
#include<fstream>
#include<iomanip>
#include<sstream>
using namespace std;


int main()
{
    
    string person;
    cout << "who are u ? (admin , user ): \n";
    cin >> person;


    

    if (person == "admin")
    {
        int code;
        cout << "Enter ur code : \n";
        cin >> code;

        if (code == 1234)
        {
            string admin_data;
            cout << "Hello sir \n";
            cout << "Do u want to see data of users? : \n";
            cin >> admin_data;

            if (admin_data == "yes" || admin_data == "ok" || admin_data == "sure")
            {
                ifstream infile("data.txt");
                if (!infile)
                {
                    cout << "There is no data.\n";
                }
                else
                { 
                    string name;
                    int age;
                    string line;


                    cout << left << setw(30) << "Name" << setw(5) << "Age" << endl;
                    cout << string(35, '_') << endl;

                   
                    string header;
                    getline(infile, header);
                    getline(infile, header);

                    // Read and print data
                    while (getline(infile, line))
                    {
                        string name;
                        int age;

                        name = line.substr(0, 30);
            
                        string ageStr = line.substr(30);
                        stringstream ss(ageStr);
                        ss >> age;

                        cout << left << setw(30) << name << setw(5) << age << endl;
                    }

                    infile.close();
                }
            }

            else
            {
                cout << "Ok bye";
                return 0;
            }
        }
        else
        {
            cout << "The code is wrong the app will close";
            return 0;
        }
    }
    else
    {

        string asks[2] =
        {
            "wat is ur name ? :" , "how old are u ? :"
        };

        string name;
        int age;

        cout << asks[0] << "\n";
        cin.ignore(); 
        getline(cin, name);

        cout << asks[1]  << "\n";
        cin >>  age;

        cout << "ur name is : " << name << " and ur age is : " << age << "\n";

        if (age> 30 || age < 8)
        {
            cout << "ur age is not ok the app will close Bye";
            return 0;
        }
        else
        {
            ifstream checkfile("data.txt");
            bool isEmpty = checkfile.peek() == ifstream::traits_type::eof();
            checkfile.close();

            ofstream outfile("data.txt", ios::app);

            if (isEmpty)
            {
                outfile << left << setw(30) << "Name" << setw(5) << "Age" << endl;
                outfile << string(35, '_') << endl;
            }

            outfile << left << setw(30) << name << setw(5) << age << endl;
            outfile.close();

            cout << "Thanks! Your data has been saved.\n";

            
            
        }
    }
    


    return 0;

}