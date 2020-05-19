// Star Pattern
#include<stdio.h>
int main(){
    int i,j,n,space;
    printf("Enter the value:");
    scanf("%d",&n);
    int spacedis=n-1;
      for(i=n;i>=1;i--)
      { 
          // for(space=1;space<i;space++)
          //    {
          //         printf(" ");
          //    }
           for(j=1;j<=i;j++)
            
          {
            printf("*");
          }
         printf("\n");
         //spacedis--;
         
      }
      }

    
                                    // input:5
                                    // *
                                    // * *
                                    // * **
                                    // * ***
                                    // * ****
// #include<stdio.h>
// int main(){
//     int i,j,n,space;
//     printf("Enter the value:");
//     scanf("%d",&n);
//     int spacedis=n-1;
//       for(i=1;i<=n;i++)
//       { 
//           // for(space=1;space<i;space++)
//           //    {
//           //         printf(" ");
//           //    }
//            for(j=1;j<=i;j++)
            
//           {
//             printf("*");
//           }
//          printf("\n");
//          //spacedis--;
         
//       }
//       }