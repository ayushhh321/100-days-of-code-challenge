//Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int a;
    long b;
    long long c;
    char d;
    float e;
    double f;    
    scanf("%d %ld %lld %c %f %lf", &a, &b, &c, &d, &e, &f);
    printf("%d\n", a);
    printf("%ld\n", b);
    printf("%lld\n", c);
    printf("%c\n", d);
    printf("%f\n", e);
    printf("%lf", f);
    return 0;
}

//Read 3 numbers from stdin and print their sum to stdout.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    cout << a + b + c << endl;
    return 0;
}
