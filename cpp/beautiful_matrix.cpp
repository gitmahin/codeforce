#include <iostream>

int main()
{

    int matrix[5][5] = {};
    // number of moves
    int m = 0;

    bool found_col = false;
    bool job_done = false;

    // std::cout<<"Before"<<std::endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {

    //         std::cout << matrix[i][j] << " ";
    //     }

    //     std::cout << std::endl;
    // }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            if (matrix[i][j] == 1)
            {
                while (true)
                {
                    // Keep found_col false until j is not in middle index.
                    if (j > 2)
                    {

                        matrix[i][j - 1] = 1;
                        matrix[i][j] = 0;
                        m++;
                        found_col = false;
                        j = j - 1;
                    }
                    else if (j < 2)
                    {

                        matrix[i][j + 1] = 1;
                        matrix[i][j] = 0;
                        m++;
                        found_col = false;
                        j = j + 1;
                    }
                    else
                    {
                        // finally j is in middle index break the while loop
                        found_col = true;
                        break;
                    }
                }
            }

            // if found_col true break the column finding loop
            if (found_col)
            {
                break;
            }
        }

        // if found_col true start row swaping
        if (found_col)
        {
            while (true)
            {
                if (i < 2)
                {
                    matrix[i][2] = 0;
                    matrix[i + 1][2] = 1;
                    m++;
                    i = i + 1;
                }
                else if (i > 2)
                {
                    matrix[i][2] = 0;
                    matrix[i - 1][2] = 1;
                    m++;
                    i = i - 1;
                }
                else
                {
                    // job_done true if column is in center and finally row is in center
                    job_done = true;
                    break;
                }
            }
        }

        // break further checking if job_done is true
        if (job_done)
        {
            break;
        }
    }

    // std::cout<<"After"<<std::endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {

    //         std::cout << matrix[i][j] << " ";
    //     }

    //     std::cout << std::endl;
    // }

    std::cout << m << std::endl;

    return 0;
}