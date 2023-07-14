#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j || i == N - j - 1)
            {
                std::cout << "X ";
            }
            else if (i % 2 == 0 && j % 2 == 0)
            {
                std::cout << "/ ";
            }
            else if (i % 2 != 0 && j % 2 != 0)
            {
                std::cout << "\\ ";
            }
            else
            {
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
