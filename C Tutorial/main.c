#include <stdio.h>

int main(void){

  char response;
  int number = 1;

  printf("Выбирете число в интервале от 1 до 100\n");
  while((response = getchar()) != 'y'){
    if(response != 'n')
        printf("Ладно тогда это %d?\n", ++number);
    else
        printf("Ответу подлежат только y или x\n");
    while(getchar() != '\n')
        continue;
  }
  printf("Я так и знал\n");

  return 0;
}
