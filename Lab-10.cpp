#include <bits/stdc++.h>
using namespace std;

float proterm(int i, float value, float x[])
{
    float pro = 1;
    for (int j = 0; j < i; j++) {
        pro = pro * (value - x[j]);
    }
    return pro;
}
void dividedDiffTable(float x[], float y[][10], int n)
{
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            y[j][i] = (y[j][i - 1] - y[j + 1] [i - 1]) / (x[j] - x[i + j]);
        }
    }
}

float applyFormula(float value, float x[], float y[][10], int n)
{
    float sum = y[0][0];

    for (int i = 1; i < n; i++) {
      sum = sum + (proterm(i, value, x) * y[0][i]);
    }
    return sum;
}

void printDiffTable(float y[][10],int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << setprecision(4) <<  y[i][j] << "\t ";
        }
        cout << "\n";
    }
}

int main()
{

    int n = 6;
    float value, sum, y[10][10];
    float x[] = { 4,5,7,10,11,13 };

    y[0][0] = 48;
    y[1][0] = 100;
    y[2][0] = 294;
    y[3][0] = 900;
    y[4][0] = 1210;
    y[5][0] = 2028;

    dividedDiffTable(x, y, n);

    printDiffTable(y,n);

    value = 15;

    cout << "\nValue at " << value << " is " << applyFormula(value, x, y, n) << endl;
    return 0;
}
