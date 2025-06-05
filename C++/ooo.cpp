

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

time_t now = time(0);  
tm *ltm = localtime(&now); 
int current_year = 1900 + ltm->tm_year;
int current_month = 1 + ltm->tm_mon; 
int current_day = ltm->tm_mday;

struct DateDifference {
    int  year;
    int month;
    int day;
};
DateDifference diff; // good

int days(int m , int y)
{
    if (m == 2) {
        
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            return 29;
        else
            return 28;
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        return 30;
    } else {
        return 31;
    }
}

DateDifference  compare(int bir_Year ,int bir_Month  ,int bir_Day)
{

    diff.year = current_year - bir_Year; 
    diff.month = current_month - bir_Month; 
    diff.day = current_day - bir_Day; 
    
    if (diff.month  < 0)
    {
        
        diff.month += 12; 

        diff.year --; 

    }
    if (diff.day  < 0)
    {
        
        diff.day += days(current_month - 1, current_year);

        diff.month --;
        
    }
    
    return diff;  
}


int calculation()
{


    cout << "\n";
    cout << "=========================================\n";

    int Year , Month , Day; 
    cout << "\nEnter ur age\n";
    cout << "Year : ";
    cin >> Year;
    cout << "Month : ";
    cin >> Month;
    cout << "Day : ";
    cin >> Day;



    int answer_year = current_year - Year; 
    int answer_month = current_month - Month; 
    int answer_day = current_day - Day ; 
    
    
    
    
    if (answer_month < 0)
    {
        
        answer_month += 12;

        answer_year = answer_year - 1;


    }
    if (answer_day  < 0)
    {
        
        answer_day += days(current_month - 1, current_year); 

        answer_month = answer_month - 1;
       
    }
    cout << "\n";
    cout << "=========================================\n";
    cout << "\n";
    cout << "Your age is : " <<answer_year << " Year(s) / " << answer_month   << " Month(s) / " << answer_day << " Day(s)";

    exit(0);



}




int main()
{
    DateDifference result;
    DateDifference result2;
    string answer;

    cout << "Do you want calculation or compare between 2 ages : ";
    cin >> answer;

    int bir_Year , bir_Month , bir_Day; 
    int bir_Year2 , bir_Month2 , bir_Day2;

    
    string user1 , user2;


    if (answer == "calculation")
    {   
        
        calculation();

    }
    

    else if (answer == "compare") { 

        cout << "Enter first user's name: ";
        cin >> user1;
        cout << "your Year : "; 
        cin >> bir_Year; 
        cout << "your Month : "; 
        cin >> bir_Month; 
        cout << "your Day : "; 
        cin >> bir_Day;
    
        cout << "\n=========================================\n";
        cout << "\n";
        
        

        cout << "Enter sec user's name: ";
        cin >> user2;
        cout << "your Year : "; 
        cin >> bir_Year2; 
        cout << "your Month : "; 
        cin >> bir_Month2; 
        cout << "your Day : "; 
        cin >> bir_Day2;
    
        cout << "\n=========================================\n";
        cout << "\n";


        result = compare( bir_Year   , bir_Month , bir_Day  );
        result2 = compare( bir_Year2 , bir_Month2  , bir_Day2 );
        
        
    }

    cout << user1 << " Your age is : "<<result.year << " years " << result.month << " month " << result.day << " day" << endl;
    cout << user2 << " Your age is : "<< result2.year << " years " << result2.month << " month " << result2.day << " day" << endl;

   
    
    

    
    cout << "\n=========================================\n";
    cout << "\n";

int diff_years = result.year - result2.year;
int diff_months = result.month - result2.month;
int diff_days = result.day - result2.day;

if (diff_days < 0) {
    diff_months--;
    diff_days += days(result2.month, result2.year);
}
if (diff_months < 0) {
    diff_years--;
    diff_months += 12;
}

if (diff_years > 0) {
    cout << user1 << " is older than " << user2 << " by: "
         << diff_years << " years, " << diff_months << " months, " << diff_days << " days";
}
else if (diff_years < 0) {
    cout << user2 << " is older than " << user1 << " by: "
         << -diff_years << " years, " << -diff_months << " months, " << -diff_days << " days";
}
else {
    if (diff_months > 0) {
        cout << user1 << " is older than " << user2 << " by: "
             << diff_months << " months, " << diff_days << " days";
    }
    else if (diff_months < 0) {
        cout << user2 << " is older than " << user1 << " by: "
             << -diff_months << " months, " << -diff_days << " days";
    }
    else {
        if (diff_days > 0) {
            cout << user1 << " is older than " << user2 << " by: " << diff_days << " days";
        }
        else if (diff_days < 0) {
            cout << user2 << " is older than " << user1 << " by: " << -diff_days << " days";
        }
        else {
            cout << user1 << " and " << user2 << " are of the same age!";
        }
    }
}

   


    return 0;
    
}


