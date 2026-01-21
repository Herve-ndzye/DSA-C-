#include <bits/stdc++.h>

int highestDigit(int number) {
    std::string a =  std::to_string(number);
    std::sort(a.begin(),a.end());
    return std::to_integer<int>(a[a.size()-1]);
}
int main()
{
    std::cout<< highestDigit(53);
    return 0;
}