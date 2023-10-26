#ifndef JOSH_HALL_HEARTRATES_H_INCLUDED
#define JOSH_HALL_HEARTRATES_H_INCLUDED

/// Comment 1) This is the class for HeartRates.
class HeartRates
{
private:
    std::string name, lastName;
    int maxHeart, age;
    double targetHeart1, targetHeart2;
public:
    HeartRates();
    int getAge(int bYear, int year);
    int getMaxHeartRate();
    double getTargetHeartRate();
};

#endif // JOSH_HALL_HEARTRATES_H_INCLUDED
