#include <stdio.h>
#include <malloc.h>

int main() {
    int **A; 
    int n,m;
    
    printf("Enter the size of symmetrical matix: ");
    scanf("%d %d",&n, &m);
    A = (int**)malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++) {
        A[i]=(int*)malloc(m*sizeof(int));
        for (int j=0; j< m; j++) {
            printf("a[%d][%d]", i,j);
            scanf("%d", &A[i][j]);
        }
    }
    double count = 0;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        int maxIndex = 0;
        int max = -100; 
        for (int j = 0; j < m; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
                maxIndex = m - j;

            }     
        }
        int minIndex = 0;
        int min = 10000000;
        for (int k = 0; k < m; k++) {
            if (A[i][k]< min) {
                min = A[i][k];
                minIndex = m - k;
            }
        }
        if (maxIndex > minIndex) {
            for (int j = 0; j < m; j++) {
                sum+= A[i][j];
                count++;
            }
        }
        
    }
    printf("%lf", sum/count);
    

}


