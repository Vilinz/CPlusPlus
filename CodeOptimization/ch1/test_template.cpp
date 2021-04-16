#include <iostream>
#include <map>

// 重定义模板
template <typename Val>
using str_map_t = std::map<std::string, Val>;

// 模板别名
template <typename T>
using func_t = void (*)(T, T);
func_t<int> xx_2;


// 默认模板参数
// 类模板
template <typename T = int, typename U = int, U n = 0>
class Foo {

};

// 函数模板
template <typename T = int>
void func(void)
{

}


int main()
{
    str_map_t<int> map;

    // test 类模板
    func();
    Foo<> foo;
    return 0;
}