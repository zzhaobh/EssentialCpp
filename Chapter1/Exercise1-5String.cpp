//
//  Exercise1-5.cpp
//  Working
//
//  Created by Hawkins, Dakota Y on 5/24/16.
//  Copyright © 2016 Hawkins, Dakota Y. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <complex>

using namespace std;

int main() {
    string a;
    cin >> a;
    if (a.length() > 4 and a.length() <=10) { cout << a << '\n'; }
    else if (a.length() > 10) { cout << "TOO LONG" << '\n'; }
    else { cout << "TOO SHOT" << '\n'; }
//    cout << a << '\n';
    double x, y;
    cin >> x >> y;
    complex<double> p(x, y);
    cout << '\n' << p << '\n';
    return 0;
}

