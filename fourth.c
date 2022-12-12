#include <stdio.h>
#include <malloc.h>

int main() {
    int **A; 
    int n,m;
    int repeated[m];
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
    int p = 0;
    
    for (int j=0; j<m;j++) {
        for (int k =j+1; k < m;k++) {
            if (A[0][j]  == A[0][k]) {
                repeated[p] = A[0][j];
                p++;
                break;
            }
        }
    }
    
    for (int i = 1; i < n; i++) { 
        
    }

}


