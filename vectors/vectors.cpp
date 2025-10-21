#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford"};
    cars.push_back("Mazda"); // vector.push_back(x); -- aggiunge alla fine di tutto.

    for (int i = 0; i < cars.size(); i++)
    {
        cout << cars.at(i) << "\n";
    }

    system("pause");
    return 0;
}
