#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int main(){
  int i,sum=0;
  int score[5];
  
  printf("Rolling dice...\n");
  
  for(i=0;i<2;i++){
    srand((unsigned int)time(NULL));
    score[i] = rand() % 6 + 1;
    printf("Die %d: %d\n",i,score[i]);
    if(i<1) sleep(1);
  }
  
  sum = score[0] + score[1];
  printf("Total value: %d\n",sum);
}