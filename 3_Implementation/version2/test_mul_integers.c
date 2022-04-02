#include"unity.h"
extern void test_mul_integers();

void setUp(void)
{

}
void tearDown(void)
{

}

int main(void)
{
    UnityBegin(NULL)
    RUN_TEST(test_mul_integers);
    return(UnityEnd());
}