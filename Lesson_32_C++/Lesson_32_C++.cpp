#include <iostream>
using std::cout;
using std::endl;

namespace Olhovskyi{
	class MyClass {
	public:
		static void  showInfo() {
			cout << "Namespace Olhovskyi: MyClass" << endl;
		}
	};
}

namespace Lukashov {
	class MyClass {
	public:
		static void  printInfo() {
			cout << "Namespace Lukashov: MyClass" << endl;
		}
	};
}

int main()
{
	/*MyClass a; - Error*/ 
	Olhovskyi::MyClass a;
	a.showInfo();
	Lukashov::MyClass b;
	b.printInfo();
	using namespace Olhovskyi;
	MyClass c;
	c.showInfo();
	using namespace Lukashov;
	Lukashov::MyClass d;
}