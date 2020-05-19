#include<stdio.h>
#include<math.h>
#define SIZE 18
int primes[SIZE];
// 5.755
// OMIT VALUES
int main()
{
int num, checkFactor, until, primeCtr=1, pInd;

primes[0]=2;
for(num = 3 ; num <= SIZE; num=num+2)
{
until = sqrt(num);
// for(checkFactor = 3; checkFactor<=until; checkFactor+=2)
for(pInd = 0; primes[pInd] <= until; pInd++)
{
// if(num % checkFactor == 0)
if(num % primes[pInd] == 0)
break;
}
// if(checkFactor > until)
if( primes[pInd] > until)
{
primes[primeCtr]=num;
primeCtr++;
}
}
printf("%d", primeCtr);
return 0;
}