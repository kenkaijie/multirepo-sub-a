#include "liba.h"
#include "gtest/gtest.h"

TEST(sample_test_case, sample_test)
{
    EXPECT_EQ(5, liba_return5(11));
}