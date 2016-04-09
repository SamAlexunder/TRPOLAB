//
//  bibl.c
//  trpolab1
//
//  Created by Александр Эм on 19.03.16.
//  Copyright © 2016 Александр Эм. All rights reserved.
//

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "bibl.h"

double func1(double a, double b, double c)
{
    int f = 0;
    double D, x1 = 0, x2 = 0;
    D = b * b - 4 * a * c;
    
    if (D == 0)
    {
        printf("a = %lf, b = %lf \n", a, b);
        x1 = -b / (a * 2);
        printf("x = %lf\n", x1);
        f = 1;
    }
    
    if(D < 0)
    {
        printf("Kornei net");
        return 0;
    }
    
    if(D > 0)
    {
        x1 = (-b + sqrt(D))/(2 * a);
        x2 = (-b - sqrt(D))/(2 * a);
        f = 0;
    }
    
    if (f == 1) printf("x = %lf", x1);
    else if (f == 0) printf("x1 = %lf x2 = %lf", x1, x2);
}