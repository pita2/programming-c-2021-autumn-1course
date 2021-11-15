#include <iostream>

using namespace std;

int nod(int n, int m)
{
    while ((n != 0) && (m != 0))
    {
        if (n > m)
        {
            n = n % m;
        }
        else
        {
            m = m % n;
        }

    }
    return n + m;
}
int main()
{
    int n = 0;
    int m = 0;
    cin >> n >> m;
    long long a = n * m;
    long long nok = a / nod(n, m);
    cout << nok << endl;
    
    return EXIT_SUCCESS;
}
