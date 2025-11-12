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

TEST(PasswordTest, std::string pass)
{
	Password my_password;
	int actual = my_password.count_leading_characters(pass);
	ASSERT_EQ(1, actual);
}

int main()
{
	PasswordTest pass;
	TEST(pass, "a");
	TEST(pass, "aab");
	TEST(pass, "AAAABBBBB");
	TEST(pass, "bababab");
	TEST(pass, "");
	TEST(pass, " ");
	TEST(pass, "\n");
	TEST(pass, "oOo");
	TEST(pass, "OoO");
	TEST(pass, "000001");
	TEST(pass, "iiiiiiiiiiiii");

	std::cout << unique_characters("aaaAAA");
}