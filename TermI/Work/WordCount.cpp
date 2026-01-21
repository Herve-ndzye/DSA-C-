#include <iostream>
using namespace std;

void wordCount(string a)
{
    int counti = 0,countii = 0,countiii = 0;
    for (char b : a)
    {
        if (b!=' ')counti+=1;
        countii++;
        if (b==' ')countiii++;
    }
    cout << "The number of characters without spaces is :"<<counti<< endl;
    cout << "The number of characters with spaces is :"<< countii<< endl;
    cout <<"The number of words is :"<< ++countiii;
}
int main()
{
    string a;
    cout << "Enter the sentence :";
    getline(cin,a);
    wordCount(a);
    return 0;
}