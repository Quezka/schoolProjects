/*
Data una matrice MxM riempita dall'utente, creare una funzione che riceva un vettore contenente
i numeri della matrice presenti nella diagonale principale e restituisca la somma.
*/

#include <iostream>
#include <vector>

#define rows 4
#define cols 4

using namespace std;

int sum(vector<int> vect)
{
    int summ = 0;
    for (int num : vect)
    {
        summ += num;
    }

    return summ;
}

int main()
{
    int mat[rows][cols];
    vector<int> nums;

    system("cls");
    cout << "Inserisci una matrice:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Inserisci un numero: ";
            cin >> mat[i][j];
        }
    }

    cout << "Matrice inserita:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n\n";
    }

    cout << "Elaborazione...\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                nums.push_back(mat[i][j]);
            }
        }
    }

    cout << "Il vettore della diagonale principale e':\n";
    for (int num : nums)
    {
        cout << num << "\t";
    }

    cout << "\nLa somma dei numeri nel vettore e': " << sum(nums) << "\n";
    system("pause");
    system("cls");
    return 0;
}