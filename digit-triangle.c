//    1 
//   1 2 
//  1 2 3 
// 1 2 3 4 


#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int space = n - 1;
    for (int i = 1; i <= n; i++) //lines
    {
        for (int k =0; k <space; k++) //space
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)//digit
        {
            printf("%d ", j);
        }

        printf("\n");
        space--;
    }
    return 0;
}