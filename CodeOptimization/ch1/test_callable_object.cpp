#include "../header/my_header.h"

// std::function
void Func(void)
{
    std::cout << __FUNCTION__ << std::endl;
}

class Foo {
public:
    static int FooFunc(int a)
    {
        std::cout << __FUNCTION__ << " (" << a << ") ->: ";
        return a;
    }
};

class Bar {
public:
    int operator()(int a)
    {
        std::cout << __FUNCTION__ << " (" << a << ") ->: ";
        return a;
    }
};

// 作为入参或者函数回调
void CallWhenEven(int x, const std::function<void(int)> &f)
{
    if (!(x & 1)) {
        f(x);
    }
}

void Output(int x)
{
    cout << x << " ";
}

int main() {
    // 普通函数
    std::function<void(void)> fr1 = Func;
    fr1();

    // 绑定类静态成员函数
    std::function<int(int)> fr2 = Foo::FooFunc;
    std::cout << fr2(123) << std::endl;

    // 绑定可调用对象
    Bar bar;
    fr2 = bar;
    std::cout << fr2(123) << std::endl;

    // 作为参数
    CallWhenEven(999, Output);

    return 0;
}