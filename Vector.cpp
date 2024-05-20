#include <iostream>
#include <vector>
using namespace std;
void voidIncrease(vector<int>& vec, const int n) {
    for (int i = 0; i < vec.size(); i++) {
        vec[i] += n;
    }
}
vector<int> increace(vector<int> vec, const int n) {
    for (int i = 0; i < vec.size(); i++) {
        vec[i] += n;
    }
    return vec;
}
int main()
{
    vector<int> first(5);
    vector<int> second(5);
    cout << "First\n";
    for (int i = 0; i < first.size(); i++) {
        first[i] = rand() % 10;
        cout << first[i] << ' ';
    }
    cout << "\nSecond\n";
    for (int i = 0; i < second.size(); i++) {
        second[i] = rand() % 10;
        cout << second[i] << ' ';
    }

    cout << "\nUse return function\n";
    vector<int> returned = increace(first, 1);
    for (int i = 0; i < returned.size(); i++) {
        cout << returned[i] << ' ';
    }
    cout << "\nUse void function\n";
    voidIncrease(second, 2);
    for (int i = 0; i < second.size(); i++) {
        cout << second[i] << ' ';
    }
}