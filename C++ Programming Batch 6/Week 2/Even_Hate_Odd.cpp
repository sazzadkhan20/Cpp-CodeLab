#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        int arr[N];
        int evenCount = 0, oddCount = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }
        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else if (oddCount == 0 || evenCount == 0)
        {
            cout << (oddCount + evenCount) / 2 << endl;
        }
        else if (oddCount == evenCount)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << abs((oddCount - evenCount) / 2) << endl;
        }
    }