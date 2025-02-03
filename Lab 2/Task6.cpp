/**
 * Name: Dev Kumar
 * Section: AI-2A
 * Date: 1/25/2025
 * Desc: Program to find factorial of given number
 */

#include <iostream>
using namespace std;

int main()
{
    int* ptr ;
    int numOfelement = 0;
    int length = 5;
    int element;

    ptr = new int[length];

    cout << "\nIF YOU WANT TO END THEN ENTER '9999'\n" << endl;

    while (true)
    {
        cout << "Enter element: ";
        cin >> element;

        if (element == 9999)
        {
            break;
        }

        if (numOfelement == length)
        {
            int newLength = length * 2;
            int* ptr2 = new int[newLength];

            for (int k = 0; k < length; k++)
            {
                ptr2[k] = ptr[k];
            }

            delete[] ptr;
            ptr = ptr2;
            length = newLength;
        }

        ptr[numOfelement] = element;
        numOfelement++;
    }

    if (numOfelement < length)
    {
        int* ptr2 = new int[numOfelement];
        for (int k = 0; k < numOfelement; k++)
        {
            ptr2[k] = ptr[k];
        }
        delete[] ptr;
        ptr = ptr2;
        length = numOfelement;
    }

    cout << "\nFinal array elements: ";
    for (int i = 0; i < numOfelement; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << "\nNumber of elements: " << numOfelement << endl;
    cout << "Final array capacity: " << length << endl;

    delete[] ptr;

    return 0;
}
