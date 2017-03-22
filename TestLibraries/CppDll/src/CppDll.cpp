#include "CppDll.h"
#include <iostream>

CppDll::TestClass::TestClass(int n)
{
  num = n;
}

CPPDLL_API void CppDll::holaMundo()
{
  std::cout << "Hello world from CppDll!" << std::endl;
}

CPPDLL_API CppDll::TestClass * CppDll::TestClass_Create(int n)
{
  return new CppDll::TestClass(n);
}

CPPDLL_API int CppDll::TestClass_getNum(TestClass * t)
{
  return t->getNum();
}

CPPDLL_API void CppDll::TestClass_setNum(TestClass * t, int n)
{
  t->setNum(n);
}
