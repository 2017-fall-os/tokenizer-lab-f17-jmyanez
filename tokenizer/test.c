
#include "mytoc.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
  char aString[50];
  char **tVec;
int exit =0,i=0,count=0;
//Prompt $ to ask for input
    write(1,"$\n",2);
   
  scanf("%[^\n]%*c", aString);
  tVec= myToc(aString,' ');

// While to print the tokens
while(tVec[i]!='\0'){
int j=0;
char* t= tVec[i];
// For to count the size of the words
for(j=0; t[j]!= '\0';j++){

}
write(1,tVec[i],j);
write(1,"\n",1);
i++;
}
    free(tVec);
  return 0;
}
