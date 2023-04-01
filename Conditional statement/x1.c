#include <stdio.h>
// there is  3 subjects maths , physics, chemistry having passing marks
int main()
{
    int i;
    printf("Subject code are aa follow :\n");
    printf("1 : Maths\n2 : Physics\n3 : Chemistry\n4 : All Clear\n\n");

    printf("Enter the subject code which you have clear : ");
    scanf("%d", &i);
    if (i == 1)
    {
        printf("Cogratulation you got 500rs");
    }
    else if (i == 2)
    {
        printf("Congratulation you got 700rs");
    }
    else if (i == 3)
    {
        printf("Congratulation you got 100rs");
    }
    else if (i == 4)
    {
        printf("Congraulation scolar you got 2000rs");
    }
    else
        printf("Selcet right subject code motherucker");
    return 0;
}