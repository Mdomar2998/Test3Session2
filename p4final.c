/*

Write a program to find nth number in fibonacci sequence.
Fibonacci sequence consists of 0,1,1,2,3,5,8,13,21........
int input();
int find_fibo(int n);
void output(int n, int fibo);

*/
/*
#include <stdio.h>

int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int fibo=0;
  int a=0;
  int b=1;
  for(int i=0;i<n;i++) {
    fibo = a;
    a = b;
    b = fibo + b;
  }
  return fibo;
}


void output(int n, int fibo)
{
  printf("the %dth fibonacci number is %d\n", n, fibo);
}

int main()
{
  int n = input();
  int fibo = find_fibo(n);
  output(n, fibo);
  return 0;
}*/
#include<stdio.h>
int inputn()
{
    int n;
    printf("Enter the degree of the polynomial:");
    scanf("%d",&n);
    return n;
}
float inputx()
{
    float x;
    printf("\nEnter the value of x:");
    scanf("%f",&x);
    return x;
}
void inputco(int n,float a[])
{
    for(int i=0;i<=n;i++)
    {
        printf("\nEnter the coefficients of the polynomial:");
        scanf("%f",&a[i]);
    }
}
float evaluate(int n,float x,float a[])
{
    float result=0;int l=n;
    for(int i=0;i<=n;i++)
    {
        float m=1;
      if(i==0)
      {
        m=a[i];
      }
      else{
        for(int j=1;j<=i;j++)
        {
            m=m*x;
        }
        }
      if(i==0)
      {
      result=result+m;
        }
      else
      {
        result=result+(a[i]*m);
      }
      l--;
    }
    return result;
}
void output(int n,float x,float a[],float result)
{
    for(int i=0;i<n;i++)
    {
      printf("%fx^%d+",a[i],i); 
    }
    printf("%fx^%d at %f is",a[n],n,x);
    printf("%f\n",result);
}
int main()
{
    int n;
    float x,a[100],result;
    n=inputn();
    x=inputx();
    inputco(n,a);
    result=evaluate(n,x,a);
    output(n,x,a,result);
    return 0;
}