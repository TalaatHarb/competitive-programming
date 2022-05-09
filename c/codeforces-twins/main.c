#include <stdio.h>
#include <stdlib.h>

#define MAXN 100

int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{

    int n;
    int a[MAXN];

    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // sort the array
    qsort(a, n, sizeof(int), compare);

    // calculate the sum
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum += a[i];
    }

    // count how many indexs from the start of the array unitl you get more than half the sum
    int partialSum = 0;
    int i;
    for (i = n - 1; i <= n; i--)
    {
        partialSum += a[i];
        if (partialSum > sum / 2)
        {
            break;
        }
    }

    // print i
    printf("%d\n", n - i);
}