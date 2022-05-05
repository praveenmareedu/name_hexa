#include <stdio.h>
#include<string.h>

void countChar(int sum)
{
    int decnum, rem, i=0;
    char hexnum[50];
  decnum=sum;
    while(decnum!=0)
    {
        rem = decnum%16;
        if(rem<10)
            rem = rem+48;
        else
            rem = rem+55;
        hexnum[i] = rem;
        i++;
        decnum = decnum/16;
    }
    printf("\nEquivalent Value in Hexadecimal = ");
    for(i=i-1; i>=0; i--)
        printf("%c", hexnum[i]);
}