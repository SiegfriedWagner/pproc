/* Program przyjmuje na wejściu listę imion i nazwiska, a nastepnie sortuje listę bazujac na alfabetycznej kolejności nazwisk.
Plik zawiera rozwiązanie do zad 13 i zad 14
*/

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct person {
  char name[15];
  char surname[25];
} per;

void sort(per P[], int size){
  for (int i=0; i<size; i++){
    printf("%s %s\n", P[i].surname, P[i].name );
  }
  printf("\n");
  per temp;
  int j;
  for (int i=1; i<size; i++){
    temp=P[i];
    j=i-1;
    while (j>=0) {
      // printf("i=%d,j=%d S1=%s   S2=%s\n",i, j, temp.surname, P[j].surname);
      if (strcmp(temp.surname, P[j].surname) <= 0){
        P[j+1]=P[j];
        j--;
      }
      else break;
    }
    P[j+1]=temp;

  }
  printf("\n");
  for (int i=0; i<size; i++){
    printf("%s %s\n", P[i].surname, P[i].name );
  }
  printf("\n");
}


int search(per P[], int size, char w[]){
  int k, j, i=0;
  j=size-1;
  while (i<=j){
    k=(i+j)/2;
    // printf("%d  %s  %d\n", k, P[k].surname, strcmp(P[k].surname, w));
    if (strcmp(P[k].surname, w) < 0) {
      i=k+1;
    }
    else {
      if (strcmp(P[k].surname, w) > 0){
      j=k-1;
      }
      else {
        // printf("Returning k: %d\n",k );
        return k;
      }
    }
    // printf("i=%d  j=%d\n", i,j);
  }
  return -1;
}

int main(int argc, char const *argv[]) {
  per list[100];
  int size=100;
  FILE *read = fopen("zad13_dane.txt", "r");
  FILE *write = fopen("zad13_rezultat.txt", "w");

  for (int i=0; i<size; i++)
    fscanf(read, "%s %s", &list[i].name, &list[i].surname);

  sort(list, size);

  for (int i=0; i<size; i++){
    fprintf(write, "%s %s\n", list[i].name, list[i].surname);
  }
  fclose(read);
  fclose(write);
  char word[100];
  int index;
  do {
    printf("Podaj szukane nazwisko\n");
    scanf("%s", &word);
    index=search(list, size, word);
    if (index!=-1)
    printf("Szukany string: %s znajduje się pod indeksem: %d\n", word, index);
    else printf("Nie ma takiego nazwiska\n");
  }while (1);
  return 0;
}
