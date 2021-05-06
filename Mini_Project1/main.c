#include <stdio.h>

float snacks();
void breakfast();
void lunch();
void beverages();
void bill();
void done();
float total1,total2,total3,total4,total5,total6,total7;
float st1,st2,st3,st4,st5,st6,st7;
float bt1,bt2,bt3,bt4,bt5,bt6,bt7;
float lt1,lt2,lt3,lt4,lt5,lt6,lt7;
float be1,be2,be3,be4,be5,be6,be7;
//WARNING:: Don't order the same thing twice(Utter fail)
void mm()
{
  int i;
  printf("\n\n\n\tW      W  EEEEEE   L       CCCCC    OOOOO   MM   MM  EEEEEE\n");
  printf("\tW      W  E        L      C     C  O     O  MMM MMM  E\n");
  printf("\tW      W  E        L      C        O     O  MMM MMM  E\n");
  printf("\tW  WW  W  EEEE     L      C        O     O  M MM  M  EEEE\n");
  printf("\tWWW  WWW  E        L      C        O     O  M     M  E\n");
  printf("\tWWW  WWW  E        L      C     C  O     O  M     M  E\n");
  printf("\tWW    WW  EEEEEE   LLLLLL  CCCCC    OOOOO   M     M  EEEEEE\n");
  printf("\n\n\n\t\t\tCHOOSE YOUR CATEGORY\n");
  printf("\t\t\t1.SNACKS\n");
  printf("\t\t\t2.BREAKFAST\n");
  printf("\t\t\t3.LUNCH\n");
  printf("\t\t\t4.BEVERAGES\n");
  printf("\t\t\t5.EXIT\n");
  scanf("%d",&i);

  if(i==1)
   snacks();
   else if(i==2)
    breakfast();
    else if(i==3)
        lunch();
    else if(i==4)
        beverages();
    else if(i==5)
        return;
    else
    {
        printf("\t\t\t Sorry!!! Invalid choice, Choose again.\n\n\n");
        mm();
    }
}

void main()
{
    mm();
    bill();
}

float snacks()
{
    int choice=0,qty=0,again=0;

    //float s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0;

    //fflush(stdin);

    printf("\n\n\t\t\t----------------------------------------------\n");
    printf("\t\t\t|                  SNACKS                    |\n");
    printf("\t\t\t----------------------------------------------\n");
    printf("\t\t\t|SL.NO   |  ITEM                   |PRICE    |\n");
    printf("\t\t\t|............................................|\n");
    printf("\t\t\t|   01   |  SAMOSA                 | 10(1PC) |\n");
    printf("\t\t\t|   02   |  CUTLET                 | 10(1PC) |\n");
    printf("\t\t\t|   03   |  VADA PAV               | 20(1PT) |\n");
    printf("\t\t\t|   04   |  VEG SANDWICH           | 15(1PT) |\n");
    printf("\t\t\t|   05   |  CHICKEN SANDWICH       | 20(1PT) |\n");
    printf("\t\t\t|   06   |  CHICKEN BURGER         | 40(1PT) |\n");
    printf("\t\t\t|   07   |  FRENCH FRIES           | 30(1PT) |\n");
    printf("\t\t\t----------------------------------------------\n");
    printf("\t\t\t----------------------------------------------\n");
    printf("\n\n\t\t\tType in the SL.NO of the food you want to order\n");
    scanf("%d",&choice);

    if(choice==1)
    {

        printf("\n\tENTER QUANTITY :\n");
        scanf("%d",&qty);
        st1=10*qty;

        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2]  \n\t If you want to EXIT press [3]\n");
        scanf("%d",&again);

        if(again==1)
            snacks();
        else if(again==2)
            mm();
        else if(again==3)
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tSAMOSA          \t\t%d\t\t\t\t%.2f\n\n",qty,st1);
       /* else
            bill();
            s1=total1;*/
            return ;
        fflush(stdin);

    }

    else if(choice==2)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        st2=10*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t  If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
            snacks();
        else if(again==2)
            mm();
         else //if(again==3)
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tCUTLET          \t\t%d\t\t\t\t%.2f\n\n",qty,st2);

        //else
         //   bill();

        return;
        fflush(stdin);
        //s2=total2;
    }

    else if(choice==3)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        st3=20*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]\n");
        scanf("%d",&again);

        if(again==1)
            snacks();
        else if(again==2)
            mm();
         else //if(again==3)
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tVADA PAV          \t\t%d\t\t\t\t%.2f\n\n",qty,st3);

        //else
           // bill();

        return ;

        fflush(stdin);
        //s3=total3;
    }

    else if(choice==4)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        st4=15*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t  If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]\n");
        scanf("%d",&again);

        if(again==1)
            snacks();
        else if(again==2)
            mm();
         else //if(again==3)
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tVEG SANDWICH          \t\t%d\t\t\t\t%.2f\n\n",qty,st4);

        //else
          //  bill();

        return;
        fflush(stdin);
        //s4=total4;
    }

    else if(choice==5)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        st5=20*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]\n");
        scanf("%d",&again);

        if(again==1)
            snacks();
        else if(again==2)
            mm();
        else //if(again==3)
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tCHICKEN SANDWICH          \t%d\t\t\t\t%.2f\n\n",qty,st5);

        //else
          //  bill();


        return ;
        fflush(stdin);
    }

     else if(choice==6)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        st6=40*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]\n");
        scanf("%d",&again);

        if(again==1)
            snacks();
        else if(again==2)
            mm();
        else if(again==3)
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tCHICKEN BURGER          \t%d\t\t\t\t%.2f\n\n",qty,st6);

        //else
          //  bill();


        return ;

        fflush(stdin);
        //s5=total5;
    }

    else if(choice==7)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        st7=30*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2]  \n\t If you want to EXIT press[3]\n");
        scanf("%d",&again);

        if(again==1)
            snacks();
        else if(again==2)
            mm();
        else//if(again==3)
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tFRENCH FRIES          \t\t%d\t\t\t\t%.2f\n\n",qty,st7);

        //else
          //  bill();
                                                   //total is not proper

        return ;

        fflush(stdin);

    }
    //tot1=s1+s2+s3+s4+s5+s6+s7;
    //return (tot1);

}

