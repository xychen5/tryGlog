#include <iostream>

#include <glog/logging.h>

int main(int argc, char **argv) {
    google::InitGoogleLogging(argv[0]);
    // google::SetLogDestination(google::GLOG_FATAL, "./log/log_fatal_");
    // google::SetLogDestination(google::GLOG_ERROR, "./log/log_error_");
    // google::SetLogDestination(google::GLOG_WARNING, "./log/log_warning_");
    // google::SetLogDestination(google::GLOG_INFO, "./log/log_info_");
    google::SetStderrLogging(google::INFO); // print the logs whose severity > [info]
    
    LOG(INFO) << "glog used in cmd!!\n\n";
    return 0;
}
