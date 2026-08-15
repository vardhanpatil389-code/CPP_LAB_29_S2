#include <iostream>
using namespace std;

class Clock
{
private:
    int hours, minutes;

public:
    Clock(int h = 0, int m = 0) : hours(h), minutes(m) {}

    Clock add(const Clock &c)
    {
        int totalHours = hours + c.hours;
        int totalMinutes = minutes + c.minutes;

        totalHours = totalHours + totalMinutes / 60;
        totalMinutes = totalMinutes % 60;

        return Clock(totalHours, totalMinutes);
    }

    Clock subtract(const Clock &c)
    {
        int totalHours = hours - c.hours;
        int totalMinutes = minutes - c.minutes;

        if (totalMinutes < 0)
        {
            totalHours--;
            totalMinutes = totalMinutes + 60;
        }

        return Clock(totalHours, totalMinutes);
    }

    void display() const
    {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main()
{
    Clock c1(2, 15);
    Clock c2(1, 40);

    Clock sum = c1.add(c2);
    Clock diff = c1.subtract(c2);

    cout << "First Lecture: ";
    c1.display();

    cout << "Second Lecture: ";
    c2.display();

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    return 0;
}