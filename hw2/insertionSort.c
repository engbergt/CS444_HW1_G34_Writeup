#include <stdio.h>

int i = 1;
int first;
int second;
int commands[7] = {1,4,3,7,9,12,4};
int arrayLength = sizeof(commands) / sizeof(commands[0]);

int main(int argc, char **argv){

  for(int n = 0; n<arrayLength; n++){
    printf("%d\n", commands[n]);
  }

  while(i < arrayLength){
    int j = i;
    while(j > 0 && commands[j-1] > commands[j]){
      second = commands[j];
      first = commands[j-1];
      commands[j] = first;
      commands[j-1] = second;
      j--;
    }
    i++;
  }

  for(int n = 0; n<arrayLength; n++){
    printf("%d\n", commands[n]);
  }

  return 0;
}
