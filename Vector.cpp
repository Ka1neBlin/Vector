#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void voidHuge(vector<T>& vec, const int size) {
    // Здесь я на прямую меняю его размер
    vec.resize(vec.size() + size);
}
int main()
{
    vector<int> first(5);
    cout << "First size: " << first.size() << '\n';
    voidHuge(first, 3);
    cout << "First size: " << first.size() << '\n';

    vector<string> second(5);
    cout << "Second size: " << second.size() << '\n';
    voidHuge(second, 4);
    cout << "Second size: " << second.size() << '\n';
}