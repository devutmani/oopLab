#include <iostream>
using namespace std;

class ValidateString
{
private:
    string word;

    void validate()
    {
        for (char i : word)
        {
            if (!(i >= 'A' && i <= 'Z') && !(i >= 'a' && i <= 'z'))
            {
                cout<<"\nValidation failed!..."<<endl;
                return;
            }
        }
        cout<<"\nValidation succeeded!..."<<endl;
    }

public:
    ValidateString(const string &word) : word(word)
    {
        this->validate();
    }
};

int main()
{
    ValidateString word("DevKumar");
    ValidateString word2("123Dev");
    ValidateString word3("Dev1");
    return 0;
}
