#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

void selection_sort(int *a, int n){

  for (int i = 0; i < n-1; i++) {
    int imin =  i;
    for (int j = i+1; j < n; j++) {
      if(a[j]< a[imin]){
        imin = j;
      }
    }
    int temp = a[imin];
    a[imin] = a[i];
    a[i] = temp;
  }
}

int sockMerchant(int n, int ar_count, int* ar) {
    int count = 0;
    selection_sort(ar, n);
     for (int i = 0; i<n; i++) {
       printf("%d ",ar[i]);
    }
    for (int i = 0; i<n-1; i++) {
        if(ar[i]==ar[i+1]){
            i++;
            count++;
        }
    }
    return count;
}

int main()
{
  int a[] = {10,20,20,10,10,30,50,10,20};
 printf("%d\n",sockMerchant(9, 9, a));
}
