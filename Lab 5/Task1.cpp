#include <iostream>
using namespace std;

class DayOfYear
{
public:
    void dayOfYear(int num)
    {
        if (num < 1 || num > 365)
        {
            cout<<"Invalid Input!.."<<endl;
            return;
        }

        for (int i = 1; i <= 365; i++)
        {
            if (i == num && num <= 31 && num >= 1)
            {
                cout<<"January "<<i<<endl;
                break;
            }

            else if (i == num && num <= 59 && num >= 32)
            {
                cout<<"February "<<i-31<<endl;
                break;
            }

            else if (i == num && num <= 90 && num >= 60)
            {
                cout<<"March "<<i-59<<endl;
                break;
            }

            else if (i == num && num <= 120 && num >= 91)
            {
                cout<<"April "<<i-90<<endl;
                break;
            }

            else if (i == num && num <= 151 && num >= 121)
            {
                cout<<"May "<<i-120<<endl;
                break;
            }

            else if (i == num && num <= 181 && num >= 152)
            {
                cout<<"June "<<i-151<<endl;
                break;
            }

            else if (i == num && num <= 212 && num >= 182)
            {
                cout<<"July "<<i-181<<endl;
                break;
            }

            else if (i == num && num <= 243 && num >= 213)
            {
                cout<<"August "<<i-212<<endl;
                break;
            }

            else if (i == num && num <= 273 && num >= 244)
            {
                cout<<"September "<<i-243<<endl;
                break;
            }

            else if (i == num && num <= 304 && num >= 274)
            {
                cout<<"October "<<i-273<<endl;
                break;
            }

            else if (i == num && num <= 334 && num >= 305)
            {
                cout<<"November "<<i-304<<endl;
                break;
            }

            else if (i == num && num <= 365 && num >= 335)
            {
                cout<<"December "<<i-334<<endl;
                break;
            }
        }
    }
};

int main()
{
    DayOfYear d;
    d.dayOfYear(2);
    d.dayOfYear(42);
    d.dayOfYear(365);
    d.dayOfYear(377);
    return 0;
}
