#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1, *f2;
    int n = 15, i, j;

    int arr[n];

    f1 = fopen("Input.txt", "r");

    for (i = 0; i < n; i++)
    {
        fscanf(f1, "%d", &arr[i]);
    }
    fclose(f1);

    int dp = 0;
    int visited[n];

    for (i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        if (visited[i] == 1)
            continue;

        int count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        if (count > 1)
        {
            dp++;
        }
    }

    int mc = 0;
    int mr = arr[0];

    for (i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        if (visited[i] == 1)
            continue;

        int count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        if (count > mc)
        {
            mc = count;
            mr = arr[i];
        }
    }

    f2 = fopen("Output.txt", "w");

    fprintf(f2, "duplicate values = %d ", dp);
    fprintf(f2, "repeating element = %d", mr);

    fclose(f2);

}