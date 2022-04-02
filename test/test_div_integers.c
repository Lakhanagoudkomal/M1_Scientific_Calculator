#include"unity.h"
extern void test_div_integers();

void setUp(void)
{

}
void tearDown(void)
{

}

int main(void)
{
    UnityBegin(NULL)
    RUN_TEST(test_div_integers);
    return(UnityEnd());
}