#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int n = 0;
    int ans = 1;
    
    cin >> n;
    
    for (int i = 1; i <= n; ++i)
    {
        ans *= i;
    }
    
    cout << ans << endl;
    
    return EXIT_SUCCESS;
}
