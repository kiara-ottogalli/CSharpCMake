using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace CSharpCppApp
{
    class Program
    {
        [DllImport("CppDll")]
        static extern void holaMundo();
        [DllImport("CppDll")]
        static extern IntPtr TestClass_Create(int n);
        [DllImport("CppDll")]
        static extern int TestClass_getNum(IntPtr t);
        [DllImport("CppDll")]
        static extern void TestClass_setNum(IntPtr t, int n);
        static void Main(string[] args)
        {
            Console.WriteLine("Hello world!");
            holaMundo();

            IntPtr t = TestClass_Create(22);
            Console.WriteLine(TestClass_getNum(t));
            TestClass_setNum(t, 31);
            Console.WriteLine(TestClass_getNum(t));

            Console.ReadKey();
        }
    }
}
