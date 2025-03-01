#include <iostream>
using namespace std;

class WeekDays
{
private:
    string days[7];
    int dayNo;

    int normalizeDayNo(int dayNo) const
    {
        if (dayNo < 1)
        {
            dayNo += 7;
        }
        else if (dayNo > 7)
        {
            dayNo %= 7;
        }

        return dayNo;

    }
    void getCurrentDay(int dayNo) const
    {
        cout<<"Current Day: "<<days[dayNo]<<endl;
    }

    void getPreviousDay(int dayNo) const
    {
        int previousDay = normalizeDayNo(dayNo);
        cout<<"Previous Day: "<<days[previousDay]<<endl;
    }

    void getNextDay(int dayNo) const
    {
        int nextDay = normalizeDayNo(dayNo);
        cout<<"Next Day: "<<days[nextDay-1]<<endl;
    }

public:
    WeekDays()
    {
        days[0] = "Monday";
        days[1] = "Tuesday";
        days[2] = "Wednesday";
        days[3] = "Thrusday";
        days[4] = "Friday";
        days[5] = "Saturday";
        days[6] = "Sunday";
    }

    WeekDays(int dayNo)
    {
        dayNo = normalizeDayNo(dayNo);
        getCurrentDay(dayNo-1);
        getNextDay(dayNo+1);
        getPreviousDay(dayNo-2);
    }

    void displayDays(int dayNo) const
    {
        dayNo = normalizeDayNo(dayNo);
        getCurrentDay(dayNo-1);
        getNextDay(dayNo+1);
        getPreviousDay(dayNo-2);
    }
};

int main()
{
    WeekDays a;
    a.displayDays(7);

    cout<<endl;
    WeekDays b;
    b.displayDays(1);
    return 0;
}
