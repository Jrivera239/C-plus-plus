# Map Function - map(fnction, iterable)


def make_even(num):
    if num%2==1:
        return num+1
    else:
        return num
    
x= [555,326,4124,21,55,1,63,34643,342,3432,242,5]

y = list(map(make_even, x))
    
print(y)