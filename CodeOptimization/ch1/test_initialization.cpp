#include <iostream>
#include <vector>

class Test {
public:
    Test(uint32_t v, uint32_t v1) {};

private:
    uint32_t a;
};

// initializer_list
class FooVector {
public:
    FooVector(std::initializer_list<int> list)
    {
        for (auto it = list.begin(); it != list.end(); ++it) {
            content_.push_back(*it);
        }
    }
private:
    std::vector<int> content_;
};

int main()
{
    int* a = new int { 13 };

    Test test { 1, 2 };
    return 0;
}