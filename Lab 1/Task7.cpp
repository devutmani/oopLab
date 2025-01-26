/**
 * Name: Dev Kumar
 * Section: AI-2A
 * Date: 1/25/2025
 * Desc: Program to calculate monthly electricity bill
 */

#include <iostream>
using namespace std;

float electricityBill(int units);       // prototype of electricity bill calculating function

int main()
{
    // declaring variable for units
    int units;

    // taking units (input)
    cout<<"Enter units: ";
    cin>>units;

    // if invalid unit is given (negative no: or any other characters)
    if (units < 0)
    {   
        cout<<"Invalid units!..."<<endl;
        return 0;
    }

    // calling electricity bill calculating function and also printing it
    cout<<"Total Electricity Bill (including surcharge): "<<electricityBill(units)<<endl;

    return 0;   // main function ends here
}

// defining electricity bill calculating function
float electricityBill(int units)
{
    // condition for if units are above 250
    if (units > 250)
    {
        return ((units-250)*1.50)+(50*0.50)+(100*0.75)+(100*1.20)+(((((units-250)*1.50)+(50*0.50)+(100*0.75)+(100*1.20))*20)/100);
    }

    // condition for if units are above 150
    else if(units > 150)
    {
        return ((units-150)*1.20)+(50*0.50)+(100*0.75)+(((((units-150)*1.20)+(50*0.50)+(100*0.75))*20)/100);
    }

    // condition for if units are above 50
    else if(units > 50)
    {
        return ((units-50)*0.75)+(50*0.50)+(((((units-50)*0.75)+(50*0.50))*20)/100);
    }

    // condition for units Less than 50 or 0
    else
    {
        return (units*0.50)+((((units*0.50))*20)/100);
    }
}