void breakfast()
{
   int choice=0,qty=0,again=0;
    //int n;

    //fflush(stdin);

    printf("\n\n\t\t\t----------------------------------------------\n");
    printf("\t\t\t|                  BREAKFAST                 |\n");
    printf("\t\t\t----------------------------------------------\n");
    printf("\t\t\t|SL.NO   |  ITEM                   |PRICE    |\n");
    printf("\t\t\t|............................................|\n");
    printf("\t\t\t|   01   |  PLAIN DOSA             | 30(1PT) |\n");
    printf("\t\t\t|   02   |  MASALA DOSA            | 40(1PT) |\n");
    printf("\t\t\t|   03   |  ONION DOSA             | 20(1PT) |\n");
    printf("\t\t\t|   04   |  IDLI AND VADA          | 25(1PT) |\n");
    printf("\t\t\t|   05   |  CHAPATI AND CURRY      | 20(1PT) |\n");
    printf("\t\t\t|   06   |  POORI BHAJI            | 30(1PT) |\n");
    printf("\t\t\t|   07   |  UPMA                   | 20(1PT) |\n");
    printf("\t\t\t----------------------------------------------\n");
    printf("\t\t\t----------------------------------------------\n");
    printf("\n\n\t\t\tType in the SL.NO of the food you want to order\n");
    scanf("%d",&choice);

    if(choice==1)
    {

        printf("\tENTER QUANTITY :\n");
        scanf("%d",&qty);
        bt1=30*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
        breakfast();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tPLAIN DOSA          \t\t%d\t\t\t\t%.2f\n\n",qty,bt1);

        return ;

        fflush(stdin);
    }

    else if(choice==2)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        bt2=40*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
       breakfast();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tMASALA DOSA          \t\t%d\t\t\t\t%.2f\n\n",qty,bt2);

        return ;

        fflush(stdin);
    }

    else if(choice==3)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        bt3=20*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
        breakfast();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tONION DOSA       \t\t%d\t\t\t\t%.2f\n\n",qty,bt3);

        return ;

        fflush(stdin);
    }

    else if(choice==4)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        bt4=25*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
        breakfast();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tIDLI AND VADA    \t\t%d\t\t\t\t%.2f\n\n",qty,bt4);
        return ;

        fflush(stdin);
    }

    else if(choice==5)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        bt5=20*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
        breakfast();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tCHAPATI AND CURRY\t\t%d\t\t\t\t%.2f\n\n",qty,bt5);

        return ;

        fflush(stdin);
    }

     else if(choice==6)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        bt6=30*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
        breakfast();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tPOORI BHAJI  \t\t\t%d\t\t\t\t%.2f\n\n",qty,bt6);

        return ;

        fflush(stdin);
    }

    else if(choice==7)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        bt7=20*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
        breakfast();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tUPMA    \t\t\t%d\t\t\t\t%.2f\n\n",qty,bt7);//total is not proper

        return ;
        fflush(stdin);
    }
}
void lunch()
{

   int choice=0,qty=0,again=0;
    //int n;

    //fflush(stdin);

    printf("\n\n\t\t\t-----------------------------------------------\n");
    printf("\t\t\t|                  LUNCH                      |\n");
    printf("\t\t\t-----------------------------------------------\n");
    printf("\t\t\t|SL.NO   |  ITEM                   |PRICE     |\n");
    printf("\t\t\t|.............................................|\n");
    printf("\t\t\t|   01   |  CHICKEN BIRYANI         | 50(1PT) |\n");
    printf("\t\t\t|   02   |  MUTTON BIRYANI          | 80(1PT) |\n");
    printf("\t\t\t|   03   |  EGG BIRYANI             | 40(1PT) |\n");
    printf("\t\t\t|   04   |  CHICKEN FRIED RICE      | 35(1PT) |\n");
    printf("\t\t\t|   05   |  CHICKEN KEBAB           | 50(1PT) |\n");
    printf("\t\t\t|   06   |  CHICKEN NOODLES         | 30(1PT) |\n");
    printf("\t\t\t|   07   |  NON VEG THALI           | 60(1PT) |\n");
    printf("\t\t\t-----------------------------------------------\n");
    printf("\t\t\t-----------------------------------------------\n");
    printf("\n\n\t\t\tType in the SL.NO of the food you want to order\n");
    scanf("%d",&choice);

    if(choice==1)
    {

        printf("\tENTER QUANTITY :\n");
        scanf("%d",&qty);
        lt1=50*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
        lunch();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tCHICKEN BIRYANI         \t%d\t\t\t\t%.2f\n\n",qty,lt1);

        return ;

        fflush(stdin);
    }

    else if(choice==2)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        lt2=80*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
       lunch();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tMUTTON BIRYANI        \t\t%d\t\t\t\t%.2f\n\n",qty,lt2);

        return ;

        fflush(stdin);
    }

    else if(choice==3)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        lt3=40*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
        lunch();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tEGG BIRYANI       \t\t%d\t\t\t\t%.2f\n\n",qty,lt3);

        return ;

        fflush(stdin);
    }

    else if(choice==4)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        lt4=35*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3] ");
        scanf("%d",&again);

        if(again==1)
        lunch();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tCHICKEN FRIED RICE    \t\t%d\t\t\t\t%.2f\n\n",qty,lt4);
        return ;

        fflush(stdin);
    }

    else if(choice==5)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        lt5=50*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
        lunch();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tCHICKEN KEBAB\t\t\t%d\t\t\t\t%.2f\n\n",qty,lt5);

        return ;

        fflush(stdin);
    }

     else if(choice==6)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        lt6=30*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
        lunch();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tCHICKEN NOODLES \t\t%d\t\t\t\t%.2f\n\n",qty,lt6);

        return ;

        fflush(stdin);
    }

    else if(choice==7)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        lt7=60*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
        lunch();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tNON VEG THALI   \t\t%d\t\t\t\t%.2f\n\n",qty,lt7);//total is not proper

        return ;
        fflush(stdin);
    }
}


