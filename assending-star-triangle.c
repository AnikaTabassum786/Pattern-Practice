//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 


#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int space = n - 1;

    for (int i = 1; i <= n; i++)// line
    { 

        for (int k = 0; k < space; k++)//space
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)// stars
        { 
            printf("* ");
        }
        printf("\n");
        space--;
    }

    return 0;
}

