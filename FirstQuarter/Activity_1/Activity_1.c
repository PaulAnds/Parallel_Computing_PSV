#include <stdio.h>

//multiply 2 matrix 10,10
int main() {

    int N[10];
//Result
    int C[10][10];
//Matrix 1
    int A[10][10] = {{1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 }, 
                     {3 , 4 , 3 , 4 , 3 , 4 , 3 , 4 , 3 , 4 }, 
                     {1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 }, 
                     {3 , 4 , 3 , 4 , 3 , 4 , 3 , 4 , 3 , 4 } , 
                     {1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 }, 
                     {3 , 4 , 3 , 4 , 3 , 4 , 3 , 4 , 3 , 4 }, 
                     {1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 }, 
                     {3 , 4 , 3 , 4 , 3 , 4 , 3 , 4 , 3 , 4 }, 
                     {1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 }, 
                     {3 , 4 , 3 , 4 , 3 , 4 , 3 , 4 , 3 , 4 }};
//Matrix 2
    int B[10][10] = {{2 , 0 , 2 , 0 , 2 , 0 , 2 , 0 , 2 , 0 },
                     {1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 },
                     {2 , 0 , 2 , 0 , 2 , 0 , 2 , 0 , 2 , 0 },
                     {1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 },
                     {2 , 0 , 2 , 0 , 2 , 0 , 2 , 0 , 2 , 0 },
                     {1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 },
                     {2 , 0 , 2 , 0 , 2 , 0 , 2 , 0 , 2 , 0 },
                     {1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 },
                     {2 , 0 , 2 , 0 , 2 , 0 , 2 , 0 , 2 , 0 },
                     {1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 , 1 , 2 }};

//Function to calculate and print the resulting matrix
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            C[i][j] = 0;
            for(int k = 0; k < 10; k++){
                N[k] = A[i][k] * B[k][j];
                C[i][j] += N[k];
            }
            printf("%d ,", C[i][j]);
        }
        printf("\n");
    }


    return 0;
}