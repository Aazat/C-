#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> a {1,2,3,4,5};
    std::cout <<  &a[0] << ", " << &a << std::endl;
    
    return 0;
}
