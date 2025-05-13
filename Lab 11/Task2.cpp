#include <iostream>
using namespace std;

int main() 
{
    int num, den;
    
    cout << "Enter numerator: ";
    cin >> num;
    
    cout << "Enter denominator: ";
    cin >> den;
    
    try 
    {
        if (den == 0) 
        {
            throw(0);
        }

        int result = num / den;
        cout << "Result: " << result << endl;
    }

    catch (int a) 
    {
        cout << "Error: Dividing by " <<a<<" is not possible!..."<<endl;
    }
    
    return 0;
}