void beverages()
{

   int choice=0,qty=0,again=0;
    //int n;

    //fflush(stdin);

    printf("\n\n\t\t\t-----------------------------------------------\n");
    printf("\t\t\t|                  BEVERAGES                  |\n");
    printf("\t\t\t-----------------------------------------------\n");
    printf("\t\t\t|SL.NO   |  ITEM                   |PRICE     |\n");
    printf("\t\t\t|.............................................|\n");
    printf("\t\t\t|   01   |  SOFT DRINKS            | 20(1GLS) |\n");
    printf("\t\t\t|   02   |  MINERAL WATER          | 10(1GLS) |\n");
    printf("\t\t\t|   03   |  SMOOTHIE               | 40(1GLS) |\n");
    printf("\t\t\t|   04   |  FALOODA                | 35(1GLS) |\n");
    printf("\t\t\t|   05   |  FRUIT JUICE            | 30(1GLS) |\n");
    printf("\t\t\t|   06   |  LIME SODA              | 30(1GLS) |\n");
    printf("\t\t\t|   07   |  COFFEE/TEA/MILK        | 20(1GLS) |\n");
    printf("\t\t\t-----------------------------------------------\n");
    printf("\t\t\t-----------------------------------------------\n");
    printf("\n\n\t\t\tType in the SL.NO of the drink you want to order\n");
    scanf("%d",&choice);

    if(choice==1)
    {

        printf("\tENTER QUANTITY :\n");
        scanf("%d",&qty);
        be1=20*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
        beverages();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\tCOST\n");
            printf("\n");
            printf("\tSOFT DRINKS        \t\t%d\t\t\t\t%.2f\n\n",qty,be1);

        return ;

        fflush(stdin);
    }

    else if(choice==2)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        be2=10*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
       beverages();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tMINERAL WATER        \t\t%d\t\t\t\t%.2f\n\n",qty,be2);

        return ;

        fflush(stdin);
    }

    else if(choice==3)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        be3=40*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3] ");
        scanf("%d",&again);

        if(again==1)
        beverages();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tSMOOTHIE     \t\t\t%d\t\t\t\t%.2f\n\n",qty,be3);

        return ;

        fflush(stdin);
    }

    else if(choice==4)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        be4=35*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
        beverages();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tFALOODA   \t\t\t%d\t\t\t\t%.2f\n\n",qty,be4);
        return ;

        fflush(stdin);
    }

    else if(choice==5)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        be5=30*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
        beverages();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tFRUIT JUICE\t\t\t%d\t\t\t\t%.2f\n\n",qty,be5);

        return ;

        fflush(stdin);
    }

     else if(choice==6)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        be6=30*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
        beverages();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tLIME SODA \t\t\t%d\t\t\t\t%.2f\n\n",qty,be6);

        return ;

        fflush(stdin);
    }

    else if(choice==7)
    {

        printf("\tENTER QUANTITY :");
        scanf("%d",&qty);
        be7=20*qty;
        printf("\n\tWould you like to order something else from this menu?\n\t If YES press [1] \n\t If you want to choose from any other category press [2] \n\t If you want to EXIT press[3]");
        scanf("%d",&again);

        if(again==1)
        beverages();
        else if(again==2)
            mm();
        else
            printf("\n\n\tITEM\t\t\t\tQUANTITY\t\t\tCOST\n");
            printf("\n");
            printf("\tCOFFEE/TEA/MILK   \t\t%d\t\t\t\t%.2f\n\n",qty,be7);//total is not proper

        return ;
        fflush(stdin);
    }
}


