#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int n;
    scanf("%d", &n);
    int a[n*2-2][n*2-2];
    for (int i = 0; i<=n*2-2; i++) {
       for (int j = i; j<=(n*2-2)-i; j++) {
           a[i][j] = n-i;
           a[j][i] = n-i;
           //a[(n*2-2)-i][(n*2-2)-j] = n-i;
           //a[(n*2-2)-j][(n*2-2)-i] = n-i;
           // printf("%d ",n-i);
        }
		for (int j =(n*2-2)-i; j>=i; j--) {
           // a[i][j] = n-i;
           // a[j][i] = n-i;
           a[(n*2-2)-i][(n*2-2)-j] = n-i;
           a[(n*2-2)-j][(n*2-2)-i] = n-i;
           // printf("%d ",n-i);
        }
        for (int j = 0; j<=n*2-2; j++) {
          
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

