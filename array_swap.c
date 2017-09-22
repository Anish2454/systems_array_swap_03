#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
Helper function to print an Array
Using the "sizeof" function on the array passed in
as an argument did not work, so the size of the array
is the second argument
*/
int print_array(int arr[], int size){
  int j;
  for(j = 0; j < size; j++)
    printf("%d : %d \n", j, arr[j]);
  printf("\n");
  return 1;
}


int main(){
  /* Initialize array with a size of 10 */
  int vals[10];

  /* "NULL" has to be all caps */
  srand(time(NULL));

  /* Populate the array with random numbers */
  int i;
  for(i = 0; i < 10; i++)
    vals[i] = rand();

  /* Set the last value of the array to 0 */
  vals[9] = 0;

  printf("    Array #1    \n");
  print_array(vals, 10);

  /* Initialize the second array */
  int vals2[10];

  /*
  Initialize the pointers
    - vals_p should be set to
      the last value of the first array
      since we are trying to reverse it
  */
  int *vals2_p = &vals2[0];
  int *vals_p = &vals[9];


  /*
  Make vals_2p point to the value that vals_p points to.
  Then, increment vals2_p by 1 (to the next position in vals2)
  and decrement vals_p by 1 (to the previous position in vals)
  */
  int k;
  for(k = 0; k < 10; k++){
    *vals2_p = *vals_p;
    vals2_p++;
    vals_p--;
  }

  printf("    Array #2    \n");
  print_array(vals2, 10);

  return 1;
}
