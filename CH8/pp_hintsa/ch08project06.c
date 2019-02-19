#include <stdio.h>
 
int main ()
{
   int c = 0;
   char ch, message[1000];
 
   printf("Enter a message: ");
   scanf("%[^\n]s",message);
   
   while (message[c] != '\0') {
      ch = message[c];
      if (ch >= 'a' && ch <= 'z')
         message[c] = message[c] - 32;
      c++;  
   }
   c = 0;
   while (message[c] != '\0') {
      ch = message[c];
      if (ch == 'A')
         message[c] = '4';
      if (ch == 'B')
         message[c] = '8';
      if (ch == 'E')
         message[c] = '3';
      if (ch == 'I')
         message[c] = '1';
      if (ch == 'O')
         message[c] = '0';
      if (ch == 'S')
         message[c] = '5';
      c++;  
   }
   
   printf("In B1FF speak: %s !!!!!!!!!!\n", message);
 
   return 0;
}