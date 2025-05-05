#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;

    ifstream articleFile;
    articleFile.open("article.txt");
    if (!articleFile.is_open())
    {
        cout<<"\nError: There is an issue in your file 'article.txt'!..."<<endl;
        return 0;
    }

    streampos pos = articleFile.tellg();
    articleFile.seekg(pos/2, ios::beg);

    for (int i = 0; i < 10; i++)
    {
        getline(articleFile, line);
        cout<<line<<endl;
    }

    articleFile.close();
    return 0;
}