#include <stdio.h>

int main() {
  int num1;
  int num2;
  
  printf("input");
  scanf("%d %d",&num1, &num2);
  
  if(num1 > num2){
  		int total = num1 - num2;
  		printf("num1 > num2 = %d",total);
	}else{
  		int total = num2 - num1;
  		printf("num1 < num2 = %d",total);
  }
}
