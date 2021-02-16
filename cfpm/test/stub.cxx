#include <gtest/gtest.h>
#include <cfpm-main.hxx>

TEST(stubTest, stub) {
    const char* argv[] = {"cfpm", "version"};
    int result = cfpmMain(2, argv);
    EXPECT_EQ(result, 0);
}
