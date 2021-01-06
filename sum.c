#include <stdio.h>

int main() {

  int isRunning = 1;
  int ans;

  while (isRunning != 0) {
    printf("What would you like to do today?\n1: Sum two integers.\n2. Exit.");

    scanf("%i", &ans);
    
    switch(ans)
    {
      case 2:
        isRunning = 0;
        break;
    }
    
  }

  return 0;
}
