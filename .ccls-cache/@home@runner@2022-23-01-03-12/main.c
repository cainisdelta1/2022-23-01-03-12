#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int * nums = calloc(10, sizeof(int));

  if (nums)
  {
    for (int i = 0; i < 10; i++)
      printf("nums[%d] = %d\n", i, nums[i]);  
    
    printf("\n\n");
    
    for (int i = 0; i < 10; i++) nums[i] = i+1;
    for (int i = 0; i < 10; i++)
      printf("nums[%d] = %d\n", i, nums[i]);  
    printf("\n");
    
    int * copy = nums;
    free(nums);
    for (int i = 0; i < 10; i++)
    {
      printf("copy[%d] = %d\n", i, copy[i]);    
    } 
  }
  else {
    printf("couldn't allocate memory\n");
  }
  
  return 0;
}