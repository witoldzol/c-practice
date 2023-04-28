#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
  char name[30];
  int age;
} bob;


bob bob_array[100];

int main(){
  int *my_pointer = (int*)malloc(4 * sizeof(int));
  printf("starting position of pointer %p\n", my_pointer);
  
  int value=5;
  for(int i=0; i<4; i++){
    *(my_pointer+i) = value;
    value++;
    printf("value of pointer in position %i is == %i, address: %p\n", i, *(my_pointer+i), my_pointer+i);
  }
}
