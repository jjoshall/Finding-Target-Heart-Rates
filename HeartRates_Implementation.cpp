#include <iostream>
#include <string>
#include "Josh_Hall_HeartRates.h"

using namespace std;

/// Comment 2) This is the HeartRates constructor. It holds the name of the person entered.
HeartRates::HeartRates()
{
    string lastName, name;
}

/// Comment 3) This is the getAge function. This will use the date the user enters for today and calculates how old they are.
int HeartRates::getAge(int bYear, int year)
{
    age = year - bYear;
    return age;
}

/// Comment 4) This is the getMaxHeartRate function. This will subtract the age from 220 to find the max heart rate one should have.
int HeartRates::getMaxHeartRate()
{
    maxHeart = 220 - age;
    return maxHeart;
}

/// Comment 5) This is the getTargetHeartRate function. This will calculate what the person's heart rate should be in comparison to their max heart rate.
double HeartRates::getTargetHeartRate()
{
    double half = 0.5;
    double num = 0.85;
    targetHeart1 = maxHeart * half;
    targetHeart2 = maxHeart * num;
    cout << targetHeart1 << "-";
    return targetHeart2;
}
