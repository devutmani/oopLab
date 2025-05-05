#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string word;
    char ch;

    fstream draftFile;
    draftFile.open("draft.txt");
    if (!draftFile.is_open())
    {
        cout<<"\nError: There is an issue in your file 'draft.txt'!..."<<endl;
        return 1;
    }

    while (draftFile.get(ch))
    {
        word += ch;
        if (word.size() > 3)    word.erase(0, 1);

        if (word == "teh")
        {
            draftFile.seekp(-3, ios::cur);
            draftFile.write("the", 3);
            break;
        }
    }

    draftFile.close();
    cout<<"\nFirst 'teh' error corrected successfully!..."<<endl;
    return 0;
}