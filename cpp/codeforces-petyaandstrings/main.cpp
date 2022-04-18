#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string a, b;
 
    cin >> a;
    transform(a.begin(), a.end(), a.begin(),
              [](unsigned char c) { return tolower(c); });
    cin >> b;
    transform(b.begin(), b.end(), b.begin(),
              [](unsigned char c) { return tolower(c); });
    cout << a.compare(b);
 
    return 0;
}
