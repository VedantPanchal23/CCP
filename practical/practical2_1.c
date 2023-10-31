#include<stdio.h>
void main()
{
    printf("Sr.No.\tGet Outcome\t\t\t\tValue\n");
    int tp,nl,nm,nlm,nim,nw,nlw,niw;
    tp=80000;
    nl=tp*0.48;
    nm=tp*0.52;
    nlm=tp*0.35;
    nim=nm-nlm;
    nw=tp-nm;
    nlw=nl-nlm;
    niw=nw-nlw;
    printf("1.\tTotal Population\t\t\t%d\n",tp);
    printf("2.\tNumber of Literate\t\t\t%d\n",nl);
    printf("3.\tNumber of Men\t\t\t\t%d\n",nm);
    printf("4.\tNumber of Literate Men\t\t\t%d\n",nlm);
    printf("5.\tNumber of illiterate Men\t\t%d\n",nim);
    printf("6.\tNumber of Women\t\t\t\t%d\n",nw);
    printf("7.\tNumber of Literate Women\t\t%d\n",nlw);
    printf("8.\tNumber of illiterate Women\t\t%d",niw);
    printf("\n23aiml042_panchal vedant\n");
}
