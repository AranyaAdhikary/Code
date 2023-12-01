# One of even numbers in range 1-10 and the other has all composite numbers in range 1-20
# Demonstrate the use of all(), issuperset(), len(), and sum()

comp = set()
even = set()
for i in range(1,11):
    if i%2 == 0:
        even.add(i)
for i in range(1,21):
    c=0
    for j in range(2,i//2 + 1):
        if (i%j==0):
            c=1
            break
    if(c==1):
        comp.add(i)
print('Is set iterable ?',all(comp))
print('Even set is a superset of composite set ?',even.issuperset(comp))
print('The length of even set :',len(even))
print('The sum of even set :',sum(even))

