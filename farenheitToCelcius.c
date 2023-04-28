#include <stdio.h>

float farToCel(float tempF){
  return (tempF - 32.0) * 5.0 / 9.0;
}

int main(){
	printf("Enter temperature in F: \n");
	float tempF;
	scanf("%f", &tempF);
  printf("Temp in celcius is : %.1f\n",farToCel(tempF));
}
