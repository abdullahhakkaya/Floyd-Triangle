#include<stdio.h>

int main()
{
    int row,i,j=1;
    int number=1;
    printf("enter the number of triangle's row: ");
    scanf("%d",&row);
    printf("\n\n");

    for(i=1;i<=row;i++)
    {
        j=1;
        while(j<=i)
        {
            printf("%d ",number);
            j++;
            number++;
        }

        printf("\n");
    }
    return 0;
}
