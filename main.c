#include <stdio.h>
int sum(int,int);
int total(int (*func), int, int);
void greet_in_english(void);
void greet_in_polish(int);

typedef struct {
  char* name;
  int age;
  void (*greeting)(int);
} Person;

void greet_in_english(void){printf("Hi there\n");}
void greet_in_polish(int times){for(int i=0; i<times;i++)printf("siemanolo\n");}

int main() {
  char ziomek_name = 'z';

  Person ziomek = {&ziomek_name, 20, &greet_in_polish};

  ziomek.greeting(4);
  
}
