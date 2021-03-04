#include <stdio.h>

int main () 
{

   int  n = 20;  
   int  *ptr;       
   ptr = &n;  
   printf(" %x\n", &n  );
   printf(" %x\n", ptr );
   printf(" %d\n", *ptr );

   return 0;
}