#include "time.hpp"
#include <gtest/gtest.h>

// Test the constructor with no arguments
TEST(TimeTest, DefaultConstructor) {
    Time t;
    EXPECT_EQ(t.getHours(), 0);
    EXPECT_EQ(t.getMinutes(), 0);
    EXPECT_EQ(t.getSeconds(), 0);
}

// Test the constructor with arguments
TEST(TimeTest, ConstructorWithArguments) {
    Time t(12, 30, 45);
    EXPECT_EQ(t.getHours(), 12);
    EXPECT_EQ(t.getMinutes(), 30);
    EXPECT_EQ(t.getSeconds(), 45);
}

// Test the setter and getter methods
TEST(TimeTest, SetterGetter) {
    Time t;
    t.setHours(10);
    t.setMinutes(20);
    t.setSeconds(30);
    EXPECT_EQ(t.getHours(), 10);
    EXPECT_EQ(t.getMinutes(), 20);
    EXPECT_EQ(t.getSeconds(), 30);
}

// Test the addHours() method
TEST(TimeTest, AddHours) {
    Time t(12, 0, 0);
    t.addHours(2);
    EXPECT_EQ(t.getHours(), 14);
}

// Test the addMinutes() method
TEST(TimeTest, AddMinutes) {
    Time t(12, 0, 0);
    t.addMinutes(30);
    EXPECT_EQ(t.getMinutes(), 30);
}

// Test the addSeconds() method
TEST(TimeTest, AddSeconds) {
    Time t(12, 0, 0);
    t.addSeconds(45);
    EXPECT_EQ(t.getSeconds(), 45);
}

// Test the toSeconds() method
TEST(TimeTest, ToSeconds) {
    Time t(1, 30, 45);
    EXPECT_EQ(t.toSeconds(), 5445);
}

// Test the toHours() method
TEST(TimeTest, ToHours) {
    Time t(1, 30, 45);
    EXPECT_EQ(t.toHours(), 1);
}

// Test the toMinutes() method
TEST(TimeTest, ToMinutes) {
    Time t(1, 30, 45);
    EXPECT_EQ(t.toMinutes(), 90);
}

// Test the toString() method
TEST(TimeTest, ToString) {
    Time t(1, 30, 45);
    EXPECT_EQ(t.toString(), "1:30:45");
}

// Test the isEqual() method
TEST(TimeTest, IsEqual) {
    Time t1(12, 30, 45);
    Time t2(12, 30, 45);
    Time t3(10, 20, 30);
    EXPECT_TRUE(t1.isEqual(t2));
    EXPECT_FALSE(t1.isEqual(t3));
}

// Run all the tests
int testMain(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
