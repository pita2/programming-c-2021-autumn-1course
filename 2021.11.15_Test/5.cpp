#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int m = 0;
    scanf("%i", &n);
    scanf("%i", &m);

    int c[100001] = {0};
    int a = 0;
    for (int i = 0; i < n; ++i)
    {

        scanf("%i", &a);
        c[a] = true;
    }
    int b = 0;
    for (int i = 0; i < m; ++i)
    {

        scanf("%i", &b);
        if (c[b] == 1)
        {
            c[b] = 2;
        }
    }

    for (int i = 0; i < 100001; ++i)
    {
        if (c[i] == 2)
        {
            printf("%i ", i);
        }
    }


    return EXIT_SUCCESS;
}
