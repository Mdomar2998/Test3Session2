/*
Write a program find whether a given number is a prime number.
int input_number();
int is_prime(int n);
void output(int n, int is_prime);
*/
/*
#include <stdio.h>
#include <math.h>
int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}

int isprime(int n)
{
  if (n==0 || n==1) {
    return 0
  }
  if (n==2) {
    return 1;
  }
  for(int i= 2; i<= sqrt(n);i++)
  {
    if(n%i==0)
      return 0;
  }
  return 1;
}
void output(int n, int isp)
{
  if(isp == 0)
    printf("%d is not a prime number\n",n);
  else
    printf("%d is a prime number\n",n)
}

int main()
{
  int n = input();
  int isp = isprime(n);
  output(n,isp);
  return 0;
  }
}*/


#include<stdio.h>

int input_n_and_r(int *n,int *r)
{
 printf("Enter the value of n:");
 scanf("%d",n);
 printf("Enter the values of r:");
 scanf("%d",r);
}

int ncr(int n,int r)
{
  int nfact=1,rfact=1,nrfact=1,ncr;
  for(int i=1;i<=n;i++)
    {
      nfact*=i;
    }
  for(int j=1;j<=r;j++)
    {
      rfact*=j;
    }
  for(int k=1;k<=(n-r);k++)
    {
      nrfact*=k;
    }
  ncr=nfact/(rfact*nrfact);
  return ncr;
}

void output(int n,int r,int result)
{
  printf("The nCr value of %dC%d is: %d",n,r,result);
}

int main()
{
  int n,r,result;
  input_n_and_r(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
}