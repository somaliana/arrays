#include <stdio.h>
#include <malloc.h>

int main() {
    int **A; 
    int n;
    double count = 0;
    double sum = 0;
    printf("Enter the size of symmetrical matix: ");
    scanf("%d",&n);
    A = (int**)malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++) {
        A[i]=(int*)malloc(n*sizeof(int));
        for (int j=0; j< n; j++) {
            printf("a[%d][%d]", i,j);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j<n;j++) {
            sum += A[i][j];
            count++;
        }
    }
    double result = sum/count;
    printf("%lf", result);
    for (int i = 0; i < n; i++) {
        free(A[i]);
    }
    return 0;
    
}