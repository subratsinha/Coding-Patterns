import random

Player1_Score = 0
Player2_Score = 0
Player1_turn = 0
Player2_turn = 0

def printScore():
    global Player1_Score, Player2_SCore
    print('--------> P1 / P2 total: {} / {} <--------'.format(Player1_Score,Player2_Score))
    if(Player1_Score>=100):
        print("Congratulation P1")
        exit()
    elif(Player2_Score>=100):
        print("Congratulation P2")
        exit()

def roll():
    return random.randrange(1,7)

def play(player):
    global Player1_Score, Player2_Score, Player1_turn, Player2_turn
    choice = input(player + "(r/h): ")
    if(choice == 'r'):
        dice = roll()
        print("\t" + player+ " rolls a ..." + str(dice) + ' !')
        if(dice!=1):
            if(player == "P1"):
                Player1_turn += dice
                play("P1")
            else:
                Player2_turn += dice
                play("P2")
        else:
            printScore()
            if(player == "P1"):
                Player1_turn = 0
                play("P2")
            else:
                Player2_turn = 0
                play("P1")
    elif(choice == 'h'):
        if(player == "P1"):
                Player1_Score += Player1_turn
                Player1_turn = 0
                printScore()
                play("P2")
        else:
                Player2_Score += Player2_turn
                Player2_turn = 0
                printScore()
                play("P1")
        

def main():
    print("Welcome to PIG")
    play("P1");
    
main()
