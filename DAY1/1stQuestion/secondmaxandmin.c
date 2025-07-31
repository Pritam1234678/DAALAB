#include <stdio.h>
#include <limits.h>
int main()
{
    FILE *f1, *f2;
    int j, arr[5];
    f1 = fopen("input.txt", "r");
    for (j = 0; j < 5; j++)
    {
        fscanf(f1, "%d", &arr[j]);
    }
    fclose(f1);
    int m1, m2, mn1, mn2;
    m1 = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (m1 < arr[i])
            m1 = arr[i];
    }
    m2 = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (m2 < arr[i] && arr[i] != m1)
            m2 = arr[i];
    }
    mn1 = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (mn1 > arr[i])
            mn1 = arr[i];
    }

    mn2 = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (mn2 > arr[i] && arr[i] != mn1)
            mn2 = arr[i];
    }
    f2 = fopen("Output.txt", "w");
    fprintf(f1, "%d secondmax", m2);
    fprintf(f2, "%d secondmin", mn2);
    fclose(f2);
}