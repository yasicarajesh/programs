#include <stdio.h>

void main()

{

char string[100];

int count, nc = 0, sum = 0;

printf("Enter the string containing both digits and alphabet \n");
fgets(string,100,stdin);

for (count = 0; string[count] !='\0'; count++)

{

if ((string[count] >= '0') && (string[count] <= '9'))

{

nc = nc+1;

sum =sum+ (string[count] - '0');

}

}

printf("NO. of Digits in the string = %d\n", nc);

printf("Sum of all digits = %d\n", sum);

}