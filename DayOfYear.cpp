#include <iostream>
#include <string.h>

using namespace std;


class DayOfYear
{
public:
   DayOfYear();
   DayOfYear(int day, int month);
   bool operator==(DayOfYear b);
   bool operator>(DayOfYear b);
   void setDay(int day){this->day = day;}
   void setMonth(int month){this->month=month;}
   int getDay(){return day;}
   int getMonth(){return month;}
   void printDate(){cout << toString() << endl;}
   void printDate(int year){cout << toString() << " " << year << endl;}
   string toString();
    
private:
   int day;
   int month;
};

DayOfYear::DayOfYear(){
   day = 1;
   month = 1;
}

DayOfYear::DayOfYear(int day, int month){
   if (day < 1 || day >31) this->day = 1;
   else this->day = day;
   
   if (month < 1 || month > 12) this->month = 1;
   else this->month = month;
}

bool DayOfYear::operator==(DayOfYear b){
   if (day == b.getDay() && month == b.getMonth()) return true;
   return false;
}

bool DayOfYear::operator>(DayOfYear b){
   if(month < b.getMonth()) return true;
   if (month == b.getMonth() && day < b.getDay()) return true;
   return false;
}


int main()
{
   // No need to touch the main.
   int d1 = 0;
   int m1 = 0;
   int year = 0;
   cin >> d1 >> m1 >> year;
   
   DayOfYear today(d1,m1);
   
   today.printDate();
   today.printDate(year);
}


string DayOfYear::toString()
{
    string out;
    
    switch(month)
    {
        case 1:
            out = "January " + to_string(day);
            break;
        case 2:
            out = "February " + to_string(day);
            break;
        case 3:
            out = "March " + to_string(day);
            break;
        case 4:
            out = "April " + to_string(day);
            break;
        case 5:
            out = "May " + to_string(day);
            break;
        case 6:
            out = "June " + to_string(day);
            break;
        case 7:
            out = "July " + to_string(day);
            break;
        case 8:
            out = "August " + to_string(day);
            break;
        case 9:
            out = "September " + to_string(day);
            break;
        case 10:
            out = "October " + to_string(day);
            break;
        case 11:
            out = "November " + to_string(day);
            break;
        case 12:
            out = "December " + to_string(day);
            break;
    }
    return out;
}
