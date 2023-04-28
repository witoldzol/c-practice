#include <stdio.h>
#include <string.h>

int main(){
  char name[10];
  printf("Gib name\n");
  scanf("%9s", name);
  char new_name[16];
  strcat(new_name, name);
  strcat(new_name, name);
  // strcpy(new_name, name);
  puts("new name length is:");
  printf("%lu\n", strlen(new_name));
  puts("array length is");
  printf("%lu\n", sizeof(new_name));
  puts(new_name);
  return 0;
}
