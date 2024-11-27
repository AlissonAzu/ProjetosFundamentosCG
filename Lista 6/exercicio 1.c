#include <stdio.h>

int main() {
    int v1[] = {1, 5, 9, 2, 5};
    int v2[] = {7, 4, 13, 21, 6};
    int v3[] = {8, -3, 5, 7, 12};
    
    int M[3][5];
    
    for (int i = 0; i < 5; i++) {
        M[0][i] = v1[i];
        M[1][i] = v2[i];
        M[2][i] = v3[i];
    }
    
    printf("Matriz M = \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
