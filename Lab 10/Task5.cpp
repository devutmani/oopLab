#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string word;

    ifstream storyFile;
    storyFile.open("story.txt");
    if (!storyFile.is_open())
    {
        cout<<"Error: There is an error in your file 'story.txt'!..."<<endl;
        return 1;
    }

    while (storyFile>>word)
    {
        cout<<word<<endl;
    }

    storyFile.close();
    return 0;
}