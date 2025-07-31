#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    if (a< b){
        int temp =a;
        a=b;
        b=temp;
    }
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main(int argc, char *argv[])
{
    FILE *f1, *f2;
    int num1, num2;
    f1 = fopen(argv[1], "r");
    f2 = fopen(argv[2], "w");
    while (fscanf(f1, "%d %d", &num1, &num2) == 2)
    {
       int result = gcd(num1, num2);
        fprintf(f2, "The GCD of %d and %d is %d\n", num1, num2, result);
    }
    fclose(f1);
    fclose(f2);
}
