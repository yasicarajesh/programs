#include <stdio.h>

int main()
{
    int arr[100], mat[100][100], m, n, i, j, curr, pos[2000];
    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int k = 0; k < m; k++)
    {    
        int check1=0;
        curr = arr[k];
        int posser = 0, count = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {   
                if (mat[i][j] == curr && check1!=1)
                {
                    pos[posser++] = i;
                    pos[posser++] = j;
                    count++; 
                    check1=1;
                }
                else if(mat[i][j]==curr && check1==1){
                    count++;
                }
              
            }
        }
        printf("count:%d",count);
        if (count == 0)
        {
            printf("No\n");
        }
        else
        {
            int check = 1;
            for (int g = 0; g < posser; g = g + 2)
            {
                int row = pos[g];//0
                int col = pos[g + 1];//3
                int count1 = 1;
                for (int h = 0; h < n; h++)
                {
                    if (mat[row][h] == curr && h != col)
                    {
                        count1++;//
                    }
                }
                for (int h = 0; h < n; h++)
                {
                    if (mat[h][col] == curr && h != row)
                    {
                        count1++;//3
                    }
                }
                for (int h = row, y = col; h < n && y < n; h++, y++)
                {
                    if (mat[h][y] == curr && (h != row && y != col))
                    {
                        count1++;
                    }
                }
                for (int h = row, y = col; h < n && y >= 0; h++, y--)
                {
                    if (mat[h][y] == curr && (h != row && y != col))
                    {
                        count1++;//4
                    }
                }
                // for (int h = row, y = col; h >= 0 && y >= 0; h--, y--)
                // {
                //     if (mat[h][y] == curr && (h != row && y != col))
                //     {
                //         count1++;
                //     }
                // }
                // for (int h = row, y = col; h >= 0 && y < n; h--, y++)
                // {
                //     if (mat[h][y] == curr && (h != row && y != col))
                //     {
                //         count1++;
                //     }
                // }
                printf("count1 %d"  ,count1);
                if (count == count1)//3//4
                {
                    printf("YES\n");
                    check = 0;
                    break;
                }
                else{
                    printf("no\n");
                    check=0;
                    break;
                }
            }
            // if (check == 1)
            // {
            //     printf("Yes\n");
            // }
        }
    }
}