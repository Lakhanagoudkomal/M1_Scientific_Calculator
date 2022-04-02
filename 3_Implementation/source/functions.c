#include "stdio.h"
#include "header.h"
#include "unity.h"
 
long int add_integers(int param1,int param2)
{
   
    long int sum = param1+ param2;
    
    return sum ;
}
void manual_test_add_integers()
{
    
    if( 0 == add_integers(0, 0))
          printf("Add function works\n");
    else
        printf("Add function is not working\n"); 

    if( 20 == add_integers(10, 20))
          printf("Add function works for positive number\n");
    else
        printf("Add function is not working for positive numbers\n");
    if( -30 == add_integers(-10, -20))
          printf("Add function works for negative number\n");
    else
        printf("Add function is not working for negative numbers\n");
     
    
    

}




int sub_integers(int param1,int param2)
{
    int sub = param1- param2;
    
    return sub ;
}
void test_sub_integers()
{
    if( 0 == sub_integers(0, 0))
          printf("substraction function works\n");
    else
        printf("substraction function is not working\n"); 

    if( 100 == sub_integers(100, 200))
          printf(" function works for positive number\n");
    else
        printf("substarction function is not working for positive numbers\n");
    if( -60 == add_integers(-50, -70))
          printf("substarction function works for negative number\n");
    else
        printf("substarction function is not working for negative numbers\n"); 
        
         
}

int mul_integers(int param1,int param2)
{
    int mul = param1* param2;
    
    return mul ;
}
void test_mul_integers()
{
    if( 0 == mul_integers(0, 0))
          printf("Multiplication function works\n");
    else
        printf("Multiplication function is not working\n"); 

    if( 10 == mul_integers(5, 2))
          printf("Multiplication function works for positive number\n");
    else
        printf("Multiplication function is not working for positive numbers\n");
    if( -14 == mul_integers(-7, -2))
          printf("Multiplication function works for negative number\n");
    else
        printf("Multiplication function is not working for negative numbers\n"); 
        
         
}

int div_integers(int param1,int param2)
{
    int div = param1% param2;
    
    return div ;
}
void test_div_integers()
{
    if( 0 == div_integers(0, 0))
          printf("Division function works\n");
    else
        printf("Division function is not working\n"); 

    if( 5 == mul_integers(25, 5))
          printf("Multiplication function works for positive number\n");
    else
        printf("Multiplication function is not working for positive numbers\n");
    if( -20 == mul_integers(-10, -2))
          printf("Multiplication function works for negative number\n");
    else
        printf("Multiplication function is not working for negative numbers\n"); 
        
         
}


#if 0
int main()
{
    test_add_integers();
    test_sub_integers();
    test_mul_integers();
    test_div_integers();
    return 0;
}
#endif
