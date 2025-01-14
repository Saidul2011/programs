# Write a ptosram to marks of 6 students and display them in a sorted manner.
marks=[]

m1=int(input("Enter your marks: "))
marks.append(m1)

m2=int(input("Enter your marks: "))
marks.append(m2)

m3=int(input("Enter your marks: "))
marks.append(m3)

m4=int(input("Enter your marks: "))
marks.append(m4)
m5=int(input("Enter your marks: "))
marks.append(m5)

marks.sort()
print(marks)