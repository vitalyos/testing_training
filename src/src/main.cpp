#include <glog/logging.h>
#include <gflags/gflags.h>
#include <gtest/gtest.h>

// #include "common.h"

class Evaluate : public testing::Test
{
    public:
};

TEST_F(Evaluate, SimpleTsest)
{
    ASSERT_EQ(2, 1 + 1);
}

int main(int argc, char ** argv)
{
    google::InitGoogleLogging(argv[0]);
    google::ParseCommandLineFlags(&argc, &argv, true);
    testing::InitGoogleTest(&argc, argv);

    LOG(INFO) << "SUCCESS";
    
    return RUN_ALL_TESTS();

}