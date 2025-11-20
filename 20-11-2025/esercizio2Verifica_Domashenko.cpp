#include <iostream>
#include <time.h>
#include <vector>
#define M 6
#define N 6
using namespace std;

float func(vector<int> vect)
{
    int count = 0;
    float avrg = 0;

    for (int i = 0; i < vect.size(); i++)
    {
        if (i % 2 == 0)
        {
            avrg += vect.at(i);
            count++;
        }
    }

    avrg /= count;

    return avrg;
}

int main()
{
    srand(time(NULL));
    system("cls");

    int mat[M][N];
    vector<int> vect;

    cout << "Inserimento matrice...\n";
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            mat[i][j] = rand() % 101 + 1;
            cout << mat[i][j] << "\t";

            if (j == N - 1)
            {
                vect.push_back(mat[i][j]);
            }
        }
        cout << "\n\n";
    }

    cout << "Il vettore calcolato e':\n";
    for (int num : vect)
    {
        cout << num << "\t";
    }

    cout << "\nElaborazione...\n";
    cout << "La media calcolata e': " << func(vect) << ".\n";
    system("pause");
    system("cls");

    return 0;
}