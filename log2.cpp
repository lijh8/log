// LDFLAGS += -lglog
#include <glog/logging.h>

auto main() -> int {

  FLAGS_alsologtostderr = true; // all to stderr, default: ERROR
  FLAGS_colorlogtostderr = true;
  FLAGS_log_dir = "./logs";     // default: /tmp
  FLAGS_max_log_size = 5;       // in MB
  FLAGS_stop_logging_if_full_disk = true;
  google::InitGoogleLogging("hello");

  for(;;){
    LOG(INFO) << "INFO!";
    LOG(WARNING) << "WARNING!";
    LOG(ERROR) << "ERROR!";
    // LOG(FATAL) << "FATAL!";
  }

  return 0;

}

// $ g++ main.cpp -o test -lglog

// $ GLOG_log_dir=/foo/log  ./test

// $ ./test

// I0327 11:17:12.963464  4355 main.cpp:9] INFO!
// W0327 11:17:12.963878  4355 main.cpp:10] WARNING!
// E0327 11:17:12.964049  4355 main.cpp:11] ERROR!
// F0327 11:17:12.964191  4355 main.cpp:12] FATAL!
