#include <iostream>

int height = 0;

void drawDiamond(int n, int space) {
    if (n <= 0) return;

    if(2 * n - 1 > height)
    {
        drawDiamond(n - 1, space);
        return;
    }
    
    for (int i = 0; i < space; i++)
        std::cout << " ";

    for (int i = 0; i < 2 * n - 1; i++)
        std::cout << "*";

    std::cout << std::endl;

    drawDiamond(n - 1, space + 1);

    for (int i = 0; i < space; i++)
        std::cout << " ";

    for (int i = 0; i < 2 * n - 1; i++)
        std::cout << "*";

    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    std::cout << "Enter the height of the diamond: ";
    std::cin >> height;

    drawDiamond(height, 0);
    
    return 0;
}
