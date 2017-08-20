//
//  main.c
//  RungeKutta
//
//  Created by Rakesh Kumar Bachchan on 2017-03-02.
//  Copyright © 2017 Rakesh Kumar Bachchan. All rights reserved.
//

#include <stdio.h>
#define F(x,y) (x-y)/(x+y)
int main() {
    int i, n;
    float x0, y0, h, xn, k1, k2, k3, k4, x, y, DeltaY;
    printf("Enter the initial values: of x0 and y0 below: \n");
    scanf("%f%f", &x0, &y0);
    printf("Enter the value of step size h below: \n");
    scanf("%f", &h);
    printf("Enter the value upto which x should reach:\n");
    scanf("%f", &xn);
    n = (xn-x0)/h;
    x = x0;
    y = y0;
    for (i=0;i<=n;i++)
    {
        k1 = h*F(x,y);
        k2 = h*F(x+h/2.0,y+k1/2.0);
        k3 = h*F(x+h/2.0,y+k2/2.0);
        k4 = h*F(x+h,y+k3);

        DeltaY = (k1+(k2+k3)*2.0+k4)/6.0;
        printf("\n x = %f y = %f\n", x, y);
        x = x + h;
        y = y + DeltaY;
    }
}

