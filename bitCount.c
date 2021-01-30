#include <stdio.h>
#include <stdlib.h>

int main(void){

int integer;
int finalInt;
int binaryArray[255];
int tally=0;

printf("Enter an integer: ");
scanf("%d", &integer); 
int i;

finalInt=integer;

for(i=0; integer>0; i++){
  binaryArray[i]=integer%2;
  integer=integer/2;
}

for(i=i-1;i>=0;i--){    
  if(binaryArray[i] == 1){
  tally++;
  }
}

printf("Number of 1 bits in the binary representation of %d: %d.", finalInt, tally);
 
printf("\n");
}
