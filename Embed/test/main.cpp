#include <iostream>

#include "foo.txt.hpp"

int main(int argc, char **argv)
{
    std::cout << foo_txt::get().data() << std::endl;
}