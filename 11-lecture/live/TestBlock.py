# Global scope
x = 10
print("Before for loop, x is:", x)

for i in range(1):
    y = 20 
    x = 25 
    print("Inside for loop, x is:", x, "and y is:", y)


print("After for loop, x is:", x)
print("y is still accessible:", y)


def test_scope():
    # This variable is in the local scope of the function
    z = 30
    print("Inside function, z is:", z)


test_scope()

print(z)  