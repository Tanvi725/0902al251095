#include <stdio.h>

int main()
{
    int n, i, sum = 0, expectedSum, missing;
    int a[100];

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n - 1);

    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    expectedSum = n * (n + 1) / 2;

    missing = expectedSum - sum;

    printf("Missing number = %d\n", missing);

    return 0;
}