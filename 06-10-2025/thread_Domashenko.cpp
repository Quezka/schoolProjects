#include <iostream>
#include <thread>
#include <time.h>
#include <chrono>
using namespace std;

int i, j;
void runner1()
{
    for (i = 0; i < 20; i++)
    {
        cout << "\nrunner1: "
             << i << "\n";
        this_thread::sleep_for(chrono::seconds(1));
    }
}

void runner2()
{
    for (j = 0; j < 20; j++)
    {
        cout << "\nrunner2: "
             << j << "\n";
        this_thread::sleep_for(chrono::seconds(1));
    }
}

int main()
{
    system("cls");

    thread t1(runner1), t2(runner2);

    t1.join();
    t2.join();
    system("pause");
    return 0;
}