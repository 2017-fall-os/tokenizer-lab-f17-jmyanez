
#include "mytoc.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
  char aString[50];
  char **tVec;
  int exit =0,i=0;

    write(1,"$\n",2);
    // while(exit != 1){
  scanf("%[^\n]%*c", aString);
  printf("%s\n", aString);
  tVec= myToc(aString,' ');
  
  printf("%s\n",tVec[1]);
  //printf("%c", aString[1]);
  // printf("%s", "Continue? 1:No 0:Yes ");
  // scanf("%s", &exit);

  // }

    free(tVec);
  return 0;
}
