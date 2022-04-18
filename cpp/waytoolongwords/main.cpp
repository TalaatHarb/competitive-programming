#include <bits/stdc++.h>
 
#define MAX_CHARS 100
 
using namespace std;
 
int main()
{
    int n;
    string *words;
 
    int len = 0;
 
    cin >> n;
 
    words = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        string word = words[i];
        len = word.length();
        if (len > 10)
        {
            cout << word.at(0) << (len - 2) << word.at(len - 1) << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
 
    delete[] words;
    return 0;
}
