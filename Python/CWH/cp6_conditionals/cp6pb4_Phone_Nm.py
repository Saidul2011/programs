number=[]

print("Enter your number: ")

first_digit=int(input())
number.append(first_digit)

digit2=int(input())
number.append(digit2)
digit3=int(input())
number.append(digit3)
digit4=int(input())
number.append(digit4)
digit5=int(input())
number.append(digit5)
digit6=int(input())
number.append(digit6)
digit7=int(input())
number.append(digit7)
digit8=int(input())
number.append(digit8)
digit9=int(input())
number.append(digit9)
digit10=int(input())
number.append(digit10)

if((5<first_digit<10) and (-1<digit2<10) and (-1<digit3<10) and (-1<digit4<10) 
   and (-1<digit5<10) and (-1<digit6<10) and (-1<digit7<10) and (-1<digit8<10) 
   and (-1<digit9<10) and (-1<digit10<10) ):
    print("Valid number.")

else:
    print("Invalid number.")