#include <stdio.h>
#include <malloc.h>

int main() {
    int **A; 
    int n,m, count;
    
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
    
    for (int i = 0; i < n; i++) {
        int flag = 1;
        for (int j = 1; j<m;j++) {
            if (A[i][j-1] <A[i][j]) {
                flag = 0;
            }
        }
        if(flag) {
            count++;
        }
    }
    printf("%d", count);
    for (int i = 0; i < n; i++) {
        free(A[i]);
    }
    return 0;
}

