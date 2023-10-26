#include <iostream>
#include <string>
#include "Josh_Hall_HeartRates.h"
#include "Josh_Hall_Heartrates.cpp"

using namespace std;

/// Comment 6) These are the prototypes for the getName and birthday functions.
string getName(string&, string&);
int birthday(int, int, int&);

int main()
{
    /// Comment 7) Here I created the person object.
    HeartRates person;
    string lastName, name;
    int bMonth, bDay, bYear, month, day, year, age;

    /// Comment 8) I call the getName function which will get input from the user and store their name in two strings.
    getName(lastName, name);
    cout << "Please enter month, day, and year of birth (separated by spaces): " << endl;
    cin >> bMonth >> bDay >> bYear;

    cout << "First Name: " << name << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Date of Birth: " << bMonth << "/" << bDay << "/" << bYear << endl;

    /// Comment 9) I call the birthday function that will get today's date and then the main function calls the getAge function to calculate the user's age.
    birthday(month, day, year);
    cout << "Age: " << person.getAge(bYear, year) << endl;

    /// Comment 10) I call the getMaxHeartRate and getTargetHeartRate functions which will calculate the max/target heart rates.
    cout << "Maximum Heart Rate: " << person.getMaxHeartRate();
    cout << endl;

    cout << "Target Heart Rate: " << person.getTargetHeartRate();
    cout << endl;


    return 0;
}

/// Comment 11) This is the getName function. It will hold the user's name in strings.
string getName(string& lastName, string& name)
{
    cout << "Please enter first and last name (separated by spaces):" << endl;
    cin >> name >> lastName;
    return name, lastName;
}

/// Comment 12) This is the birthday function. It will return the year of today's date which will be used to find their age.
int birthday(int month, int day, int& year)
{
    cout << "Please enter today's month, day, and year (separated by spaces): " << endl;
    cin >> month >> day >> year;
    return year;
}
