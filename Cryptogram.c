#include<stdio.h>
#include<assert.h>

void determineABC(int *a, int *b, int *c)
{
    // int i = *a;
    // int j = *b;
    // int k = *c;  
    int i=1,j,k;
    // int i = 1;
    // int j, k;
    int flag = 0;
    while ( !flag && i <= 9)
    {
        j = 1; // This is important, no solutions are found if you don't do this initialization
        while (!flag && j <= 9)
        {
            k = 1;// This is important, no solutions are found if you don't do this initialization
            while (!flag && k <= 9)
            {
              //  printf("Inside all whiles %d, %d, %d\n", i, j, k);
                if ( (10 * i + j)*k  == 111 * i )
                {
                    if ( i != j && j != k && k != i)
                    {
                //        printf("Found one solution: A = %d, B = %d, C = %d\n", i, j, k);
                        *a = i;
                        *b = j;
                        *c = k;
                        flag = 1;
                    }

                }
                k++;
            }
            j++;
        }
        i++;
    }
}

// void determineABCUsingFor()
// {
//         int flag = 0;
//         for (int i = 1; i <= 9 && !flag; i++)
//         {
//              for (int j = 1; j <= 9 && !flag; j++)
//              {
//                 for (int k = 1; k <= 9 && !flag; k++)
//                 {
//                     if ( i != j && j != k && k != i)
//                     {
//                         if ( (10 * i + j)*k  == 111 * i ) 
//                         {
//                             printf("Found one solution: A = %d, B = %d, C = %d\n", i, j, k);
//                             flag = 1;
//                         }

//                     }

//                 }

//              }

//         }

// }


int main(int argc, char const *argv[])
{
    /* code */
    int A, B, C = 1;
    determineABC(&A, &B, &C);
//    printf("A = %d, B = %d, C = %d\n", A, B, C);
    assert(A == 3);
    assert(B == 7);
    assert(C == 9);
   // testfunction();
    return 0;
    
    

}