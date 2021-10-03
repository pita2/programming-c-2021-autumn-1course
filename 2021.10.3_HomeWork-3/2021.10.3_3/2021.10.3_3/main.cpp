#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int n = 0;
    int k = 1;
    int a = 1;
    bool F = true;
    
    cin >> n;
    
    for (int i = 0; i < n && F; ++i)
    {
        for (int j = 0; j < k; ++j)
        {
            cout << a << " ";
            if (a == n)
            {
                F = false;
                break;
            }
            a++;
        }
        cout << endl;
        k++;
    }
    
    return EXIT_SUCCESS;
}
