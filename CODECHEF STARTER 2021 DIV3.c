#include <stdio.h>
#include <conio.h>

void main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {

        int Z, Y, A, B, C;
        //printf("ENTER VALUE OF Z\n")
        scanf("%d", &Z);

        //printf("ENTER VALUE OF Y\n");
        scanf("%d", &Y);

        //printf ("ENTER VALUE OF A\n");
        scanf("%d", &A);

        //printf("ENTER VALUE OF B\n");
        scanf("%d", &B);

        //printf("ENTER VALUE OF C\n");
        scanf("%d", &C);

        if (Z - Y >= A + B + C)

        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
