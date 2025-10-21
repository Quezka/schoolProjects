/*
Dopo aver inserito un valore n in input nel main chiamare
una funzione media che restituisce la media dei numeri presenti in un vector
che viene caricato o generato con n numeri casuali all'interno della funzione stessa.
*/
#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

float avg(vector<int> nums)
{
    float avg;

    for (int num : nums)
    {
        avg += num;
    }
    avg /= nums.size();
    return avg;
}

int main()
{
    vector<int> nums;
    srand(time(NULL));
    system("cls");

    cout << "Inserimento vector...\n";
    for (int i = 0; i < 4; i++)
    {
        int num = rand() % 51;
        nums.push_back(num);
        if (i != 3)
        {
            cout << nums.at(i) << ",\t";
        }
        else
        {
            cout << nums.at(i) << ".";
        }
    }

    cout << "\nElaborazione...\n";

    cout << "La media e': " << avg(nums) << "\n";
    system("pause");
    system("cls");
    return 0;
}
