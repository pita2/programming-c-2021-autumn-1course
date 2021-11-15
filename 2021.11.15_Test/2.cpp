#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int i = 1;
    int mx = -10000;
    int mn = 10000;
    int a = 0;
    
    while (cin >> a)
    {
        if (i % 2 == 0)
        {
            mx = max(mx, a);
        }
        else
        {
            mn = min(mn, a);
        }
        ++i;
    }
    
    cout << mx + mn << endl;
    
    return EXIT_SUCCESS;
}
