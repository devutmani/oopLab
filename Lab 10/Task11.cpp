#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    string line;

    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    int punctCount = 0;

    ifstream file;
    file.open("articl.txt");
    if (!file.is_open())
    {
        cerr<<"\nError: There is an error in your file 'articl.txt'!..."<<endl;
        exit(1);
    }

    while (getline(file, line))
    {
        lineCount++;
        bool isWord = false;

        for (char ch : line)
        {
            charCount++;
            if (ispunct(ch))
            {
                punctCount++;
            }

            if (isspace(ch))
            {
                if (isWord)
                {
                    wordCount++;
                    isWord = false;
                }
            }
            else
            {
                isWord = true;
            }
        }

        if (isWord)
        {
            wordCount++;
        }

        charCount++;
    }

    file.close();

    ofstream reportFile;
    reportFile.open("report.txt");
    if (!reportFile.is_open())
    {
        cerr<<"\nError: There is an issue in your file 'report.txt'!..."<<endl;
        exit(1);
    }

    reportFile<<"Total characters: "<<charCount<<endl;
    reportFile<<"Total words: "<<wordCount<<endl;
    reportFile<<"Total lines: "<<lineCount<<endl;

    file.close();
    return 0;
}