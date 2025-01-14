# Rock-Paper-Scissors
'''
Rock =    0
Paper=    1
Scissor= -1
'''
import random
dict={"r":0,"p":1,"s":-1}
rev_dict={0:"Rock",1:"Paper",-1:"Scissor"}
computer=random.choice([0,1,-1])
you=input("Choose- rock/paper/scissor : ")
your_number=dict[you]
print("You pick: ",rev_dict[your_number])
print("Computer pick: ",rev_dict[computer])
if(your_number==computer):
    print("Match Draw.")
elif(computer==0 and your_number==1):   # -1
    print("You win!")
elif(computer==0 and your_number==-1):  #  1
    print("Computer Win!")
elif(computer==1 and your_number==0):   #  1
    print("Computer Win!")
elif(computer==1 and your_number==-1):  #  2
    print("You win!")
elif(computer==-1 and your_number==0):  # -1
    print("You win!")
elif(computer==-1 and your_number==1):  # -2
    print("Computer Win!")
else:
    print("Invalid input.")

