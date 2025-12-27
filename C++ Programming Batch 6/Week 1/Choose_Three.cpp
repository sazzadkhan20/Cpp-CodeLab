#include <bits/stdc++.h>

using namespace std;
const int N = 101;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n, sum;
        cin >> n >> sum;
        int arr[N];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        bool flag = false;
        for (int i = 0; i < n - 2; i++)
        {
            if (flag)
                break;
            for (int j = i + 1; j < n - 1; j++)
            {
                if (flag)
                    break;
                for (int k = j + 1; k < n; k++)
                {
                    if ((arr[i] + arr[j] + arr[k]) == sum)
                    {
                        flag = true;
                        cout << "YES\n";
                        break;
                    }
                }
            }
        }
        if (!flag)
            cout << "NO\n";
    }
    return 0;
}
