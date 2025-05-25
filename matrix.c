//Matrix addition , subtraction, multiplication
#include<stdio.h>
int main()
{
    int A[100][100],B[100][100],multi[100][100];
    int i,j,row1,row2,col1,col2;
    printf("Enter row for A matrix : ");
    scanf("%d",&row1);
    printf("Enter column for A matrix : ");
    scanf("%d",&col1);
    printf("Enter row  for B matrix : ");
    scanf("%d",&row2);
    printf("Enter column for B matrix : ");
    scanf("%d",&col2);
    while(col1!=row2)
    {
        printf("Enter row for A matrix : ");
        scanf("%d",&row1);
        printf("Enter column for A matrix : ");
        scanf("%d",&col1);
        printf("Enter row for B matrix : ");
        scanf("%d",&row2);
        printf("Enter column for B matrix : ");
        scanf("%d",&col2);
    }
    printf("Enter elements of A matrix:\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements of B matrix:\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("A matrix:\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("B matrix:\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("%d\t",B[i][j]);
        }
        int addition[100][100];
        if(row1==row2 && col1==col2)
        {
            for(i=0; i<row1; i++)
            {
                for(j=0; j<col1; j++)
                {
                    addition[i][j] = A[i][j] + B[i][j];
                }
                printf("\n");
            }

            printf("Additon =\n");
            for(i=0; i<row1; i++)
            {
                for(j=0; j<col1; j++)
                {
                    printf("%d\t",addition[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("NOT Possible");
        }
        int sub[100][100];
        if(row1==row2 && col1==col2)
        {
            for(i=0; i<row1; i++)
            {
                for(j=0; j<col1; j++)
                {
                    sub[i][j] = A[i][j] - B[i][j];
                }
                printf("\n");
            }
            printf("Subtract =\n");
            for(i=0; i<row1; i++)
            {
                for(j=0; j<col1; j++)
                {
                    printf("%d\t",sub[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("NOT Possible");
        }
        int result[100][100],sum=0,k;
        for(i=0; i<row1; i++)
        {
            for(j=0; j<col2; j++)
            {
                for(k=0; k<col1; k++)
                {
                    sum+=A[i][k]*B[k][j];
                }
                result[i][j]=sum;
                sum = 0;
            }
            printf("\n");
        }
        printf("Multiplication Result =\n");
        for(i=0; i<row1; i++)
        {
            for(j=0; j<col2; j++)
            {
                printf("%d\t",result[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
