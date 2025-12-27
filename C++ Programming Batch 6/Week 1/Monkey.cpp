#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[100005];
    while (cin.getline(s, 100005))
    {
        char t[100005] = {'\0'};
        int i = 0, j = 0;
        while (s[i] != '\0')
        {
            if (s[i] != ' ')
            {
                t[j] = s[i];
                j++;
                i++;
            }
            else
                i++;
        }
        sort(t, t + j);
        cout << t << endl;
        i = 0;
    }

    return 0;
}
