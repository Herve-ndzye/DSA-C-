#include <iostream>
#include <ctime>
using namespace std;
void time()
{
    time_t now=time(nullptr);
    tm* localTime = localtime(&now);
    cout << "The current date and time :"
         << localTime->tm_mday<<'/'
         << localTime->tm_mon+1<< '/'
         << localTime->tm_year+1900<< ' '
         << localTime->tm_hour<<':'
         << localTime->tm_min<<':'
         << localTime->tm_sec;
}
int main()
{
    time();
    return 0;
}