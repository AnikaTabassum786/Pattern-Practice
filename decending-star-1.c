// *****
// ****
// ***
// **
// *


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)// line
    { 
       
        for(int j = n; j>=i; j--){ //star
          printf("*");
        }
        printf("\n");
      
    }
    return 0;
}
