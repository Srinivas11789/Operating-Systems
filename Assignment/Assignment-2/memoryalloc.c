#include "user.h"
#include "stat.h"
#include "types.h"
/*
 * Function: MAIN
 * - Stores the string HelloWorld! in the memory
 * - Outputs the data from the memory
 * - Frees the memory
 */
int main(void) 
{
int i;
char *a;
a = (char *) malloc(11);
char *start; 
start = a;
printf(1,"Start Address is : %d\n",start);
char b[11] = "HelloWorld!"; 
for(i = 0; b[i] != '\0'; i++)
    {
        *a = b[i];
        printf(1,"Next Address is : %d\n",a);
        a++;
    }

    *a  = '\0';
for(a = start; *a != '\0'; a++) {
   printf(1,"The Data written is : %c at %d\n",*a,a);
}
a = start;
printf(1,"The Data is : %s\n",a);
free(a);
printf(1,"The Data Fetch after Memory Freeing is : %s\n",*a);
printf(1,"The Address after Memory Freeing is : %d\n",a);
exit();
}
