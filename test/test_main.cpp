#include <gtest/gtest.h>
#include <nlohmann/json.hpp>

TEST(JsonTest, CanSerialize) {
    nlohmann::json j = { {"key", "value"} };
    EXPECT_EQ(j["key"], "value");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
