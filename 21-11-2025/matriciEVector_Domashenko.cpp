#include <iostream>
#include <vector>
#define rows 3
#define cols 3
using namespace std;

int func(int arr[rows], int mat[rows][cols])
{
    int k;
    int elem = 0, ret = 0;
    vector<int> res;
    for (int j = 0; j < cols; j++)
    {
        k = 0;
        elem = 0;
        for (int i = 0; i < rows; i++)
        {
            elem += arr[k] * mat[i][j];
            k++;
        }
        res.push_back(elem);
    }

    for (int num : res)
    {
        ret += num;
    }

    return ret;
}

int main()
{
    system("cls");

    int res;
    int mat[rows][cols], arr[rows];

    cout << "Inserisci un vettore:\n";
    for (int i = 0; i < rows; i++)
    {
        cout << "Inserisci un numero: ";
        cin >> arr[i];
    }

    cout << "Inserisci una matrice:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Inserisci un numero: ";
            cin >> mat[i][j];
        }
    }

    cout << "Elaborazione...\n";

    res = func(arr, mat);

    cout << "Il risultato e': " << res << ".\n";

    system("pause");
    system("cls");
    return 0;
}