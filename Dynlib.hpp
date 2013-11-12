#ifndef DYNLIB_HPP_
# define DYNLIB_HPP_

class Dynlib
{
public:
  static void *open(const char *);
  static void *load(void *, const char *);
  static bool close(void *);
};

#endif /* DYNLIB_HPP_ */
