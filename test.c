#include <stdio.h>
#include <stdlib.h>

int garr[5];

unsigned int User_Size;
char *Ptr;

void print_array(int arr[], int size)
{
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void print_matrix(int rows, int cols, int matrix[rows][cols])
{
    for(int i=0; i<rows; i++) 
    {
        printf("{ ");
        for(int j=0; j<cols; j++)
            printf("%d ", matrix[i][j]);
        printf("}\n");
    }
    printf("\n");
}

void print_matrix_v1(int **arr, int rows, int cols)
{
    for(int i=0; i<rows; i++) 
    {
        printf("{ ");
        for(int j=0; j<cols; j++)
            printf("%d ", arr[i][j]);
        printf("}\n");
    }
    printf("\n");
}

int** sum_of_matrix(int rows, int cols, int m1[rows][cols], int m2[rows][cols])
{
    int** result = malloc(rows * sizeof(int*));
    for(int i=0; i<rows; i++)
    {
        result[i] = malloc(cols * sizeof(int));
        for(int j=0; j<cols; j++)
        {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
    return result;
}

int** product_of_matrix(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2])
{
    
    int** result = malloc(r1 * sizeof(int*));
    for(int i=0; i<r1; i++)
    {
        result[i] = malloc(c2 * sizeof(int));
        for(int j=0; j<c2; j++)
        {
            result[i][j] = 0;
        }
    }
    
    if(c1 != r2)
        return result;

    int sum = 0;

    
    return result;
}

void print_names(const char names[][40], const int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%i. %s\n", i+1, names[i]);
    }
}

int main(void)
{
    
    // int matrix1[3][4] = {11,12,13,14,15,16,17,18,19,20,21,22};
    // int matrix2[2][3] = {1,2,3,4,5,6};
    // int matrix3[2][3] = {3,3,3,3,3,3};
    
    // printf("matrix1:\n");
    // print_matrix(3, 4, matrix1);
    
    // printf("matrix2:\n");
    // print_matrix(2, 3, matrix2);

    // printf("matrix3:\n");
    // print_matrix(2, 3, matrix3);

    // printf("matrix2 + matrix3:\n");
    // int** matrix23 = sum_of_matrix(2,3,matrix2,matrix3);
    // print_matrix_v1(matrix23, 2, 3);

    // printf("matrix1 * matrix2:\n");
    // int** matrix12 = product_of_matrix(3,4,matrix1, 2,3,matrix2);
    // print_matrix_v1(matrix12, 3, 3);
    
    // int name[] = "Mohamed";
    // printf("%s", name);

    // char names[5][40] = {
    //     "Mohamed Nayef Ahmed",
    //     "Ahmed Nayef Ahmed",
    //     "Ibrahim Nayef Ahmed",
    //     "Mohamed Ibrahim Nayef Ahmed",
    //     "Ali Nayef Ahmed"
    // };
    // print_names(names, 5);

    // int arr[5] = {0}; // First element = 0
    //                   // Rest of elements = 0
    // int arr[5] = {3}; // First element = 3
    //                   // Rest of elements = 0
    // printf("%p", &2[arr]);

    // int **p = (int**) malloc(5 * sizeof(int*));
    // p[0] = (int*) malloc(3 * sizeof(int));
    // p[1] = (int*) malloc(3 * sizeof(int));
    // p[2] = (int*) malloc(3 * sizeof(int));
    // p[3] = (int*) malloc(3 * sizeof(int));
    // p[4] = (int*) malloc(3 * sizeof(int));
    // p[0][2] = 33;
    // printf("%d\n", p[0][2]);

    // int *p = 0;
    // printf("%p\n", p);

    // printf("Enter the size of bytes: ");
    // scanf(" %i", &User_Size);
    // Ptr = malloc(User_Size);
    
    // if(NULL == Ptr)
    //     printf("Error!\n");
    // else 
    //     printf("Address of pointer is: %p\n", Ptr);

    printf("%lu", sizeof(NULL));
    
    

    return 0;
}