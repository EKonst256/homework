#include <iostream>

const size_t n = 5, m = 3;
int main()
{
    int matrix[n][m] = {
        {1, 78, 3934},
        {57, 0, 334},
        {4683, 2385, 124},
        {29130, 1244, 1488},
        {52, 90, 666}
    };
    for (size_t i = 0ull; i < n; i++)
    {
        for(size_t j = 0ull; j < m; j++)
        {
            std::cout << matrix[i][j];
            if (j != m - 1) std::cout << "_";
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
    for (size_t j = 0ull; j < m; j++)
    {
        for (size_t i = 0ull; i < n; i++)
        {
            std::cout << matrix[i][j];
            if (i != n - 1) std::cout << "_";
        }
        std::cout << "\n";
    }
    return 0;
}

