#include "stdio.h"
#include "header.h"
#include<math.h>

int main()
{   printf("\t\t*********Welcome to the scientific calculator!!************\n\n");
    int A = 0, B = 0;
    
    printf("Enter two numbers to be added\n");
    scanf("%d%d", &A ,&B);
    int sum = A + B;
    printf("sum = %d\n", sum);

    printf("Enter two numbers to be substraction\n");
    scanf("%d%d", &A ,&B);
    int sub = A - B;
    printf("sub = %d\n", sub);


    printf("Enter two numbers to be multiplication\n");
    scanf("%d%d", &A ,&B);
    int mul = A * B;
    printf("mul = %d\n", mul);

    printf("Enter two numbers to be division\n");
    scanf("%d%d", &A ,&B);
    int div = (float)A /(float)B;
    printf("div = %d\n", div);

    printf("Enter two numbers to be modulus\n");
    scanf("%d%d", &A ,&B);
    int mod = A % B;
    printf("sub = %d\n", mod);
    
    printf("Enter two numbers to be factorial\n");
     int n,factorial;
    scanf("%d", &n);
     factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i; // factorial*=i;
    }
    printf("Factorial of %d is %d\n",n,factorial);


    printf("Enter two numbers to be power\n");
    int x;
    x =pow(5,3);
    printf("%d\n",x);

    printf("Enter two numbers to be cube\n");
    int a;
    a=20;
    printf("%d\n",a*a*a);

return 0;
}
    
    
  



