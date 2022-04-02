#include"unity.h"
extern void test_sub_integers();

void setUp(void)
{

}
void tearDown(void)
{

}

int main(void)
{
    UnityBegin(NULL)
    RUN_TEST(test_sub_integers);
    return(UnityEnd());
}