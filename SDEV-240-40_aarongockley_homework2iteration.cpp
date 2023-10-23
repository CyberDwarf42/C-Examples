#include <iostream>

using namespace std;

int main()
{
    int var;
    printf("Please enter an integer number and press 'Enter': ");
    cin >> var;
    int j = 1;
do {
    cout << j * var << "\n";
    j++;
} while (j<=10);

    return 0;
}
