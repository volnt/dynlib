#include "Dynlib.hpp"

int main(void)
{
  Dynlib::open;
  Dynlib::load;
  Dynlib::close;
  return (0);
}
