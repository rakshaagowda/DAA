#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int count;

int linearSearch(int *a, int n, int k)
{
    int i;
    count = 0;
    for (i = 0; i < n; i++)
    {
        count++;
        if (a[i] == k)
        {
            return i;
        }
    }
    return -1;
}
void tester()
{
    int *arr, n, key, ch, ans;
    printf("\nEnter array size: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("\nEnter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }
    printf("\nEnter key to be searched : ");
    scanf("%d", &key);
    ans = linearSearch(arr, n, key);
    if (ans == -1)
        printf("\nKey not found! %d\n", ans);
    else
        printf("\nKey found at %d index\n", ans);
}