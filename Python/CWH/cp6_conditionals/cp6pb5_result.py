marks=int(input("Enter your marks: "))

if(90<marks<=100):
    grade="Ex"
elif(80<marks<=90):
    grade="A"
elif(70<marks<=80):
    grade="B"
elif(60<marks<=70):
    grade="C+"
elif(50<marks<=60):
    grade="C"
elif(40<marks<=50):
    grade="D"
else:
    grade="F"


print("Your grade is : ", grade)