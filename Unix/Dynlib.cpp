#if defined(linux) || defined(__linux)

#include <dlfcn.h>
#include <unistd.h>
#include "Dynlib.hpp"

void	*Dynlib::open(const char *filename)
{
  void	*handle = NULL;

  handle = (void *) dlopen(filename, RTLD_LAZY);
  return (handle);
}

void	*Dynlib::load(void *handle, const char *sym)
{
  void	*func = NULL;

  func = (void *) dlsym(handle, sym);
  return (func);
}

bool	Dynlib::close(void *handle)
{
  bool	closed = false;

  closed = (dlclose(handle) == 0);
  return (closed);
}

#endif
