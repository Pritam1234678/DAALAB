#include <stdio.h>
#include <stdlib.h>
int main(int argv, char*argc[])
{
    FILE *f1, *f2;
    f1 = fopen(argc[1],"r");
     int num;
      fscanf(f1, "%d", &num);

    fclose(f1);
      f2 = fopen(argc[2], "w");


    int binary[32];
    int i = 0;
    int temp = num;
    while (temp > 0) {
        binary[i] = temp % 2;
        temp = temp / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        fprintf(f2, "%d", binary[j]);
    }
    fclose(f2);

    return 0;
}
