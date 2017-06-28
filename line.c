# sat
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
int c;
int line;
char ch;
c=0;
line=0;
printf("enter text \n");
while((ch=getchar())!=EOF)
{
c++;
if(ch=='\n')
line++;
}
printf("%i",line);
printf("%i",c);
return 0;
}
