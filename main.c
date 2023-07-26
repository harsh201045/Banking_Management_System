#include<stdio.h>
#include<string.h>
void fun();
void fun1();
void fun2();
void let(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}

int main()
{
    char a,a1,a2,n[30],n1[11]="12-11-2003",n2[30],n3[50]="Harsh Pabani",n4[30],
           u[14],u1[14],u2[15]="3456 2121 1234",u3[14],b,b1,b2,t6[20]="codewithc123",t7[20],t9[20]
           ,t10[20],t11[20];
    int m,m1=0,m2,y,y1,y2,y3,i,i1=0,i2=0,a3=0,a5=0,a7=0,m5,m6,m7,c=45334,c1=30000,
        c2,i3=0,v1,v2,v5,v6,p1,p2,p3,i4=1,j,k,i10=0,i11=0,i6=0,i7=0,p4=0,m9,
        k2=0,k3=0,k4=0,i15=0,k5=0,i16=0,i17=0,i18=0,t,t1=0,t2,t3=1,p,m10=0,t8,t12,d;
    long long int m3=23534578786,m4,a4,a6,a8,a9,k1,m8,a10,t4=9658742356,t5;
    printf("\n\t\t\t\t*WELCOME TO SBI WORLD..");
    printf("\n\t\t\t\t-----------------------");
    printf("\n\n\n");
    printf("\t\t*you are already exist customer(yes/no)_?");
    scanf("%c%c%c",&a,&a1,&a2);
    if(a=='y'&&a1=='e'&&a2=='s')
    {
        a3++;
        printf("\n\n\t\t\t*Enter your account number(account number in 11 digit)_:-");
        scanf("%lld",&a6);
        printf("\n\n\t\t\t*Your online banking password is_:-%s",t6);
        printf("\n\t\t\t---------------------------------------------------");
        printf("\n\n\t\t\t*Please note it down,it is useful..");
        printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
        scanf("%d",&t2);
    }
    else
    {
        a3=0;
        a6=23534578786;
    }
    for(m=0;m<=100;m++)
    {
        if(i11>=1)
            break;
    while(a3>=1)
    {
        if(i1==0)
        {
            m6=a6;
            m7=a6;
        }
        else
            m7=a6;
            i1++;
        if(a6==m4)
        {
            printf("\n\n\t\t\tLOADING");
        for(i=0;i<=6;i++)
        {
            let(100000000);
            printf(".");
        }
        system("cls");
        system("color 2");
        printf("\n\n\t\t\t\t\t\t-----------------------");
        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\t\t\t\t\t\t-----------------------");
        printf("\n\n");
        printf("\n\t\t(1) *Want to entry on your passbook?");
        printf("\n\t\t(2) *you want to add money in your Bank account.");
        printf("\n\t\t(3) *you want to withdrawal money from your bank account. ");
        printf("\n\t\t(4) *view your bank account detail.");
        printf("\n\t\t(5) *Update information of your bank account.");
        printf("\n\t\t(6) *Transactions.");
        printf("\n\t\t(7) *Exit.");
        i10=0;
        printf("\n\t\t\t*Enter your choice_:-");
        scanf("%d",&m5);
        switch(m5)
        {
            case(1):for(t=0;t<=20;t++)
                    {
                        printf("\n\t\t*Enter your account number_:-");
                        scanf("%lld",&a8);
                        system("color 3");
                    if(a8==a6)
                    {
                        if(i2==0)
                        {
                            if(i6==0)
                            {
                                printf("\n\t\t*Your balance now is_:%d",a5);
                                printf("\n\t\t-----------------------------");
                                printf("\n\t\t*you add %d rs. in your bank account.",a4);
                                printf("\n\t\t-------------------------------------");
                        break;
                            }
                            else
                            {
                                printf("\n\t\t*Your balance now is_:%d",a5);
                                printf("\n\t\t--------------------------");
                                printf("\n\t\t*At last time you add %d rs. in your bank account.",a4);
                                printf("\n\t\t---------------------------------------------------");
                                printf("\n\t\t*After you withdraw %d rs. from your bank account..",v6);
                                printf("\n\t\t-------------------------------------------------------");
                                break;
                            }

                        }
                        else
                        {
                            if(i6==0 ||i18>=1)
                            {
                                printf("\n\t\t*Your balance now is_:%d",a5);
                                printf("\n\t\t---------------------------");
                                printf("\n\t\t*At last time you add %d rs. in your bank account.",a4);
                                printf("\n\t\t---------------------------------------------------");
                                printf("\n\t\t*And after...");
                                printf("\n\t\t*You transfer %d money in %lld account.",a10,m8);
                                printf("\n\t\t----------------------------------------");
                                break;
                            }
                            else
                            {
                                  printf("\n\t\t*Your balance now is_:%d",a5);
                                  printf("\n\t\t-------------------------");
                                  printf("\n\t\t*At last time you add %d rs. in your bank account.",a4);
                                  printf("\n\t\t---------------------------------------------------");
                                  printf("\n\t\t*After you withdraw %d rs. from your bank account..",v6);
                                  printf("\n\t\t-------------------------------------------------------");
                                  break;
                            }
                        }
                    }
                    else
                        printf("\n\t\t*You entered wrong account number..");
                    }
                     printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                    break;
           case(2):system("color 7");
                   printf("\n\t\t*How many money you want to add in your bank account_:-");
                   scanf("%d",&a4);
                   a5=a5+a4;
                   printf("\n\t\t*now your current balance in you bank account %lld is %d rs.",a6,a5);
                   printf("\n\t\t------------------------------------------------------------");
                    printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                   break;
           case(3): printf("\n\t\t\t*which option you want to choose for withdraw money..");
                    printf("\n\n\t\t(1) via check..");
                    printf("\n\t\t(2) via ATM..");
                    printf("\n\n\t\t\t*Enter your choice__:-");
                    scanf("%d",&t8);
                    if(t8==1)
                    {
                        system("color 9");
                        printf("\n\n\t\t*enter today's date_:-");
                        scanf("%s",t10);
                    for(t12=0;t12<15;t12++)
                       {
                            printf("\n\n\t\t*Enter your password_:-");
                            scanf("%s",t11);
                       if(strcmp(t11,t6)==0)
                           break;
                           else
                           {
                               printf("\n\n\t\t*you entered wrong password,renter your password..");
                           }
                       }
                            printf("\n\n\t------------------------------------------------------------------------------");
                            printf("\n\t|                                                                             |");
                            printf("\n\t|*Account no.%lld                                                      |",a6);
                            printf("\n\t|                                                                             |");
                            printf("\n\t|                                                         *DATE_:-%s|",t10);
                            printf("\n\t|                                                                             |");
                            printf("\n\t|*Account holder name_:-");
                       if(i17==0)
                        {
                        for(p=0;p<=(m10-1);p++)
                            printf("%c",n[p]);
                        }
                        else
                        {
                        for(i=0;i<m1;i++)
                            printf("%c",n3[i]);
                        }
                                printf("\n\t|                                                                             |");
                                printf("\n\t|                                                                             |");
                                printf("\n\t|*Enter amount you want to withdraw_:-");
                                scanf("%d",&d);
                                printf("\n\t|                                                                             |");
                                printf("\n\t------------------------------------------------------------------------------");
                                printf("\n\n\t\t\tLOADING");
                        for(i=0;i<=6;i++)
                        {
                            let(100000000);
                            printf(".");
                        }
                        if(d<=(a5-500))
                        {
                            v6=d;
                            a5=a5-v6;
                            i6++;
                            i18=0;
                            printf("\n\n\t\t\t*You withdraw %d rs. from your bank account successfully..",v6);
                            printf("\n\n\t\t\t*Now money in your bank account is_:-%lld",a5);
                        }
                        else
                        {
                            printf("\n\n\t\t\t*Your check is bounce..");
                        }
                        printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                        scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                    }
                   else
                    {
                    if(i10>=1)
                    break;
                    else
                    {
                    printf("\n");
                    printf("                                || HELLO SIR! WELCOME || ");
                    printf("\n\n * Please enter your card: ");
                    printf("\n\n -------------------------");
                    while(t3!=0)
                    {
                        if(i10>=1)
                            break;
                            if(t1>=1)
                           {
                                printf("\n\n\t\t*You want to go to main menu...(yes=1 & no=0)_:-");
                                scanf("%d",&t2);
                            if(t2==1)
                            {   t1=0;
                                break;
                            }
                          }

                    i4++;
                    printf("\n\n\n * Have you enter your card ? (YES=1 / NO=0)__");
                    scanf("%d",&v2);
                    if(v2==1)
                    {
                        printf("\n");
                        printf("\n          HI!PLEASE DO NOT REMOVE YOUR CHIP CARD.");
                        printf("\n              LEAVE YOUR CARD INSERTED DURING");
                        printf("\n");
                        printf("\n\n * Thank you sir !.");
                        printf("\n--------------------");
                        printf("\n\n\n        Welcome!");
                        printf("\n      ------------");
                        printf("\n\n\t\t\t-----------------------");
                        printf("\n\t\t\xB2\xB2\xB2\xB2\xB2  MAIN MENU OF ATM SYSTEM.. \xB2\xB2\xB2\xB2\xB2");
                        printf("\n\t\t\t-----------------------");
                        system("color 9");
                        printf("\n\n\n        1.Check balance.");
                        printf("\n\n        2.Banking.");
                        printf("\n\n        3.Exit.");
                        t1++;
                        printf("\n\n\n * Enter the number what do you want.");
                        scanf("%d",&v1);
                    switch(v1)
                    {


                    case 1: printf("\n\n * you can check your balance.");
                            printf("\n-----------------------------");
                            printf("\n\n        WELCOME!");
                            for(k=0;k<=5;k++)
                            {
                            printf("\n\n\n * Enter you saving bank account number.__");
                            scanf("%lld",&k1);
                            if(a6==k1)
                            {
                            printf("\n\n\n * Your balance is_%d",a5);
                            printf("\n----------------------------");
                            printf("\n\n\n * Please remove your card.");
                            printf("\n----------------------------");
                            printf("\n\n\n                        THANK YOU SIR! ");
                            printf("\n                       ----------------");
                            break;
                            }
                            else
                            printf("\n\n\n * You entered wrong account number.");
                            }
                            break;

                    case 2: printf("\n\n * You can do banking.");
                            printf("\n-----------------------");
                            printf("\n\n         WELCOME! BANKING");
                            printf("\n       --------------------");
                            printf("\n");
                            printf("\n\n              1.withdraw.");
                            printf("\n\n              2.change pin.");
                            printf("\n\n * Enter the number what do you want:__");
                            scanf("%d",&v5);
                            if(v5==1)
                            {
                                printf("\n\n * Money in your bank account is_:-%d",a5);
                            for(t8=0;t8<15;t8++)
                            {
                                printf("\n\n * Enter amount do you want to withdraw:_");
                                scanf("%d",&v6);
                            if(v6<=(a5-500))
                            {
                                printf("\n\n * Enter your 4 digit pin:__");
                                scanf("%d",&p1);
                                printf("\n\n\n* Your transation is being processed.please wait....");
                                printf("\n------------------------------------------------------");
                                printf("\n\n\n * you can success withdraw %d rupees.",v6);
                                i6++;
                                i18=0;
                                printf("\n----------------------------------------");
                                a5=a5-v6;
                                printf("\n\n\n* Your current balance is : %d",a5);
                                printf("\n-----------------------------------------");
                                printf("\n\n THANK YOU SIR !");
                                printf("\n ------------------");
                                i2++;
                                break;

                           }
                            else
                           {
                                printf("\n\n\t\t\t*In your bank account not sufficient money..");
                                printf("\n\t\t\t------------------------------------------------");
                            continue;
                            }
                            }
                                break;
                            }
                            else if(v5==2)
                            {
                                printf("\n\n\n* Enter your old 4 digit pin:_");
                                scanf("%d",&p1);
                        for(i4=0; i4<=6; i4++)
                        {
                            printf("\n\n* Enter your new 4 digit pin:__");
                            scanf("%d",&p2);
                                printf("\n\n* REenter your new 4 digit pin:__");
                        scanf("%d",&p3);
                        if(p2==p3)
                            {
                                printf("\n\n* Your pin has been successfully change.");
                                printf("\n--------------------------------------");
                                p1==p2;
                                break;
                            }
                        else
                                printf("\n\n* Your pin has been not change,Please recheck");
                                printf("\n---------------------------------------------");
                        }
                        }
                        break;
                    default:i10++;
                            break;
                    }
                    }

                    else if(v2==0)
                        printf("\n\n* Your card is not read by ATM,Please REenter your card.");
                        printf("\n\n---------------------------------------------------------");
                    }
                    }
                    }
            break;
           case(4):printf("\n");
                   system("color 5");
                   printf("\n\t\t* your bank account number is_:-%lld",a6);
                   printf("\n\n\t\t\t*Your name is_-:-_");
                   if(i17==0)
                    {
                        for(p=0;p<=(m10-1);p++)
                            printf("%c",n[p]);
                    }
                    else
                    {
                    for(i=0;i<m1;i++)
                        printf("%c",n3[i]);
                    }
                        printf("\n\n\t\t\t*your birthdate is_:-");
                        printf("%s",n1);
                        printf("\n\n\t\t\t*your adharcard number is_:-");
                    if(i16==0)
                    {
                      for(i=1;i<=15;i++)
                        printf("%c",u[i]);
                    }
                    else
                    {
                    for(i=1;i<=15;i++)
                        printf("%c",u2[i]);
                    }
                        printf("\n\n\t\t\t*your mobile no.is_:-%lld",t4);

                        printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                    break;
           case(5):system("color 6");
                   printf("\n\t\t*What you want to update_?");
                   printf("\n\n\t\t*(1) Name..");
                   printf("\n\t\t*(2) adharcard number..");
                   printf("\n\t\t*(3) mobile number..");
                   printf("\n\t\t*(4) password..");
                   printf("\n\n\t\t*Enter your choice_:-");
                   scanf("%d",&y3);
                   if(y3==1)
                   {
                   printf("\n\t\t*Enter your old name_:-");
                   m1=0;
                   for(i=0;i<=30;i++)
                   {
                   scanf("%c",&n2[i]);
                   y1=n2[i];
                   m1++;
                   if(y1==10 && m1>3)
                   break;
                   }
                   m1=0;
                   k3++;
                       printf("\n\t\t*Enter your new name_:-");
                       for(i=0;i<=30;i++)
                       {
                        scanf("%c",&n3[i]);
                        y2=n3[i];
                        m1++;
                        i17++;
                        if(y2==10 && m1>3)
                        break;
                       }
                       m9=m1;
                       printf("\n\t\tyour updated new name is_:");
                        for(i=0;i<m1;i++)
                        printf("%c",n3[i]);
                        printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                        break;
                        break;
                        break;
                   }
                   else if(y3==2)
                   {
                       printf("\n\t\t*Enter your last adharcard number_:-");
                       fun1(u1,14);
                       printf("\n\t\t*Enter new adharcard number_:-");
                       fun2(u2,14);
                       k2++;
                       i16++;
                       printf("\n\t\t");
                       printf("*Your newly updated adharcard number is_:-");
                       for(i=1;i<=15;i++)
                       printf("%c",u2[i]);
                       printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                   }
                   else if(y3==3)
                   {
                       printf("\n\t\t*Enter your last mobile number_:-");
                       scanf("%lld",&t5);
                       printf("\n\n\t\t*Enter your new mobile number_:-");
                       scanf("%lld",&t4);
                       printf("\n\n\t\t*your new updated mobile number is_:-%lld",t4);
                        printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                   }
                   else
                    {
                        for(t8=0;t8<15;t8++)
                        {
                        printf("\n\n\t\t*Enter your last password_:-");
                        scanf("%s",t9);
                        if(strcmp(t9,t6)==0)
                        {
                            printf("\n\n\t\t*Enter new password_:-");
                            scanf("%s",t7);
                            printf("\n\n\t\t*Your updated new password is_:-%s",t7);
                            strcpy(t6,t7);
                            break;
                        }
                        else
                        {
                            printf("\n\n\t\t*You enter wrong password please renter your password..");
                        }
                        }
                         printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                    }
                   break;
            case(6):system("color 6");
                    printf("\n\t\t*In your bank account current balance is_:-%d",a5);
                    printf("\n\t\t----------------------------------------------");
                    for(i=0;i<=5;i++)
                    {
                    printf("\n\n\t\t*How many money you want to transfer_:-");
                    scanf("%lld",&a10);
                    for(t12=0;t12<15;t12++)
                       {
                       printf("\n\n\t\t*Enter your password_:-");
                       scanf("%s",t11);
                       if(strcmp(t11,t6)==0)
                           break;
                           else
                           {
                               printf("\n\n\t\t*you entered wrong password,renter your password..");
                           }
                       }
                    if((a5-500)>a10)
                    {
                        for(t8=0;t8<15;t8++)
                        {
                        printf("\n\t\t*Enter account number in which you want to transfer money_:-");
                        scanf("%lld",&m8);
                        if(m8 != a6)
                        {
                             printf("\n\n\t\t\tLOADING");
                            for(i=0;i<=6;i++)
                            {
                            let(100000000);
                            printf(".");
                            }
                        printf("\n\t\t*your Transaction is done very well..");
                        printf("\n\t\t--------------------------------------");
                        printf("\n\t\t*Now money in your bank account is_:-%d",(a5-a10));
                        printf("\n\t\t----------------------------------------");
                        a5=a5-a10;
                        i2++;
                        i18++;
                        break;
                        }
                        else
                        {
                            printf("\n\n\t\t*You can't transfer money from your bank account to your bank account..");
                            printf("\n\t\t----------------------------------------------------------------------------");
                            printf("\n\n\t\t*please enter proper bank account..");
                            printf("\n\t\t----------------------------------------");
                        }
                        }
                    }
                    else
                    {
                        printf("\n\n\t\t*In your bank account not sufficient balance..");
                        printf("\n\t\t-------------------------------------------");
                        printf("\n\t\t*Please Renter transfer money..");
                        printf("\n\t\t------------------------------");
                    }
                    }
                     printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                    break;
                default:i11++;
                        break;
        }
        break;
        }
        else if(a7==0 &&m7==m6)
        {
        printf("\n\n\t\t\tLOADING");
        for(i=0;i<=6;i++)
        {
            let(100000000);
            printf(".");
        }
        system("cls");
        system("color 9");
        printf("\n\n\t\t\t\t\t\t-----------------------");
        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\t\t\t\t\t\t-----------------------");
        printf("\n\n");
        printf("\n\t\t(1) *Want to entry on your passbook?");
        printf("\n\t\t(2) *you want to add money in your Bank account.");
        printf("\n\t\t(3) *you want to withdrawal money from your bank account.");
        printf("\n\t\t(4) *view your bank account detail.");
        printf("\n\t\t(5) *Update information of your bank account.");
        printf("\n\t\t(6) *Transactions.");
        printf("\n\t\t(7) *Exit.");
        i10=0;
        printf("\n\t\t\t Enter your choice_:-");
        scanf("%d",&m5);
        switch(m5)
        {
            case(1):  for(t=0;t<=20;t++)
                    {
                    system("color 2");
                    printf("\n\n\t\t*Enter your bank account number_:-");
                    scanf("%lld",&a9);
                    if(a6==a9)
                    {
                        if(i3==0)
                        {
                            if(i7==0)
                            {
                        printf("\n\t\t*balance in your account is_:-%d",c);
                        printf("\n\t\t-----------------------------------");
                        printf("\n\t\t*at last time you add %d in your bank account,",c1);
                        printf("\n\t\t-----------------------------------------------");
                        break;
                            }
                            else
                            {
                                printf("\n\t\t*balance in your account is__%d",c);
                                printf("\n\t\t-------------------------------");
                                printf("\n\t\t*At last time you add %d rs. in your bank account.",c1);
                                  printf("\n\t\t---------------------------------------------------");
                                  printf("\n\t\t*After you withdraw %d rs. from your bank account..",v6);
                                  printf("\n\t\t-------------------------------------------------------");
                                  break;
                            }
                        }
                        else
                        {
                            if(i7==0 || i18>=1)
                            {
                           printf("\n\t\t*Your balance now is_:%d",c);
                           printf("\n\t\t-------------------------");
                           printf("\n\t\t*you add %d rs. in your bank account.",c1);
                           printf("\n\t\t----------------------------------------");
                           printf("\n\t\t*And after...");
                           printf("\n\t\t*You transfer %d money in %lld account.",c2,m8);
                           printf("\n\t\t-----------------------------------------------");
                           break;
                            }
                           else
                           {
                                printf("\n\t\t*balance in your account is__%d",c);
                                printf("\n\t\t-----------------------------------");
                                printf("\n\t\t*At last time you add %d rs. in your bank account.",c1);
                                printf("\n\t\t---------------------------------------------------");
                                printf("\n\t\t*After you withdraw %d rs. from your bank account..",v6);
                                printf("\n\t\t-------------------------------------------------------");
                                break;
                           }
                        }
                    }
                    else
                        printf("\n\t\t*You entered wrong account number..");
                    }
                     printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                    break;
            case(2):system("color 3");
                    printf("\n\t\t*How many money you want to add in your bank account_:-");
                    scanf("%d",&c1);
                    c=c+c1;
                    printf("\n\t\t*Now your current balance in you bank account %lld is %d rs.",a6,c);
                    printf("\n\t\t-----------------------------------------------------------------");
                     printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                    break;
            case(3):printf("\n\t\t\t*which option you want to choose for withdraw money..");
                    printf("\n\n\t\t(1) via check..");
                    printf("\n\t\t(2) via ATM..");
                    printf("\n\n\t\t\t*Enter your choice__:-");
                    scanf("%d",&t8);
                    if(t8==1)
                    {
                        system("color 6");
                        printf("\n\n\t\t*enter today's date_:-");
                       scanf("%s",t10);
                       for(t12=0;t12<15;t12++)
                       {
                       printf("\n\n\t\t*Enter your password_:-");
                       scanf("%s",t11);
                       if(strcmp(t11,t6)==0)
                           break;
                           else
                           {
                               printf("\n\n\t\t*you entered wrong password,renter your password..");
                           }
                       }
                       printf("\n\n\t------------------------------------------------------------------------------");
                       printf("\n\t|                                                                             |");
                       printf("\n\t|*Account no.%lld",a6);
                       printf("\n\t|                                                                             |");
                       printf("\n\t|                                                         *DATE_:-%s|",t10);
                       printf("\n\t|                                                                             |");
                       printf("\n\t|*Account holder name_:-");
                       if(i17==0)
                        printf("%s",n3);
                        else
                        {
                        for(i=0;i<m1;i++)
                        printf("%c",n3[i]);
                        }
                        printf("\n\t|                                                                             |");
                        printf("\n\t|                                                                             |");
                        printf("\n\t|*Enter amount you want to withdraw_:-");
                        scanf("%d",&d);
                        printf("\n\t|                                                                             |");
                        printf("\n\t------------------------------------------------------------------------------");
                        printf("\n\n\t\t\tLOADING");
                        for(i=0;i<=6;i++)
                        {
                        let(100000000);
                        printf(".");
                        }
                        if(d<=(c-500))
                        {
                            v6=d;
                         c=c-v6;
                         i7++;
                         i18=0;
                        printf("\n\n\t\t\t*You withdraw %d rs. from your bank account successfully..",v6);
                        printf("\n\n\t\t\t*Now money in your bank account is_:-%lld",c);
                        }
                        else
                        {
                            printf("\n\n\t\t\t*Your check is bounce..");
                        }
                        printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                    }
                    else
                    {
                    if(i10>=1)
                    break;
                    else
                    {
                    printf("\n");
                    printf("                                || HELLO SIR! WELCOME || ");
                    printf("\n\n * Please enter your card: ");
                    printf("\n\n ---------------------------");
                    while(t3!=0)
                    {
                        if(i10>=1)
                            break;
                            if(t1>=1)
                        {
                            printf("\n\n\t\t*You want to go to main menu...(yes=1 & no=0)_:-");
                            scanf("%d",&t2);
                            if(t2==1)
                            {   t1=0;
                                break;
                            }
                        }
                    i++;
                    printf("\n\n\n * Have you enter your card ? (YES=1 / NO=0)__");
                    scanf("%d",&v2);
                    if(v2==1)
                    {
                    printf("\n");
                    printf("\n          HI!PLEASE DO NOT REMOVE YOUR CHIP CARD.");
                    printf("\n              LEAVE YOUR CARD INSERTED DURING");
                    printf("\n                  THE ENTIRE TRANSACTION.");
                    printf("\n");
                    printf("\n\n * Thank you sir !.");
                    printf("\n--------------------");
                    printf("\n\n\n        Welcome!");
                    printf("\n      ------------");
                      printf("\n\n\t\t\t-----------------------");
                    printf("\n\t\t\xB2\xB2\xB2\xB2\xB2  MAIN MENU OF ATM SYSTEM.. \xB2\xB2\xB2\xB2\xB2");
                    printf("\n\t\t\t-----------------------");
                    system("color 6");
                    printf("\n\n\n        1.Check balance.");
                    printf("\n\n        2.Banking.");
                    printf("\n\n        3.Exit.");
                    t1++;
                    printf("\n\n\n * Enter the number what do you want.");
                    scanf("%d",&v1);
                    switch(v1)
                    {
                    case 1: printf("\n\n * you can check your balance.");
                            printf("\n-----------------------------");
                            printf("\n\n        WELCOME!");
                            for(k=0;k<=5;k++)
                            {
                            printf("\n\n\n * Enter you saving bank account number.__");
                            scanf("%lld",&k1);
                            if(k1==a6)
                            {
                            printf("\n\n\n * Your balance is_%d",c);
                            printf("\n----------------------------");
                            printf("\n\n\n * Please romove your card.");
                            printf("\n----------------------------");
                            printf("\n\n\n                        THANK YOU SIR! ");
                            printf("\n                       ----------------");
                                break;
                            }
                            else
                                printf("\n\n\n * You entered wrong account number.");
                                printf("\n\n\n -----------------------------------");
                            }
                            break;

                    case 2: printf("\n\n * You can do banking.");
                            printf("\n-----------------------");
                            printf("\n\n         WELCOME! BANKING");
                            printf("\n       --------------------");
                            printf("\n");
                            printf("\n\n              1.withdrawal.");
                            printf("\n\n              2.change pin.");
                            printf("\n\n * Enter the number what do you want:__");
                            scanf("%d",&v5);

                            if(v5==1)
                                {
                                printf("\n\n * Money in your bank account is_:-%d",c);
                                for(t8=0;t8<15;t8++)
                               {
                                printf("\n\n * Enter amount do you want to withdraw:_");
                                scanf("%d",&v6);
                                if(v6<=(c-500))
                                {
                                printf("\n\n * Enter your 4 digit pin:__");
                                scanf("%d",&p1);
                                printf("\n\n\n Your transation is being processed.please wait....");
                                printf("\n------------------------------------------------------");
                                printf("\n\n\n * you can success withdraw %d rupees.",v6);
                                i7++;
                                i18=0;
                                printf("\n----------------------------------------");
                                c=c-v6;
                                printf("\n\n\nYour current balance is : %d",c);
                                printf("\n-----------------------------------------");
                                printf("\n\n THANK YOU SIR !");
                                printf("\n ------------------");
                                break;
                                }
                                else
                                {
                                printf("\n\n\t\t\t*In your bank account not sufficient money..");
                                printf("\n\t\t\t------------------------------------------------");
                                }
                                }
                                break;
                                }
                                else if(v5==2)
                                {
                                printf("\n\n\n Enter your old 4 digit pin:_");
                                scanf("%d",&p1);
                                for(i4=0; i4<=6; i4++)
                                {
                                printf("\n\n Enter your new 4 digit pin:__");
                                scanf("%d",&p2);
                                printf("\n\n REenter your new 4 digit pin:__");
                                scanf("%d",&p3);
                                if(p2==p3)
                                {
                                printf("\n\n Your pin has been successfully change.");
                                printf("\n\n -------------------------------------");
                                p1==p2;
                                break;
                                }
                            else
                                printf("\n\n Your pin has been not change,Please recheck");
                                printf("\n\n --------------------------------------------");
                            }
                            }
                            break;
                    default:i10++;
                            break;
                    }
                    }

            else if(v2==0)
            {
                printf("\n\n Your card is not read by ATM,Please REenter your card.");
                }
        }
            }
                    }

                   break;
            case(4):system("color 5");
                    printf("\n\t\t\t*your account number is_:-%lld",a6);
                    printf("\n\n\t\t\t*Your name is_-:-_");
                     if(i17==0)
                    printf("%s",n3);
                    else
                    {
                    for(i=0;i<m1;i++)
                        printf("%c",n3[i]);
                    }
                    printf("\n\n\t\t\t*your birthdate is_:-");
                    printf("%s",n1);
                    printf("\n\n\t\t\t*your adharcard number is_:-");
                    if(i15==0)
                    {
                    for(i=0;i<=14;i++)
                    printf("%c",u2[i]);
                    }
                    else
                    {
                    for(i=1;i<=15;i++)
                    printf("%c",u2[i]);
                    }
                    printf("\n\n\t\t\t*your mobile number is_:-%lld",t4);
                    printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                    break;
            case(5):system("color 6");
                    printf("\n\t\t*What you want to update_?\n");
                   printf("\n\t\t*(1) Name..");
                   printf("\n\t\t*(2) adharcard number..");
                   printf("\n\t\t*(3) mobile number..");
                   printf("\n\t\t*(4) password");
                   printf("\n\t\t*Enter your choice_:-");
                   scanf("%d",&y3);
                   if(y3==1)
                   {
                   printf("\n\t\t*Enter your old name_:-");
                   m1=0;
                   for(i=0;i<=30;i++)
                   {
                   scanf("%c",&n2[i]);
                   y1=n2[i];
                   m1++;
                   if(y1==10 && m1>3)
                   break;
                   }
                   m1=0;
                       printf("\n\t\t*Enter your new name_:-");
                       for(i=0;i<=30;i++)
                       {
                        scanf("%c",&n3[i]);
                        y2=n3[i];
                        m1++;
                        k3++;
                        if(y2==10 && m1>3)
                        break;
                       }
                       i17++;
                       printf("\n\t\t*your updated new name is_:");
                        for(i=0;i<m1;i++)
                        printf("%c",n3[i]);
                        printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                        break;
                   }
                   else if(y3==2)
                   {
                       printf("\n\t\t*Enter your last adharcard number_:-");
                       fun1(u1,14);
                       printf("\n\t\t*Enter new adharcard number_:-");
                       fun2(u2,14);
                       k2++;
                       i15++;
                       printf("\n\t\t");
                       printf("*Your newly updated adhar card number is_:-");
                       for(i=1;i<=15;i++)
                       printf("%c",u2[i]);
                       printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                   }
                   else if(y3==3)
                   {
                       printf("\n\t\t*Enter your last mobile number_:-");
                       scanf("%lld",&t5);
                       printf("\n\n\t\t*Enter your new mobile number_:-");
                       scanf("%lld",&t4);
                       printf("\n\n\t\t*your new updated mobile number is_:-%lld",t4);
                        printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                   }
                   else
                   {

                        for(t8=0;t8<15;t8++)
                        {
                        printf("\n\n\t\t*Enter your last password_:-");
                        scanf("%s",t9);
                        if(strcmp(t9,t6)==0)
                        {
                            printf("\n\n\t\t*Enter new password_:-");
                            scanf("%s",t7);
                            printf("\n\n\t\t*Your updated new password is_:-%s",t7);
                            strcpy(t6,t7);
                            break;
                        }
                        else
                        {
                            printf("\n\n\t\t*You enter wrong password please renter your password..");
                        }
                        }
                         printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                   }
                   break;
            case(6):system("color 7");
                    printf("\n\t\t*In your bank account current balance is_:-%d",c);
                    for(i=0;i<=5;i++)
                    {
                    printf("\n\n\t\t*How many money you want to transfer_:-");
                    scanf("%d",&c2);
                    i18++;
                    for(t12=0;t12<15;t12++)
                       {
                       printf("\n\n\t\t*Enter your password_:-");
                       scanf("%s",t11);
                       if(strcmp(t11,t6)==0)
                           break;
                           else
                           {
                               printf("\n\n\t\t*you entered wrong password,renter your password..");
                           }
                       }
                    if((c-500)>c2)
                    {
                        for(t8=0;t8<15;t8++)
                        {
                        printf("\n\t\t*Enter account number in which you want to transfer money_:-");
                        scanf("%lld",&m8);
                        if(m8!=a6)
                        {
                             printf("\n\n\t\t\tLOADING");
                            for(i=0;i<=6;i++)
                            {
                            let(100000000);
                            printf(".");
                            }
                        printf("\n\t\t*your Transaction is done very well..");
                        printf("\n\t\t---------------------------------------");
                        printf("\n\t\t*Now money in your bank account is_:-%d",(c-c2));
                        printf("\n\t\t---------------------------------------------");
                        c=c-c2;
                        i3++;
                        break;
                        }
                         else
                        {
                            printf("\n\n\t\t*You can't transfer money from your bank account to your bank account..");
                            printf("\n\t\t----------------------------------------------------------------------------");
                            printf("\n\n\t\t*please enter proper bank account..");
                            printf("\n\t\t----------------------------------------\n");
                        }
                        }
                    }
                    else
                    {
                        printf("\n\t\t*In your bank account not sufficient balance..");
                        printf("\n\t\t----------------------------------------");
                        printf("\n\t\t*Please Renter transfer money..");
                        printf("\n\t\t--------------------------------");
                    }
                    }
                     printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
                    break;
                default:i11++;
                break;
        }
        break;
        }
        else
        printf("\n\t\t*you entered wrong account number.\n");
        printf("\n\t\t--------------------------------------");

    }
    while(a3==0)
    {
        printf("\n\t\t\tLOADING");
        for(i=0;i<=6;i++)
        {
            let(100000000);
            printf(".");
        }
        system("color 3");
        printf("\n\n\t\t\t*Create a new account..");
        printf("\n\t\t\t------------------------");
        printf("\n\n\t\t\t*Enter your name_:-");
        for(i=0;i<=30;i++)
        {
            scanf("%c",&n[i]);
            y=n[i];
            m10++;
            if(y==10 && m1>3)
                break;
            m1++;
        }
        m2=m1;
        m9=m1;
        m1=0;
        printf("\n\n\t\t\t*Enter your birthdate(dd-mm-yyyy)_:-");
        for(i=0;i<10;i++)
        {
            scanf("%c",&n1[i]);
        }
        printf("\n\n\t\t\t*Enter your adhar card number__");
        printf("\n\t\t\t\t(space between 4 digit and enter 12 digit number)_:-");
        fun(u,15);
        printf("\n\n\t\t\t*Enter your mobile number_:-");
        scanf("%lld",&t4);
        printf("\n\n\t\t\t*Creat your online banking password_:-");
        scanf("%s",t6);
        for(t8=0;t8<15;t8++)
        {
        printf("\n\n\t\t\t*Renter your password_:-");
        scanf("%s",t7);
        if(strcmp(t6,t7)!=0)
        {
            printf("\n\n\t\t*your password don't match,renter your password..");
            printf("\n\t\t-------------------------------------------------");
            continue;
        }
        else
        {
            printf("\n\n\t\t\t*Your password created successfully..");
            printf("\n\t\t\t-------------------------------------");
            break;
        }
        }
        printf("\n\n\t\t*Thanks for opening account in SBI.. ");
        printf("\n\t\t--------------------------------------");
        printf("\n\t\t*Your account number is:%lld",m3);
        m4=m3;
        if(m>=0)
        m3++;
        a3++;
        printf("\n\t\t*Please note it down your account number.");
        printf("\n\t\t*Add money in your bank account number:%lld",m4);
        printf("\n\t\t                                       -----------");
        printf("\n\t\t*Your current balance is:-_%d rs.",a5);
        printf("\n\t\t*How many money you want to add in your bank account_?");
        scanf("%lld",&a4);
        a5=a5+a4;
        printf("\n\t\t*Now your balance is_:-_%d rs.",a5);
        printf("\n\t\t                        -----------");
        printf("\n\t\t------------------------------------");
        printf("\n\n");
        a7++;
        printf("\n\n\t\t*press any number between(1 to 9) for go to main menu..._:-");
                            scanf("%d",&t2);
                            if(t2 !=0)
                            {
                              break;
                            }
}
}
 printf("\n\n\t\t\tLOADING");
        for(i=0;i<=6;i++)
        {
            let(100000000);
            printf(".");
        }
printf("\n\n\t\t *THANKS FOR VISITING SBI BRANCH... ");
printf("\n\n\t\t-------------------------------------");
}

void fun(char *u,int size)
{
    int i;
    for(i=0;i<=size;i++)
        scanf("%c",&u[i]);
}
void fun1(char *u1,int size)
{
    int i;
    for(i=0;i<=size;i++)
        scanf("%c",&u1[i]);
}
void fun2(char *u2,int size)
{
    int i;
    for(i=0;i<=size;i++)
        scanf("%c",&u2[i]);
}
