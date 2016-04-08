//
//  bibl.c
//  trpolab1
//
//  Created by Александр Эм on 19.03.16.
//  Copyright © 2016 Александр Эм. All rights reserved.
//

#include "bibl.h"
#include <stdio.h>
#include <math.h>
int main ()
{
    double a, b, c, d, x1 = 0, x2 = 0;
    printf("vvedite a: "); scanf("%lf", &a);
    printf ("vvedite b: "); scanf("%lf", &b);
    printf("vvedite c: "); scanf("%lf", &c);
    if (a == 0) printf("\a\n yravnenie ne imeet korney! ");
    else
    {
        d = pow(b, 2) - 4 * a * c;
        if (d < 0) printf("\a\n yravneniye ne imeet korney ");
        else if
            (d == 0)
        {
            x1 = -b / (2 / a);
            if (b == 0 && c == 0) x1 = 0;
            printf(" yravnenie imeet odin koren: x = %f", x1);
        }
        else
        {
            x1 = (-b - sqrt(d)) / (2 * a);
            x2 = (-b + sqrt(d)) / (2 * a);
            printf (" yravnenie imeet dva kornya: \n x1 = %f\n x2 = %f" , x1, x2);
        }
    }
    return 0;
}