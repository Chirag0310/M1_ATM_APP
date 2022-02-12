
#include"Game.h"
#include"Game.c"

/**
 * @file project_main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

int main()
    {
        printf("\n\nEnjoy the game! Be a Winner!\n\n");
        int player=1,i,choice;
        char mark;
        do
        {
            game();
            player = (player % 2) ? 1 : 2;
    
            printf("Player %d Move : ",player);
            scanf("%d",&choice);
    
            mark = (player == 1) ? 'X' : 'O';
    
            if (choice == 1 && tic[1] == '1')
                tic[1] = mark;
                
            else if (choice == 2 && tic[2] == '2')
                tic[2] = mark;
                
            else if (choice == 3 && tic[3] == '3')
                tic[3] = mark;
                
            else if (choice == 4 && tic[4] == '4')
                tic[4] = mark;
                
            else if (choice == 5 && tic[5] == '5')
                tic[5] = mark;
                
            else if (choice == 6 && tic[6] == '6')
                tic[6] = mark;
                
            else if (choice == 7 && tic[7] == '7')
                tic[7] = mark;
                
            else if (choice == 8 && tic[8] == '8')
                tic[8] = mark;
                
            else if (choice == 9 && tic[9] == '9')
                tic[9] = mark;            
            else
            {
                printf("Not Valid");
                player--;
                //getch();
            }
            i = win();
            player++;
        }
        while (i == -1);
        
        game();
        
        if (i == 1)
            printf("Player %d Win", --player);
        else
            printf("It's Tie..");
    
        //getch();
    
        return 0;
    }

