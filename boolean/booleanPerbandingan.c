#include <stdio.h>

int main(){
  int uang= 6000;
  int hujan=0;
  if (uang>5000 && !hujan)
  {
       printf ("uang>5000 dan tidak hujan\n");
  }

  uang= 6000;
   hujan=1; /*artinya hujan bernilai TRUE */
   printf ("uang>5000 dan tidak hujan: %d \n",  (uang>5000) && (!hujan));
 
  return 0;
}