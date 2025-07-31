#include <stdio.h>
int main()
{
    FILE *f1, *f2;
    int arr[5], j;
    f1 = fopen("Input.txt", "r");
    for (j = 0; j < 5; j++)
    {
        fscanf(f1, "%d", &arr[j]);
    }
    fclose(f1);
    for (int i = 1; i < 5; i++)
    {
        arr[i] += arr[i - 1];
    }
    f2 = fopen("Output.txt", "w");
    fprintf(f2, "prefix Sum Array");
    for (int i = 0; i < 5; i++)
    {
        fprintf(f2, "%d ", arr[i]);
    }

    fclose(f2);
}
