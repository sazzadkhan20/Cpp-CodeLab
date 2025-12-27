#include <bits/stdc++.h>

using namespace std;

int find(string s, string x)
{
    int j = 0;
    bool flag = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == x[j] && j < x.size())
        {
            j++;
            flag = true;
            if (j == x.size())
                return i - j + 1;
        }
        else if (flag)
        {
            flag = false;
            j = 0;
        }
    }
    return -1;
}

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        string s, x;
        cin >> s >> x;
        while (true)
        {
            int index = find(s, x);
            if (index == -1)
                break;
            s.replace(index, x.size(), "#");
        }
        cout << s << endl;
    }
}