#include <stdio.h>

int main(void){

  float letters = 0;
  float l = 0;
  int word = 0;
  float w = 0;
  float value = 0;
  char ch;

  printf("Введите слова\n");
  while ((ch = getchar()) != EOF){
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
        letters++;

    if (ch == ' ' || ch == '\n')
        word++;

    }
    l+=letters;
    w+=word;
    value = l / w;

    printf("Количество букв в словах %.0f Количество слов %.0f Среднее количество букв %.1f\n", l, w, value);

  return 0;
  }
