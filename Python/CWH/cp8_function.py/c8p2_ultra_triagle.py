n=int(input("Enter number of rows: "))
for i in range(1,n+1):
    print("* "*((n+1)-i))
# using Recursion
def pattern(n):
    if(n==0):
        return
    print("* "*n)
    return pattern(n-1)

pattern(n)