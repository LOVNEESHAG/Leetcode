#include <iostream>
using namespace std;

int main()
{
int t;
cin >> t;

while(t>0)
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int bad = 0;

    for(int i = 0; i < n - 1; i++)
    {
        if(s[i] == s[i + 1])
        {
            bad++;
        }
    }

    if(bad <= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

return 0;
}