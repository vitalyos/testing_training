#include <glog/logging.h>
#include <gflags/gflags.h>

int main(int argc, char ** argv)
{
    google::InitGoogleLogging(argv[0]);
    google::ParseCommandLineFlags(&argc, &argv, true);
    LOG(INFO) << "SUCCESS";
}