#include <stdio.h>
#include <stdlib.h>
void EXCHANGE(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void ROTATERIGHT(int *p1, int p2)
{
    if (p2 <= 1)
        return;
    int last = p1[p2 - 1];
    for (int i = p2 - 1; i > 0; i--)
    {
        EXCHANGE(&p1[i], &p1[i - 1]);
    }

    p1[0] = last;
}
int main()
{
    FILE *f1, *f2;
    int n = 9, i, j;

    int arr[n];

    f1 = fopen("Input.txt", "r");
    for (i = 0; i < n; i++)
    {
        fscanf(f1, "%d", &arr[i]);
    }
    fclose(f1);
    ROTATERIGHT(arr, 3);
    f2 = fopen("Output.txt", "w");

    for (i = 0; i < n; i++)
    {
        fprintf(f2, "%d ", arr[i]);
    }
    fclose(f2);
    
}