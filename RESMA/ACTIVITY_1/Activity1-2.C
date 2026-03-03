#include <stdio.h>

int main()
 { char arr[5] = {'N','A','P','D','J'};

   int size = sizeof(arr)/sizeof(arr[0]);
   for (int i=0; i<size; i++)
{ printf("Member %d,%c\n",i + 1, arr[i]);
}

return 0;

 }