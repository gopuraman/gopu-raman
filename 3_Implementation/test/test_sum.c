#include "unity.h"
	

	void setUp()
	{	}
	void tearDown()
	{	}
	
	void test_sum(void)
	{
  		TEST_ASSERT_EQUAL(1, sum(2));
  		
	}
	


	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_sum);
		

  		return UNITY_END();
	}