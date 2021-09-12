
letter = ''' Dear  <|NAME|>
Good morning this is to be inform you that you are selected for the job
in Google 
thanks.
Date for joining 31/6/2021
'''

name = input("Enter your name")
letter = letter.replace("<|NAME|>",name)
print(letter)