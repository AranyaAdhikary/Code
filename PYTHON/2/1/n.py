# float to mantissa and exponent. Reverse the process

import math

f = float(input("Enter a floating point : "))
a = math.frexp(f)
print(a)
print(a[0]*2**a[1])
