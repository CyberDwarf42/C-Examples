#include <deque>
#include <iostream>
#include <algorithm>
#include <iterator>


using namespace std;

void showdq(deque<string> g)
{
    deque<string>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}


int main()
{
    deque<string> monkeh;
    while (monkeh.size() < 30){
     monkeh.push_back("Hello");
    monkeh.push_front("World");
    monkeh.push_back("Nice");
    monkeh.push_front("To");
    }


    cout << "The deque monkeh is : ";
    showdq(monkeh);

    cout << endl;

    string target_value = "Hello";
    int num_items = count(monkeh.begin(), monkeh.end(), target_value);
    cout << "monkeh contains " << num_items << " items matching " <<
    target_value << endl;
    ;
    return 0;
}
