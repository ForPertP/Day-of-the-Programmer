#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string dayOfProgrammer(int year)
{
    string result;
    
    if (year % 4 == 0 && (year < 1918 || year % 400 == 0 || year % 100 != 0))
    {
        result = "12.09." + std::to_string(year);
    }
    else if (year == 1918)
    {
        result = "26.09.1918";
    }
    else
    {
        result = "13.09." + std::to_string(year);
    }
    
    return result;
}
