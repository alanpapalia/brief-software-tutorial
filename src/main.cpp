
#include <iostream>
#include <vector>

#include "glog/logging.h"

#include "utils.cpp"

void segfault_function(int i)
{
  if (i == 5)
  {
    // segfault error
    std::vector<int> new_arr;
    LOG(INFO) << new_arr[1];
  }
  else
  {
    segfault_function(i + 1);
  }
}

int main(int argc, char *argv[])
{
  google::InitGoogleLogging(argv[0]);
  google::ParseCommandLineFlags(&argc, &argv, true);

  function_stack_1();
  function_stack_2();

  std::cout << "Basic output to terminal. So 1980s" << std::endl;
}
