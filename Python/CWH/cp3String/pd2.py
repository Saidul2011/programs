# Write a program to fill in a letter template given below with name and date.
letter ='''Dear, <|Name|>
You are selected!
<|Date|>'''
print(letter.replace("<|Name|>","SAIDUL").replace("<|Date|>","20.11.28"))
 # chain replece
