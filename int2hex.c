#include <stdio.h>
#include <stdlib.h>

int main(void){

int integer;
int temp;
char hexArray[255];
int i;

printf("Enter an integer: ");
scanf("%d", &integer); 


for(i=0; integer>0; i++){
  temp=integer%16;
  
  if( temp<10){
    temp=temp+48; 
  }
  else{
    temp=temp+55;
    }
  
  hexArray[i]= temp;
  integer=integer/16;

}

printf("Hexadecimal representation: ");

for(i=i-1;i>=0;i--){    
  printf("%c", hexArray[i]);    
}  

printf("\n");
}
