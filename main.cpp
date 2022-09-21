#include <iostream>
#inlcude "function.h"

int main()
{
    std::string fileText = readme("README.md");
    display(fileText);
    return 1;
}
