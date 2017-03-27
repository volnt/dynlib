#if defined(_WIN32) || defined(__WIN32__)

#include <windows.h>
#include "Dynlib.hpp"

void	*Dynlib::open(const char *filename)
{
  void	*handle = NULL;

  handle = (void *)LoadLibrary(filename);
  return (handle);
}

void	*Dynlib::load(void *handle, const char *sym)
{
  void	*func = NULL;

  func = (void *) GetProcAddress((HMODULE) handle, sym);
  return (func);
}

bool	Dynlib::close(void *handle)
{
  bool	closed = false;

  closed = (FreeLibrary((HMODULE) handle) != 0);
  return (closed);
}

#endif
