/**
 * @file Test_project.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "project.h"
#include "unity.h"

void setUp(){}
void tearDown(){}


void test_reg_status(void)
{
TEST_ASSERT_EQUAL_INT(-1,reg_status(123412341234));
TEST_ASSERT_EQUAL_INT(-1,reg_status(97654321023));
TEST_ASSERT_EQUAL_INT(-1,reg_status(756812452325));
TEST_ASSERT_EQUAL_INT(-1,reg_status(524358252357));
TEST_ASSERT_EQUAL_INT(0,reg_status(000000000000));
TEST_ASSERT_EQUAL_INT(-1,reg_status(000000000001));
}
void test_vacc_status(void)
{

TEST_ASSERT_EQUAL_INT(1,vacc_status(0));
TEST_ASSERT_EQUAL_INT(1,vacc_status(2));
TEST_ASSERT_EQUAL_INT(1,vacc_status(3));
TEST_ASSERT_EQUAL_INT(1,vacc_status(4));
TEST_ASSERT_EQUAL_INT(1,vacc_status(5));

}

void test_covaxin_vacc_viles(void)
{
TEST_ASSERT_EQUAL_INT(3,covaxin_vacc_viles(1,1));
TEST_ASSERT_EQUAL_INT(3,covaxin_vacc_viles(1,2));
TEST_ASSERT_EQUAL_INT(2,covaxin_vacc_viles(2,2));
TEST_ASSERT_EQUAL_INT(2,covaxin_vacc_viles(1,3));
}

void test_covishield_vacc_viles(void)
{
TEST_ASSERT_EQUAL_INT(1,covishield_vacc_viles(1,1));
TEST_ASSERT_EQUAL_INT(1,covishield_vacc_viles(1,2));
TEST_ASSERT_EQUAL_INT(3,covishield_vacc_viles(2,2));
TEST_ASSERT_EQUAL_INT(3,covishield_vacc_viles(1,3));
}

void test_sputnik_vacc_viles(void)
{
TEST_ASSERT_EQUAL_INT(2,sputnik_vacc_viles(1,1));
TEST_ASSERT_EQUAL_INT(2,sputnik_vacc_viles(1,2));
TEST_ASSERT_EQUAL_INT(4,sputnik_vacc_viles(2,2));
TEST_ASSERT_EQUAL_INT(4,sputnik_vacc_viles(1,3));
}
int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_reg_status);
  RUN_TEST(test_vacc_status);
  RUN_TEST(test_covaxin_vacc_viles);
  RUN_TEST(test_covishield_vacc_viles);
  RUN_TEST(test_sputnik_vacc_viles);

  return UNITY_END();
}