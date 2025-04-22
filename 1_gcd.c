#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int count = 0;

int gcdEuclid(int m, int n)
{
    count = 0;
    while (n != 0)
    {
        int temp = m % n;
        m = n;
        n = temp;
        count++;
    }

    return m;
}

int gcdConsecutiveIntegerCheck(int m, int n)
{
    count = 0;
    int t = m > n ? n : m;
    for (int i = t; i > 0; i--)
    {
        count++;
        if (m % i == 0)
        {
            count++;
            if (n % i == 0)
                return i;
        }
    }

    return m > n ? m : n;
}
int modifiedEuclids(int m, int n)
{
    if (n == 0 || m == 0)
        return m > n ? m : n;

    count = 0;

    while (++count && m != n)
    {
        if (m > n)
            m -= n;
        else
            n -= m;
    }

    return n;
}
