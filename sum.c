#include <stdio.h>

void sumTwo() {
    int x, y;

    printf("Enter your first integer\n");
    scanf("%i", &x);

    printf("Enter your second integer\n");
    scanf("%i", &y);

    int result = x + y;
    printf("The result is: %i\n", result);
}

int main() {

  int isRunning = 1;
  int ans;

  while (isRunning != 0) {
    printf("What would you like to do today?\n1: Sum two integers.\n2. Exit.");

    scanf("%i", &ans);
    
    switch(ans)
    {
      case 1:
        sumTwo();
        break;
      case 2:
        isRunning = 0;
        break;
    }
  
  }
  return 0;
}
