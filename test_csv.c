#include "unity.h"
#include "header_csv.h"
#include<stdio.h>
/* Required by the unity test framework */
void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}

/**
 * @brief Test function to test read_csv.c
 * 
 */
void test_read_csv(void)
{
    TEST_ASSERT_EQUAL(SUCCESS,readcsvfile("Book.csv"));
    TEST_ASSERT_EQUAL(ERROR_NULL_PTR,readcsvfile("abc.csv"));
}

/**
 * @brief Test function to test store_csv.c
 * 
 */
void test_store_csv(void)
{
    TEST_ASSERT_EQUAL(SUCCESS,storecsvinstruct("Book.csv"));
    TEST_ASSERT_EQUAL(ERROR_NULL_PTR,storecsvinstruct("abc.csv"));
}

/**
 * @brief Test function to test sort_csv.c
 * 
 */
void test_sort_csv(void)
{
    TEST_ASSERT_EQUAL(SUCCESS,sortcsvfile(arr));
    TEST_ASSERT_EQUAL(ERROR_NULL_PTR,sortcsvfile(NULL));
}
int main(void)
{
    UNITY_BEGIN();
    /**
     * @brief Running test cases.
     * 
     */
    RUN_TEST(test_read_csv);
    RUN_TEST(test_store_csv);
    RUN_TEST(test_sort_csv);
    free(arr);
    return UNITY_END();
}