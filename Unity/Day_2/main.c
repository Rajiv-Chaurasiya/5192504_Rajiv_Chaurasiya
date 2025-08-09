#include<stdio.h>

#include "unity.h"
#include "math.h"

void setUp(void) {}
void tearDown(void) {}

void test_sum(void) {
    TEST_ASSERT_EQUAL_INT(5, sum(2, 3));
    TEST_ASSERT_EQUAL_INT(0, sum(-2, 2));
}

void test_divide(void) {
    TEST_ASSERT_EQUAL_INT(1, divide(3, 3));
    TEST_ASSERT_EQUAL_INT(3, divide(6, 2));
}

void test_prod(void) {
    TEST_ASSERT_EQUAL_INT(4, square(2));
    TEST_ASSERT_EQUAL_INT(9, square(3));
}



int main(){
	int a = 10;
	int b = 20;
	int c = sum(10, 20);
	int d = divide(20, 2);
	int e = square(2);
	printf("sum %d :: \n",sum(a, b));
	printf("division %d :: \n", divide(a, b));
	printf("square %d :: \n", square(a));


	UNITY_BEGIN();
    	RUN_TEST(test_sum);
    	RUN_TEST(test_divide);
    	RUN_TEST(test_prod);
    	return UNITY_END();

}