void bill()
{  total1=st1+st2+st3+st4+st5+st6+st7;
   total2=bt1+bt2+bt3+bt4+bt5+bt6+bt7;
   total3=lt1+lt2+lt3+lt4+lt5+lt6+lt7;
   total4=be1+be2+be3+be4+be5+be6+be7;
   float t=total1+total2+total3+total4;
   printf("\tYOUR BILL IS = %.2f\n",t);
   printf("\n");
   done();
}

void done()
{
    printf("\n\n\t TTTTTTTTT  H     H    AAAA    N      N  K    K      Y       Y   OOOOO   U     U  \n");
    printf("\t     T      H     H   A    A   N N    N  K   K        Y     Y   O     O  U     U  \n");
    printf("\t     T      H     H  A      A  N  N   N  K  K          Y   Y    O     O  U     U  \n");
    printf("\t     T      HHHHHHH  AAAAAAAA  N   N  N  KKK            Y Y     O     O  U     U  \n");
    printf("\t     T      H     H  A      A  N    N N  K  K            Y      O     O  U     U  \n");
    printf("\t     T      H     H  A      A  N     NN  K   K           Y      O     O  U     U  \n");
    printf("\t     T      H     H  A      A  N      N  K    K          Y       OOOOO    UUUUU   \n");

}
