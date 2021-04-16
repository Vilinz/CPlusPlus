#include <iostream>
#include <vector>
using namespace std;

template <class ContainerT>
class Foo {
    decltype(ContainerT().begin()) it;
public:
    void func(ContainerT& container)
    {
        it = container.begin();
    }
};

// 返回类型后置
template< typename T, typename U>
auto add(T t, U u) -> decltype(t + u)
{
    return t + u;
}

int main()
{
    // 提取变量类型
    vector<int> v;
    decltype(vector<int>())::value_type i = 0;
    return 0;
}