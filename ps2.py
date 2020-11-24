# importing "random" for random operations
import random
import math

x, y = [int(x) for x in input("Enter the numbers between which you want to play the game: ").split()]

nog= math.ceil( math.log(y - x + 1 , 2))

print('computer: guess the number. you have {} chance'.format(nog))


#generate the random number between x and y
ran = random.randint(x, y)

#while loop for checking different conditions
i = 0
while i < nog:
    i += 1
    num = int(input('user:\n'))

    if num == ran:
     print( 'Correct guess! You won\n')
     break

    elif num > ran:
     print('Try again! Your guess is high\n')

    elif num < ran:
     print('Try again! Your guess is low\n')

print('You ran out guesses. Game over. the correct answer is {}\n'.format(ran))

