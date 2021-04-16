#include <iostream>
using namespace std;

/*
 * 使用类型推导的好处 
 */

class Foo {
public:
    static int get(void)
    {
        return 1;
    }
};

class Bar {
public:
    static string get(void)
    {
        return "str";
    }
};

template <class T>
void func(void)
{
    auto val = T::get();
    cout << val << endl;
}

int main() {
    func<Foo>();
    func<Bar>();
    return 0;
}