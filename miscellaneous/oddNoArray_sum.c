#include <inttypes.h>
#include <stdio.h>
uint64_t rowSumOddNumbers(uint32_t n)
{
    int a[n-1][n-1];
      for(uint32_t i = 0; i<n;i++){
        for(uint32_t j = 0;j<n;j++){
          for(uint32_t k = (i+1)*(i+1)-i; k<=n*n+(n-1);k++){
            printf("%d\n",k);
			uint32_t count = 0;
			if(k==1){
              a[0][0]=k; 
			  count++;
				
            }
            else if(k!=1 && k%2!=0){
              a[i][j]=k;
			  count++;
            }
            else{
              a[i][j]=0;
            }
			
			if(count > j+1){
				break;
			}
          }
          
          
        }
      }
      int sum =0;
      for(uint32_t i = 0; i<=n;i++){
        sum =  sum + a[n-1][i];
      }
	  for(uint32_t i = 0; i<n;i++){
		for(uint32_t j = 0;j<n;j++){
		  printf("%d ",a[i][j]);
		  
		}
		printf("\n ");
	  }
  
    return sum;
}

int main(){
	rowSumOddNumbers(2);
	
}
