
#include <unistd.h>



// Fonction d'affichage
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void affichage (int grille[9][9])
{
    int tk;
    int i;
    int j;

    i = 0;
    while (i < 9)
    {
        j = 0;
        while (j < 9)
        {
            
            if ((j + 1) % 3
)            {
            
                tk = grille[i][j];
                ft_putchar('0' + tk);
            }
            else
            {
                tk = grille[i][j];
                ft_putchar('0' + tk);
                write(1, "  ", 2);

            }
            j++;
        }
        ft_putchar('\n');
        if (!((i+1)%3))
            write(1, "-------------\n",14);
        i++;
    }
    write(1, "\n", 1);
    write(1, "\n", 1);
}

short int absentSurLigne (int fill, int grille[9][9], int i)
{
    int j;

    j = 0;
    while (j < 9)
       { if (grille[i][j] == fill)
            {
                return 0;
            }
            j++;
        }
    return 1;
}

short int absentSurColonne (int fill, int grille[9][9], int j)
{
    int i;

    i = 0;
    while (i < 9)
    {
        if (grille[i][j] == fill)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

short int absentSurBloc (int fill, int grille[9][9], int i, int j)
{
    int _i = i-(i%3);
    int _j = j-(j%3);

    i = _i;
    while ( i < _i+3)
    {   
        j = _j;
        while (j < _j+3)
        {
            if (grille[i][j] == fill)
            {
                return 0;
            }
            j++;
        }
        i++;
    }
    return 1;
}

short int estValide (int grille[9][9], int position)
{
    if (position == 9*9)
        return 1;

    int i = position/9, j = position%9;

    if (grille[i][j] != 0)
        return estValide(grille, position+1);
    int fill;

    fill = 1;
    while (fill <= 9)
    {
        if (absentSurLigne(fill,grille,i) && absentSurColonne(fill,grille,j) && absentSurBloc(fill,grille,i,j))
        {
            grille[i][j] = fill;

            if ( estValide (grille, position+1) )
                return 1;
        }
        fill++;
    }
    grille[i][j] = 0;

    return 0;
}

int main (int argc, char *argv[])
{
    int a;
    int i;
    int j;

    a = 0;
    i = 0;
    j = 0;
    int grille[9][9];
    while (i < 9)
    {
        while (j < 9)
        {
    while (a < argc)
    {
    grille[i][j] = argv[i][j];
    a++;
    }
    j++;
        }
    i++;
    }
    
    write(1, "Grille avant\n",13);
    affichage(grille);

    estValide(grille,0);

    write(1, "Grille apres\n",13);
    affichage(grille);
    return 0;
    
    
}
