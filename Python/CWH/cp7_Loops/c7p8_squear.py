n=int(input("Enter number of rows: "))
for i in range(1,n+1):
        for j in range(1,n+1):
                if(i==1 or i==n or j==1 or j==n):
                        print("*  ",end="")
                else:
                        print("   ",end="")
        print("")
# OR 
print("OR")

for j in range(1,n+1):
        if(j==1 or j==n):
                print("*"*n,end="")
        else:
                # print("*  ", "   "*(n-2),"*  ",end="")
                print("*",end="")
                print(" "*(n-2),end="")
                print("*",end="")
        print("")