#include <iostream>
using namespace std;

// template <typename T1, typename T2> class Add { };

template <typename T1, typename T2, bool enabled = std::is_base_of<T1, T2>::value> class Add;
template <typename T1, typename T2> class Add<T1, T2, true> {
public:
    Add(T1 t1, T2 t2)
    {
        std::cout << "type T1 is: " << t1 << std::endl;
        std::cout << "type T2 is: " << t2 << std::endl;
        std::cout << "True" << std::endl;
    }
};
template <typename T1, typename T2> class Add<T1, T2, false> {
public:
    Add(T1 t1, T2 t2)
    {
        std::cout << "type T1 is: " << t1 << std::endl;
        std::cout << "type T2 is: " << t2 << std::endl;
        std::cout << "False" << std::endl;
    }
};

Add<int, float> add(10, 10.0);
int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
