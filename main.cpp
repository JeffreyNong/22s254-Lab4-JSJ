#include <iostream>
#include "function.h"

int main()
{
    std::string fileText = readme("README.md");
    display(fileText);
    return 1;
}
