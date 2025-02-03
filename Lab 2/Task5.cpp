#include <iostream>
using namespace std;

int** createMatrix(int rows, int colms);
void fillMatrix(int rows, int colms, int** matrix);
void deleteMatrix(int** matrix, int rows);
int** sumOfMatrix(int** matrix1, int** matrix2, int rows, int colms);
int** diffOfMatrix(int** Matrix1, int** Matrix2, int rows, int colms);
int** productOfMatrix(int** Matrix1, int** Matrix2, int rows, int colms);
void displayMatrix(int** matrix, int rows, int colms);

int main()
{
    int rowsMatrix1;
    int colmsMatrix1;
    int rowsMatrix2;
    int colmsMatrix2;

    cout<<"\n<----------------------(Input of Marices)---------------------->"<<endl;
    cout<<"\n\tEnter number of rows of Matrix 1: ";
    cin>>rowsMatrix1;
    cout<<"\tEnter number of columns of Matrix 1: ";
    cin>>colmsMatrix1;

    cout<<"\n\tEnter number of rows of Matrix 2: ";
    cin>>rowsMatrix2;
    cout<<"\tEnter number of columns of Matrix 2: ";
    cin>>colmsMatrix2;

    int** matrix1 = createMatrix(rowsMatrix1, colmsMatrix1);
    int** matrix2 = createMatrix(rowsMatrix2, colmsMatrix2);

    cout<<"\n<--------------------------(Matrix: 1)------------------------->"<<endl;
    fillMatrix(rowsMatrix1, colmsMatrix1, matrix1);
    cout<<"\n<--------------------------(Matrix: 2)------------------------->"<<endl;
    fillMatrix(rowsMatrix2, colmsMatrix2, matrix2);
    
    if (rowsMatrix1 == rowsMatrix2 && colmsMatrix1 == colmsMatrix2)
    {
        int** sum = sumOfMatrix(matrix1, matrix2, rowsMatrix1, colmsMatrix1);
        cout<<"\n<---------------------(Sum of Matrices)--------------------->"<<endl;
        displayMatrix(sum, rowsMatrix1, colmsMatrix1);
        cout<<"\n<----------------------------------------------------------->"<<endl;
    }
    else
    {
        cout<<"\n<----------------------------------------------------------->"<<endl;
        cout<<"\nMatrix addition is not possible (sizes do not match)."<<endl;
        cout<<"\n<----------------------------------------------------------->"<<endl;
    }

    if (rowsMatrix1 == rowsMatrix2 && colmsMatrix1 == colmsMatrix2)
    {
        int** diff = diffOfMatrix(matrix1, matrix2, rowsMatrix1, colmsMatrix1);
        cout<<"\n<----------(Subtraction of Matrix 2 from Matrix 1)---------->"<<endl;
        displayMatrix(diff, rowsMatrix1, colmsMatrix1);
        cout<<"\n<----------------------------------------------------------->"<<endl;
    }
    else
    {
        cout<<"\n<----------------------------------------------------------->"<<endl;
        cout<<"\nMatrix subtraction is not possible (sizes do not match)."<<endl;
        cout<<"\n<----------------------------------------------------------->"<<endl;
    }

    if (colmsMatrix1 == rowsMatrix2)
    {
        int** product = productOfMatrix(matrix1, matrix2, rowsMatrix1, colmsMatrix1);
        cout<<"\n<-------------------(Product of Matrices)------------------->"<<endl;
        displayMatrix(product, rowsMatrix1, colmsMatrix1);
        cout<<"\n<----------------------------------------------------------->"<<endl;
    }
    else
    {
        cout<<"\n<----------------------------------------------------------->"<<endl;
        cout<<"\nMatrix Multiplication is not possible (sizes do not match)."<<endl;
        cout<<"\n<----------------------------------------------------------->"<<endl;
    }

    deleteMatrix(matrix1, rowsMatrix1);
    deleteMatrix(matrix2, rowsMatrix2);

    return 0;
}

int** createMatrix(int rows, int colms)
{
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[colms];
    }
    return matrix;
}

void fillMatrix(int rows, int colms, int** matrix)
{
    for (int i = 0; i < rows; i++)
    {
        cout<<"\nRow "<<i+1<<": "<<endl;
        for (int j = 0; j < colms; j++)
        {
            cout<<"Enter element of column "<<j+1<<": ";
            cin>>matrix[i][j];
        }
    }
}

void displayMatrix(int** matrix, int rows, int colms)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colms; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int** sumOfMatrix(int** matrix1, int** matrix2, int rows, int colms)
{
    int** result = createMatrix(rows, colms);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colms; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return result;
}

int** diffOfMatrix(int** Matrix1, int** Matrix2, int rows, int colms)
{
    int** result = createMatrix(rows, colms);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colms; j++)
        {
            result[i][j] = Matrix1[i][j] - Matrix2[i][j];
        }
    }
    return result;
}

int** productOfMatrix(int** Matrix1, int** Matrix2, int rows, int colms)
{
    int** result = createMatrix(rows, colms);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colms; j++)
        {
            result[i][j] = Matrix1[i][j] + Matrix2[i][j];
        }
    }
    return result;
}

void deleteMatrix(int** matrix, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}
