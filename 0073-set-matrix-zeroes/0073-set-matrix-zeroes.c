void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {

    int rowFlag=0;
    int colFlag=0;

    //checking the zero in first row
    for(int i=0;i<matrixColSize[0];i++)
    {
        if(matrix[0][i]==0)
        {
            rowFlag =1;
            break;
        }
    }

    //checking the zero in first col
    for(int j=0;j<matrixSize;j++)
    {
        if(matrix[j][0]==0)
        {
            colFlag=1;
            break;
        }
    }

    //setting the first row and col as markers
    for(int i=0;i<matrixSize;i++)
    {
        for(int j=0;j<matrixColSize[0];j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }

    //making inner matrix as zero
    for(int i=1;i<matrixSize;i++) 
    {
        for(int j=1;j<matrixColSize[0];j++)
        {
            if(matrix[i][0] == 0 || matrix[0][j] == 0)
                 matrix[i][j]=0;
        }
    }

    // set first row zero
    if(rowFlag)
    {
        for(int j=0;j<matrixColSize[0];j++)
            matrix[0][j] = 0;
    }
    
    // set first column zero
    if(colFlag)
    {
        for(int i=0;i<matrixSize;i++)
            matrix[i][0] = 0;
    }
}