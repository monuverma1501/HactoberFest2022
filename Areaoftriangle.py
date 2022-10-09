# Python Program to find the area of triangle
# import the math module
import math

a = 3
b = 4
c = 5

# Uncomment below to take inputs from the user
# a = float(input('Enter first side: '))
# b = float(input('Enter second side: '))
# c = float(input('Enter third side: '))

# calculate the semi-perimeter
s = (a + b + c) / 2

# calculate the area
area = math.sqrt(s*(s-a)*(s-b)*(s-c))
print('The area of the triangle is %0.2f' %area)
