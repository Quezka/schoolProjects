#include <iostream>
#include <time.h>
using namespace std;

#define rows 6
#define cols 6

int func(int mat[rows][cols])
{
    int min = mat[0][0], count = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] < min)
            {
                min = mat[i][j];
            }
        }
    }

    cout << "La matrice modificata e':\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == min)
            {
                mat[i][j] = 0;
                count++;
            }
            cout << mat[i][j] << "\t";
        }

        cout << "\n\n";
    }

    return count;
}

int main()
{
    srand(time(NULL));

    system("cls");

    int mat[rows][cols], res;

    cout << "Inserimento matrice..\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mat[i][j] = rand() % 26;
            cout << mat[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "Elaborazione...\n";
    res = func(mat);
    cout << "Il risultato e': " << res << ".\n";
    system("pause");
    system("cls");

    return 0;
}