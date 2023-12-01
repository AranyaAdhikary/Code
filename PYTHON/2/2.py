# roots of quadratic equation

import math

a, b, c = map(int,input('Enter the coefficients : ').split())
d  = b*b - 4*a*c
if d<0:
    print('Imaginary roots')
else:
    r1 = (-b+math.sqrt(d))/(2*a)
    r2 = (-b-math.sqrt(d))/(2*a)
    print("The roots are", r1,'and',r2)