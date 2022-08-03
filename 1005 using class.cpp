#include <iostream>

using namespace std;

class weight_avg{
    public:
        weight_avg(double x, double y)
        {
            double _avg = (x * 3.5) + (y * 7.5);
            printf("MEDIA = %.5lf\n", _avg / (3.5 + 7.5));
        }
};

int main() {
    double a, b;

    cin >> a >> b;

    weight_avg obj(a,b);

    return 0;
}
