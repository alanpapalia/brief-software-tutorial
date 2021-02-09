
#include <iostream>
#include <vector>

#include "utils.cpp"

void segfault_function(int i)
{
  if (i == 5)
  {
    // segfault error
    std::vector<int> new_arr;
    std::cout << new_arr[1];
  }
  else
  {
    segfault_function(i + 1);
  }
}

int main(int argc, char *argv[])
{

  function_stack_1();
  function_stack_2();

  std::cout << "Basic output to terminal. So 1980s" << std::endl;
}
