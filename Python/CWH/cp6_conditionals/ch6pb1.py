# Write 0 prqram to tina the greatest Of tour numbers 
# entered by the user.

a1= int(input("Enter number a1: "))
a2= int(input("Enter number a2: "))
a3= int(input("Enter number a3: "))
a4= int(input("Enter number a4: "))

if(a1>a2 and a2>a3 and a3>a4):
    print("Greatest Number is a1: ", a1)
elif(a2>a1 and a1>a3 and a3>a4):
    print("Greatest Number is a2: ", a2)
elif(a3>a1 and a1>a2 and a2>a4):
    print("Greatest Number is a3: ", a3)
elif(a4>a1 and a1>a2 and a2>a3):
    print("Greatest Number is a4: ", a4)