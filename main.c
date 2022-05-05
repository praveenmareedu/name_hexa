#include <stdio.h>
#include<string.h>
#include "countChar.h"
int main()
{
 char name[20];
 scanf("%s",name);
 int sum=0;
 for (int i=0;i<strlen(name) ;i++) {
     
     
     /* code */
     sum=sum+(int)name[i];
     
 }
 countChar(sum);
 
    return 0;
}
