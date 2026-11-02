//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int space = 0;
    for (int i = 1; i <= n; i++)// line
    { 
        for(int k=0;k<space;k++){ //space
          printf(" ");
        }
        for(int j = n; j>=i; j--){ //star
          printf(" *");
        }
        printf("\n");
       space++;
    }
    return 0;
}

