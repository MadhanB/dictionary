# dictionary
#include<stdio.h>
#include<string.h>
void main()
{
int i,j;
char str[10][50],temp[50];
printf("enter 10 words");
for(i=0;i<10;++i)
gets(str[i]);
for(i=0;i<9;++i)
for(j=i+1;j<10 ;++j)
{
if(strcmp(str[i],str[j])>0)
{
strcpy(temp,str[i]);
strcpy(str[i],str[j]);
strcpy(str[j],temp);
}}
printf("the correct order is");
for(i=0;i<10;++i)
{
puts(str[i]);
}}
