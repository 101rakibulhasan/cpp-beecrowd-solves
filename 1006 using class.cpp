#include <iostream>

using namespace std;

class weight_avg{
    public:
        weight_avg(double x, double y, double z)
        {
            double _avg = (x * 2) + (y * 3) + (z * 5);
            printf("MEDIA = %.1lf\n", _avg / 10);
        }
};

int main() {
    double a, b, c;

    cin >> a >> b >> c;

    weight_avg obj(a, b, c);

    return 0;
}
