#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, c1, c2, c3;
    char istriangle;
    // clrscr();
    do
    {
        printf("\n Enter 3 integers which are sides of triangle\n");
        scanf("%d%d%d", &a, &b, &c);
        printf("\n a=%d \t b=%d \t c=%d", a, b, c);
        c1 = a >= 1 && a <= 10;
        c2 = b >= 1 && b <= 10;
        c3 = c >= 1 && c <= 10;
        if (!c1)
            printf("\n The value of a=%d is not the range of permitted value", a);
        if (!c2)
            printf("\n The value of b=%d is not the range of permitted value", b);
        if (!c3)
            printf("\n The value of c=%d is not the range of permitted value", c);
    } while (!(c1 && c2 && c3));
    // to check is it a triangle or not
    if (a < b + c && b < a + c && c < a + b)
        istriangle = 'y';
    else
        istriangle = 'n';
    if (istriangle == 'y')
        if ((a == b) && (b == c))
            printf(" Equilateral triangle\n");
        else if ((a != b) && (a != c) && (b != c))
            printf("Scalene triangle\n");
        else
            printf("Isosceles triangle\n");
    else
        printf("Not a triangle\n");
    return 0;
}
