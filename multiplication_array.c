#include <stdio.h>
int main()
{
    int m, n, p, q, i, j, k, sum = 0;
    int A[5][5], B[15][5], C[5][5];
    printf("Enter number of rows and columns of A matrix\n");
    scanf("%d %d", &m, &n);
    printf("Enter elements of A matrix\n");
    for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
    scanf("%d", &A[i][j]);
    printf("Enter number of rows and columns of B matrix\n");
    scanf("%d %d", &p, &q);
    if (n != p)
    printf("The multiplication of matrix not possible \n");
    else
    {
        printf("Enter elements of B matrix\n");
        for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
        scanf("%d", &B[i][j]);
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < q; j++) 
            {
                for (k = 0; k < p; k++) 
                {
                    sum = sum + A[i][k]*B[k][j];
                }
                C[i][j] = sum;
                sum = 0;
            }
        }
        printf("Product of the matrices:\n");
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < q; j++)
            printf("%d\t", C[i][j]);
            printf("\n");
        }
    }
    return 0;
    }