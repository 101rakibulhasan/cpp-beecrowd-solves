#include <iostream>

using namespace std;

class salary{
    public:
        salary(double x, double y)
        {
            double _sal = x + y * 0.15;
            printf("TOTAL = R$ %.2lf\n", _sal);
        }
};

int main() {
    double a, b;
    string name;

    cin >> name >> a >> b;

    salary obj(a,b);

    return 0;
}
