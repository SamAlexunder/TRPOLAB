//
//  bibl.h
//  trpolab1
//
//  Created by Александр Эм on 19.03.16.
//  Copyright © 2016 Александр Эм. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

double func1(double a, double b, double c);

int main()
{
    double a, b, c;
    
    scanf("%lf%lf%lf", &a, &b, &c);
    func1(a, b, c);
    return 0;
    
}
