#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int a[1000];
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int mn = a[0];
    for (int i = 0; i < n; ++i)
    {
        mn = min(mn, a[i]);
    }

    int mx = a[0];
    for (int i = 0; i < n; ++i)
    {
        mx = max(mx, a[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        if (a[i] == mx)
        {
            a[i] = mn;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}
