#include<stdio.h>
int main()
{
   char ch, str[200];
   int i, frequency=0;

   printf("Enter string: ");
   fgets(str, sizeof(str), stdin);
   printf("Enter a character to check its frequency: ");
   scanf("%c",&ch);

   for(i=0;str[i]!='\0';i++)
   {
       if(ch==str[i]) frequency++;
   }

   printf("The frequency of %c is= %d",ch,frequency);
   return 0;
  }