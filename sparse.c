int main() 

{ 
    int row,col;
    printf("Enter the row :\n");
    scanf("%d",&row);
    printf("\nEnter the column:\n");
    scanf("%d",&col);
    int a[row][col];
    int i,j=0;
    printf("Enter the array:\n");
    for ( i = 0; i < row; i++)
    {
        
        for ( j = 0; j < col; j++)
        {
            printf("Enter the value a[%d][%d] \n ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("The array is:\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d\t ",a[i][j]);
            if(j==(col-1))
            {
                printf("\n");
            }
            
        }
        
    }

    int count=0;
    for ( i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (a[i][j]==0)
            {
                count++;
            }
            
        }
        
    }
    if (count>(row*col/2))
    {
        printf("\nIt is a sparse matrix with %d zeros",count);
    }
    else
    {
        printf("\nIt is not a sparse matrix");
    }
    
    return 0; 

}