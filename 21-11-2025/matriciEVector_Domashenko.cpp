#include <iostream>
#include <vector>
#define rows 3
#define cols 3
using namespace std;

vector<int> func(vector<int> vect, int mat[rows][cols])
{
    int k;
    int elem = 0;
    vector<int> res;
    for (int j = 0; j < cols; j++)
    {
        k = 0;
        elem = 0;
        for (int i = 0; i < rows; i++)
        {
            cout << "Elem:" << elem << "; vect.at(k): " << vect.at(k) << "; mat[i][j]: " << mat[i][j] << "\n";

            elem += vect.at(k) * mat[i][j];
            k++;
        }
        res.push_back(elem);
    }

    return res;
}

int main()
{
    system("cls");

    vector<int> vect, res;
    int mat[rows][cols], num;

    cout << "Inserisci un vettore:\n";
    for (int i = 0; i < rows; i++)
    {
        cout << "Inserisci un numero: ";
        cin >> num;
        vect.push_back(num);
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

    res = func(vect, mat);

    cout << "Il vettore risultato e':\n";
    for (int num : res)
    {
        cout << num << "\t";
    }
    cout << "\n";

    system("pause");
    system("cls");
    return 0;
}