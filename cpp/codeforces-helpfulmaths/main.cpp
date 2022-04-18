#include <bits/stdc++.h>
 
using namespace std;
 
#define DIGIT_MAX 3
 
int main()
{
    string s;
    int digits[DIGIT_MAX] = {};
    int n;
 
    cin >> s;
    n = strlen(s.c_str());
 
    for (int i = 0; i < n; i++)
    {
        digits[s.at(i) - '1']++;
    }
 
    bool hasBefore = false;
    for (int i = 0; i < DIGIT_MAX; i++)
    {
 
        for (int j = 0; j < digits[i]; j++)
        {
            if (hasBefore)
            {
                cout << '+';
            }
 
            cout << (i+1);
 
            if (digits[i] > 0)
            {
                hasBefore = true;
            }
        }
    }
 
    return 0;
}
