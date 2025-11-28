#include <bits/stdc++.h>
using namespace std;

int main() {
    double w, f;
    cin >> w >> f;

    double pa1 = (w*w*w + w*w) / (f*f - f);
    double pa2 = (w / f) + 5;
    double l = (pa1 - pa2) / (2 * w);

    cout << l;
    return 0;
}
