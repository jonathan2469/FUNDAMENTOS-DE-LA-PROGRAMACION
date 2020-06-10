#include <stdio.h>
#include <stdlib.h>

void print(char array[3][3])//this function prints the game board from the array
{
    for(int i = 0; i < 3; i++)
    {
        printf("\n\t");
        for(int j = 0; j < 3; j++)
        {
            printf("  %c", array[i][j]);
        }
    }
    printf("\n\n");
}
char win_condition (char array [][3], char tab, char enemy) //verifies if it is possible to win
{
    //win condition of the top row
    if(((array[0][0] == tab) && (array[0][1] == tab)) && array[0][2] == '*'){array[0][2] = tab;}
    if(((array[0][0] == tab) && (array[0][2] == tab)) && array[0][1] == '*'){array[0][1] = tab;}
    if(((array[0][1] == tab) && (array[0][2] == tab)) && array[0][0] == '*'){array[0][0] = tab;}
    //win condition of the mid row
    if(((array[1][0] == tab) && (array[1][1] == tab)) && array[1][2] == '*'){array[1][2] = tab;}
    if(((array[1][0] == tab) && (array[1][2] == tab)) && array[1][1] == '*'){array[1][1] = tab;}
    if(((array[1][1] == tab) && (array[1][2] == tab)) && array[1][0] == '*'){array[1][0] = tab;}
    //win condition of the bot row
    if(((array[2][0] == tab) && (array[2][1] == tab)) && array[2][2] == '*'){array[2][2] = tab;}
    if(((array[2][0] == tab) && (array[2][2] == tab)) && array[2][1] == '*'){array[2][1] = tab;}
    if(((array[2][1] == tab) && (array[2][2] == tab)) && array[2][0] == '*'){array[2][0] = tab;}
    //win condition of the left column
    if(((array[0][0] == tab) && (array[1][0] == tab)) && array[2][0] == '*'){array[2][0] = tab;}
    if(((array[0][0] == tab) && (array[2][0] == tab)) && array[1][0] == '*'){array[1][0] = tab;}
    if(((array[1][0] == tab) && (array[2][0] == tab)) && array[0][0] == '*'){array[0][0] = tab;}
    //win condition of the mid column
    if(((array[0][1] == tab) && (array[1][1] == tab)) && array[2][1] == '*'){array[2][1] = tab;}
    if(((array[0][1] == tab) && (array[2][1] == tab)) && array[1][1] == '*'){array[1][1] = tab;}
    if(((array[1][1] == tab) && (array[2][1] == tab)) && array[0][1] == '*'){array[0][1] = tab;}
    //win condition of the right column
    if(((array[0][2] == tab) && (array[1][2] == tab)) && array[2][2] == '*'){array[2][2] = tab;}
    if(((array[0][2] == tab) && (array[2][2] == tab)) && array[1][2] == '*'){array[1][2] = tab;}
    if(((array[1][2] == tab) && (array[2][2] == tab)) && array[0][2] == '*'){array[0][2] = tab;}
    //win condition right diagonal
    if(((array[0][2] == tab) && (array[1][1] == tab)) && array[2][0] == '*'){array[2][0] = tab;}
    if(((array[0][2] == tab) && (array[2][0] == tab)) && array[1][1] == '*'){array[1][1] = tab;}
    if(((array[1][1] == tab) && (array[2][0] == tab)) && array[0][2] == '*'){array[0][2] = tab;}
    //win condition left diagonal
    if(((array[0][0] == tab) && (array[1][1] == tab)) && array[2][2] == '*'){array[2][2] = tab;}
    if(((array[0][0] == tab) && (array[2][2] == tab)) && array[1][1] == '*'){array[1][1] = tab;}
    if(((array[1][1] == tab) && (array[2][2] == tab)) && array[0][0] == '*'){array[0][0] = tab;}
    return array;
}
char loss_condition (char array [][3], char tab, char enemy) //verifies if it is possible to lose
{
    //loss condition of the top row
    if(((array[0][0] == enemy) && (array[0][1] == enemy))&& array[0][2] == '*'){array[0][2] = tab;}
    if(((array[0][0] == enemy) && (array[0][2] == enemy))&& array[0][1] == '*'){array[0][1] = tab;}
    if(((array[0][1] == enemy) && (array[0][2] == enemy))&& array[0][0] == '*'){array[0][0] = tab;}
    //loss condition of the mid row
    if(((array[1][0] == enemy) && (array[1][1] == enemy))&& array[1][2] == '*'){array[1][2] = tab;}
    if(((array[1][0] == enemy) && (array[1][2] == enemy))&& array[1][1] == '*'){array[1][1] = tab;}
    if(((array[1][1] == enemy) && (array[1][2] == enemy))&& array[1][0] == '*'){array[1][0] = tab;}
    //loss condition of the bot row
    if(((array[2][0] == enemy) && (array[2][1] == enemy))&& array[2][2] == '*'){array[2][2] = tab;}
    if(((array[2][0] == enemy) && (array[2][2] == enemy))&& array[2][1] == '*'){array[2][1] = tab;}
    if(((array[2][1] == enemy) && (array[2][2] == enemy))&& array[2][0] == '*'){array[2][0] = tab;}
    //loss condition of the left column
    if(((array[0][0] == enemy) && (array[1][0] == enemy))&& array[2][0] == '*'){array[2][0] = tab;}
    if(((array[0][0] == enemy) && (array[2][0] == enemy))&& array[1][0] == '*'){array[1][0] = tab;}
    if(((array[1][0] == enemy) && (array[2][0] == enemy))&& array[0][0] == '*'){array[0][0] = tab;}
    //loss condition of the mid column
    if(((array[0][1] == enemy) && (array[1][1] == enemy))&& array[2][1] == '*'){array[2][1] = tab;}
    if(((array[0][1] == enemy) && (array[2][1] == enemy))&& array[1][1] == '*'){array[1][1] = tab;}
    if(((array[1][1] == enemy) && (array[2][1] == enemy))&& array[0][1] == '*'){array[0][1] = tab;}
    //loss condition of the right column
    if(((array[0][2] == enemy) && (array[1][2] == enemy))&& array[2][2] == '*'){array[2][2] = tab;}
    if(((array[0][2] == enemy) && (array[2][2] == enemy))&& array[1][2] == '*'){array[1][2] = tab;}
    if(((array[1][2] == enemy) && (array[2][2] == enemy))&& array[0][2] == '*'){array[0][2] = tab;}
    //loss condition right diagonal
    if(((array[0][2] == enemy) && (array[1][1] == enemy))&& array[2][0] == '*'){array[2][0] = tab;}
    if(((array[0][2] == enemy) && (array[2][0] == enemy))&& array[1][1] == '*'){array[1][1] = tab;}
    if(((array[1][1] == enemy) && (array[2][0] == enemy))&& array[0][2] == '*'){array[0][2] = tab;}
    //loss condition left diagonal
    if(((array[0][0] == enemy) && (array[1][1] == enemy))&& array[2][2] == '*'){array[2][2] = tab;}
    if(((array[0][0] == enemy) && (array[2][2] == enemy))&& array[1][1] == '*'){array[1][1] = tab;}
    if(((array[1][1] == enemy) && (array[2][2] == enemy))&& array[0][0] == '*'){array[0][0] = tab;}
    return array;
}
char analyze (char array[][3], char tab)//analyze the game board and decides the best option to play
{
    int aux = 0; // variable that indicates how many empty spaces there are
    for(int i = 0; i < 3; i++){for(int j = 0; j < 3; j++){if(array[i][j] == '*'){aux++;}}}//this cycles count the amount of empty spaces
    if(aux == 9)
        {
            array [0][0] = tab;
            return(array);
        }
    else if(aux == 7)
        {
            if(array[2][2] == '*')
            {
                    array[2][2] = tab;
            }
            else if(array[0][2] == '*')
            {
                array[0][2] = tab;
            }
        return(array);
        }
    else if(aux == 5)
        {
            if(array [2][2] == tab)
            {
                if(array[0][2] == '*')
                {
                    array[0][2];
                }
                else if(array[2][0] == '*')
                {
                    array[2][0] = tab;
                }
            }
            else if(array[0][2] == tab)
            {
                if(array[2][2] == '*')
                {
                    array[2][2] = tab;
                }
            }
            else if(array[0][0] == tab && array[0][2] == tab && array[2][2] != '*')
            {
                if(array[2][0] == '*')
                {
                    array[2][0] = tab;
                }
            }
        return(array);
        }
    else if(aux == 1)
        {
            for(int x = 0; x < 3; x++)
            {
                for(int y = 0; y < 3; y++)
                {
                    if(array[x][y] == '*'){array[x][y] = tab;}
                    return(array);
                }
            }
        }
    else if(aux == 8)
    {
        if(array[1][1] == '*')
        {
            array [1][1] = tab;
        }
        else if (array [0][0] == '*')
        {
            array[0][0] = tab;
        }
    }
    else if(aux == 2)
    {
        for(int x = 0; x < 3; x++)
        {
            for(int y = 0; y < 3; y++)
            {
                if(array[x][y] == '*'){array[x][y] = tab;return(array);}
            }
        }
    }
    else if(aux == 6)
    {
        if(array[1][0] == '*'){array[1][0] = tab; return(array);}
        else if(array[0][1] == '*'){array[0][1] = tab; return(array);}
        else if(array[2][1] == '*'){array[2][1] = tab; return(array);}
        else if(array[1][2] == '*'){array[1][2] = tab; return(array);}
    }
}
int main(char tab, char enemy)
{
    int i = 0, j = 0;
    FILE *archivo;
 	char game [3][3];
 	archivo = fopen("tablero.txt","r+");
    for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                fscanf(archivo, "%c", &game[i][j]);
            }
        }
        fclose(archivo);
        //print(game);
        win_condition(game, tab, enemy);
        loss_condition(game, tab, enemy);
        analyze(game, tab);
        archivo = fopen("tablero.txt","r+");
        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                fputc(game[i][j], archivo);
            }
        }
        fclose(archivo);
        //print(game);
	return 0;
}
