#ifdef WIN32
#ifdef _MSC_VER
#pragma warning(disable: 4251)
#endif
#ifdef CppDll_EXPORTS
#define  CPPDLL_API __declspec(dllexport)
#else
#define  CPPDLL_API __declspec(dllimport)
#endif
#else
#define CPPDLL_API
#endif

namespace CppDll
{
	class CPPDLL_API TestClass
	{
	public:
		TestClass(int n);
		int getNum() const { return num; };
		void setNum(const int n) { num = n; }
	private:
		int num;
	};
	
	extern "C"
	{
		CPPDLL_API TestClass * TestClass_Create(int n);
		CPPDLL_API int TestClass_getNum(TestClass * t);
		CPPDLL_API void TestClass_setNum(TestClass * t, int n);
		CPPDLL_API void holaMundo();
	}
}
