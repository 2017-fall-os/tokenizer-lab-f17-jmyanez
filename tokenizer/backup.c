#include "mytoc.h"
#include <stdio.h>
#include <stdlib.h>


char *stringCopy(char *str, int len, int index){
  char *aCopy = (char*) malloc(len +1);
  
  for(int i=index ; i<(len+i)-1;i++){
    aCopy[i]= str[i];
  }
  aCopy[len]=0;
  printf("******   %s\n" , aCopy);
  return aCopy;
}


// This method will count the number of tokens in the string
int numTokens(char* str){
  int  isSpace=1, wCount=0;
  
 for(int i =0; str[i]!='\0'; i++){
    if(str[i]==' '){
      isSpace=1;
    }
     if(isSpace==1 && str[i]!=' '){
         wCount++;
      isSpace=0;
    }
     
}
 return wCount;
}


char ** myToc(char* str, char delim){
  // char *myString = "Hola Me LLamo Manuel Perro";
  int vSize,len=0, wCount=0, isSpace=1,index=0;
  wCount= numTokens(str);
  printf("Number of Tokens: %d\n", wCount);
   //Vector that will have all the tokens adress 
  char **tokenVec = (char**) calloc(wCount+1, sizeof(char*));
   int word=0;

   for(int i =0; str[i]!='\0'; i++){
     if(str[i]==' '){
       isSpace=1;
       len=0;
     }
     if(str[i]!=' '){
       len++;
       isSpace=0;
     }
     if(isSpace=0 && str[i]==' '){
       tokenVec[word] = stringCopy(str,len,index);  
     }
    
    tokenVec[wCount]= 0;
   } // end of FOR LOOP

   return tokenVec;
}// end of myToc function

