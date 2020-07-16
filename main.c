#include <stdio.h>
#include <stdlib.h>

int main()
{

        char sym;
        char compsym;
        int gamenum;
        char grid [9]={1,2,3,4,5,6,7,8,9};
        char grid2 [9]={"123456789"};
        printf("welcome to tic tac toe\n");
        printf("choose X or O\n" );
        scanf("%s",&sym);

        while(sym!='X'&&sym!='x'&&sym!='o'&&sym!='O')
        {
            printf("please enter a right symbol\n");
            scanf("%s",&sym);
        }

        if (sym=='X'||sym=='x')
            compsym=='O';
        else if (sym== 'o'||sym=='O')
            compsym=='X';
        for (int i=1;i<10;i++)
        {
            printf("%i",grid[i-1]);
            printf(" ");

                if (i%3==0)
                printf("\n");
        }
        for(int i=1;i<10;i++)
        {
            if (i%2==0)
            {
                printf("player X:enter a number\n ");
                scanf("%i",&gamenum);
                grid2[gamenum-1]= 'X';
                for (int i=1;i<10;i++)
                {
                    printf("%c",grid2[i-1]);
                    printf(" ");

                    if (i%3==0)
                    printf("\n");
                }
            }

            else if (i%2!=0)
            {
                printf("player O: enter a number\n ");
                scanf("%i",&gamenum);
                grid2[gamenum-1]= 'O';
                for (int i=1;i<10;i++)
                {
                    printf("%c",grid2[i-1]);
                    printf(" ");

                    if (i%3==0)
                    printf("\n");
                }
            }
            if ((grid2[0]=='O'&&grid2[1]=='O'&&grid2[3]=='O')||(grid2[3]=='O'&&grid2[4]=='O'&&grid2[5]=='O')||(grid2[6]=='O'&&grid2[7]=='O'&&grid2[8]=='O')||
                (grid2[0]=='O'&&grid2[4]=='O'&&grid2[8]=='O')||(grid2[2]=='O'&&grid2[4]=='O'&&grid2[6]=='O')||(grid2[0]=='O'&&grid2[3]=='O'&&grid2[6]=='O')||
                (grid2[1]=='O'&&grid2[4]=='O'&&grid2[7]=='O')||(grid2[2]=='O'&&grid2[5]=='O'&&grid2[8]=='O'))
            {
                printf("player O wins\n");
                break;
            }
            else if ((grid2[0]=='X'&&grid2[1]=='X'&&grid2[3]=='X')||(grid2[3]=='X'&&grid2[4]=='X'&&grid2[5]=='X')||(grid2[6]=='X'&&grid2[7]=='X'&&grid2[8]=='X')||
                (grid2[0]=='X'&&grid2[4]=='X'&&grid2[8]=='X')||(grid2[2]=='X'&&grid2[4]=='X'&&grid2[6]=='X')||(grid2[0]=='X'&&grid2[3]=='X'&&grid2[6]=='X')||
                (grid2[1]=='X'&&grid2[4]=='X'&&grid2[7]=='X')||(grid2[2]=='X'&&grid2[5]=='X'&&grid2[8]=='X'))
                {
                    printf("player X wins\n");
                    break;
                }
            else if (i==9)
                printf("it's a draw");

        }



    return 0;
}
