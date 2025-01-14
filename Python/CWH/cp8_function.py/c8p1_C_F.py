# Write a python program using function to convert
#  Fahrenheit to Celsius.

# formula: C=(5/9)*(F-32)

def f_to_c(f):
    c=(5/9)*(f-32)
    return c

f=float(input("Enter the temperature in F: "))
c=f_to_c(f)

print(f"{round(c,2)} °C")