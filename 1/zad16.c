#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

float max_array(float a[], float num_elements);

int main(int argc, char const *argv[]) {
  float iterations, max_value, result[11] = {0};
  int dice1, dice2, liczba_rzutow = 10000;
  srand(time(NULL));
  for (int i=0; i<liczba_rzutow; i++){
    dice1=rand()%6;
    dice2=rand()%6;
    result[dice1+dice2]++;
    // result[rand()%6+rand()%6]++;
  }
  max_value = max_array(result, 11);
  float heigth[11];
  for (int i=0; i<11; i++){
    printf("Prawdopodobieństwo dla sumy=%2d wynosi %5.2f %%\n", i+2, result[i]/liczba_rzutow*100);
    printf("%2d, %5.2f ",  i+2, result[i]/liczba_rzutow*100);
    iterations = (result[i]/max_value)*20;
    heigth[i] = iterations;
    for (int j=1; j<iterations; j++)
      printf("#");
    printf("\n");
  }
  printf("          --------------------\n");
  for (int i=20; i>=0; i--){
    for (int j=0; j<11; j++){
      if (heigth[j]>=i)
        printf(" ## ");
      else
        printf("    ");
    }
    printf("\n");
  }
  for (int j=0; j<11; j++){
    printf("%2.0f%% ", result[j]/liczba_rzutow*100);
  }
    printf("\n");
  for (int j=2; j<13; j++){
    printf(" %2d ", j);
  }
  printf("\n");
return 0;
}

float max_array(float a[], float num_elements)
{
   int i, max=-32000;
   for (i=0; i<num_elements; i++){
	    if (a[i]>max)
	       max=a[i];
   }
   return(max);
}
