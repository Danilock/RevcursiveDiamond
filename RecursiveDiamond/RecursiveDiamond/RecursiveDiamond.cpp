#include <iostream>

int height = 0;

void drawDiamond(int n, int space, int index = 1) {
    if (n <= 0) return;

    int indexFormula = 2 * index - 1;
    
    for(int i = 0; i < space; i++)
        std::cout << " ";

    for(int i = 0; i < indexFormula; i++)
        std::cout << "*";

    std::cout << std::endl;

    index++;
    
    drawDiamond(n - 1, space - 1, index);

    for(int i = 0; i < space; i++)
        std::cout << " ";

    for(int i = 0; i < indexFormula; i++)
        std::cout << "*";

    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    std::cout << "Enter the height of the diamond: ";
    std::cin >> height;

    drawDiamond(height, height);
    
    return 0;
}
