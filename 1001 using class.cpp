#include <iostream>

using namespace std;

class add{
    public:
        add(int x, int y)
        {
            int sum = x + y;
            cout << "X = " << sum << "\n";
        }
};

int main() {
    int a,b;

    cin >> a >> b;

    add obj(a, b);

    return 0;
}
