#include <stdio.h>
// there is  3 subjects maths , physics, chemistry having passing marks
int main()
{
    int i;
    printf("Subject code are aa follow :\n");
    printf("1 : Maths\n2 : Physics\n3 : Chemistry\n4 : All Clear\n\n");

    printf("Enter the subject code which you have clear : ");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        printf("Cogratulation you got 500rs");
        break;
    case 2:
        printf("Congratulation you got 700rs");
        break;
    case 3:
        printf("Congratulation you got 100rs");
        break;
    case 4:
        printf("Congraulation scolar you got 2000rs");
        break;

    default:
        printf("Selcet right subject code motherucker");
        break;
    }

    return 0;
}