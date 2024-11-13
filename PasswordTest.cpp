/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};



class PasswordTest2 : public ::testing::Test
{

	protected:
		PasswordTest2(){}
		virtual ~PasswordTest2(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};



TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

//return true if string has at least one upper and one lower case letter
TEST(PasswordTest2, pass)
{
	Password my_password2;
	//check each cha
	//char ch = 'A';
	//ASSERT_TRUE(isupper(ch));
//	int str =  my_password2.has_mixed_case("zA");
//	ASSERT_EQ(1, str);

}




