#include<string.h>
#include<ctype.h>
#include<stdio.h>



int sumOfDigitsInString(const char* input) {
    int sum = 0;
    
    while (*input != '\0') {
       
        if (isdigit((unsigned char)*input) && (isdigit((unsigned char)*input))<1000) {
           
            sum += *input - '0';
             
        }
        input++; 
    }
    return sum;
}



int add(const char* input){
if(input == ""){
      return 0;
  } 
  return sumOfDigitsInString(input);
}
