#include <stdio.h>
#include <stdlib.h>

//VARIABLE DECLARATION SECTION
int selection,days, van = 10000, suv = 8000, sedan = 5000;
float exchange,op, payment;

int main()

{
    printf("*************************         *********************     ***********        *******     *************************   \n");
    printf("**************************        *********************     ************       *******     *************************   \n");
    printf("***************************       *********************     *************      *******     *************************   \n");
    printf("*****            **********       *********************     **************     *******               *******           \n");
    printf("*****            **********       *******                   ***************    *******               *******           \n");
    printf("*****            **********       *******                   ****************   *******               *******           \n");
    printf("*****            **********       *******                   *****************  *******               *******           \n");
    printf("*****            *********        *******                   ********   ******* *******               *******           \n");
    printf("*************************         *********************     ********   ***************               *******           \n");
    printf("*************************         *********************     ********    **************               *******           \n");
    printf("**************************        *********************     ********     *************               *******           \n");
    printf("*****               *******       *******                   ********      ************               *******           \n");
    printf("*****                *******      *******                   ********       ***********               *******           \n");
    printf("*****                 *******     *********************     ********        **********               *******           \n");
    printf("*****                  *******    *********************     ********         *********               *******           \n");
    printf("*****                   *******   *********************     ********          ********               *******           \n");

                 //PRICING DISPLAY.
                 //printf("\n\n"); IS FOR LINE SPACING.

printf("\n\n");
     printf("\t\t\t*******************************************\n");

       printf("\t\t\t\t\tRENT PRICING\n");
printf("\n");
       printf("\t\t\t\t1.VAN IS %d RENT PERDAY\n",van);
       printf("\t\t\t\t2.SUV IS %d RENT PERDAY\n",suv);
       printf("\t\t\t\t3.SEDAN IS %d RENT PERDAY\n",sedan);

printf("\n\n");
     printf("\t\t\t*******************************************\n");
printf("\n\n");

                                                                                              //printf("\n\n"); IS FOR LINE SPACING.

              //RENT SELECTION DISPLAY
       printf("\t\t\t\tSELECT A CAR YOU WANT TO RENT\n");
printf("\n\n");
       printf("\t\t\t1. VAN   \t2. SUV   \t3. SEDAN \n");
printf("\n\n");

     printf("\t\t\t*******************************************\n");
printf("\n\n");
                                                                                               //printf("\n\n"); IS FOR LINE SPACING.

              //USER INPUT
     printf("\t\t\tSELECT A NUMBER YOU WANT TO RENT : ");
      scanf("%d",&selection);

//clear a console
system("cls");

           //CONDITIONAL STATEMENT
           if(selection == 1){
                //BODY/STATEMENT FOR 1

                //USER INPUT FOR HOW MANY DAYS HE/SHE WANT TO RENT.
                printf("\n\n\n\n\n");
              printf("\t\t\t\tYOU CHOOSE  VAN \n");
printf("\n");
               printf("\t\t\tHOW MANY DAYS YOU WANT TO RENT A CAR? : ");
                scanf("%d",&days);
                                                                                            //printf("\n\n"); IS FOR LINE SPACING.
             //ARITHMETIC OPERATION
                op = days*van;

            system("cls");

printf("\n\n\n\n\n");
                //CUSTOMER BILL DISPLAY
            printf("\t\t\t\tYOUR BILL IS %.2fPESOS\n",op);
printf("\n\n");
            printf("\t\tPLEASE ENTER THE PAYMENT :  ");
             scanf("%f",&payment);

              system("cls");

               //NESTED IF STATEMENT

               if(payment == op){
                    //ARITHMETIC OPERATION
                    exchange = payment - op;

               //CHANGE DISPLAY
              printf("\n\n\n\n\n");
                  printf("\t\t\t\tCHANGE : %.2f \n",exchange);
              printf("\n\n");
                  printf("\t\t\t\tYOU GIVE EXACT AMOUNT VALUE THANK YOU !\n");
                                                                                               //printf("\n\n"); IS FOR LINE SPACING.

               }
               else if(payment > op){
                  //ARITHMETIC OPERATION
                   exchange = payment - op;

              //CHANGE DISPLAY
              printf("\n\n\n\n\n");
                printf("\t\t\t\tYOU STILL HAVE CHANGE FOR YOUR %.2f\n",payment);
              printf("\n\n");
                printf("\t\t\t\tCHANGE : %.2f \n",exchange);

               }
              else{
                    printf("\n\n\n\n\n");
                printf("\t\t\t\tYOUR MONEY IS NOT ENOUGH TO PAY YOUR RENT BILL...");
                    printf("\n\n\n\n\n");
                    printf("\n\n\n\n\n");
              }


           }
           //ANOTHER CONDITION FOR selection
           else if(selection == 2){
                   //BODY/STATEMENT FOR 1

                 //USER INPUT FOR HOW MANY DAYS HE/SHE WANT TO RENT.
                printf("\n\n\n\n\n");
              printf("\t\t\t\tYOU CHOOSE  VAN \n");
printf("\n");
               printf("\t\t\tHOW MANY DAYS YOU WANT TO RENT A CAR? : ");
                scanf("%d",&days);
                                                                                        //printf("\n\n"); IS FOR LINE SPACING.
             //ARITHMETIC OPERATION
                op = days*suv;

            system("cls");
printf("\n\n\n\n\n");
            //CUSTOMER BILL DISPLAY
            printf("\t\t\t\tYOUR BILL IS %.2fPESOS\n",op);
printf("\n\n");
            printf("\t\tPLEASE ENTER THE PAYMENT :  ");
             scanf("%f",&payment);

              system("cls");

               //NESTED IF STATEMENT

               if(payment == op){
                    //ARITHMETIC OPERATION
                    exchange = payment - op;

               //CHANGE DISPLAY
              printf("\n\n\n\n\n");
                  printf("\t\t\t\tCHANGE : %.2f \n",exchange);
              printf("\n\n");
                  printf("\t\t\t\tYOU GIVE EXACT AMOUNT VALUE THANK YOU !\n");


               }
               else if(payment > op){
                    //ARITHMETIC OPERATION
                   exchange = payment - op;

               //CHANGE DISPLAY
              printf("\n\n\n\n\n");
                printf("\t\t\t\tYOU STILL HAVE CHANGE FOR YOUR %.2f\n",payment);
              printf("\n\n");
                printf("\t\t\t\tCHANGE : %.2f \n",exchange);
              printf("\n\n\n\n\n");
                                                                                                //printf("\n\n"); IS FOR LINE SPACING.
               }
              else{
                    printf("\n\n\n\n\n");
                printf("\t\t\t\tYOUR MONEY IS NOT ENOUGH TO PAY YOUR RENT BILL...");
                    printf("\n\n\n\n\n");
              }


           }
           else if(selection == 3){
                 //BODY/STATEMENT FOR 1

                //USER INPUT FOR HOW MANY DAYS HE/SHE WANT TO RENT.
                printf("\n\n\n\n\n");
              printf("\t\t\t\tYOU CHOOSE  VAN \n");
printf("\n");
               printf("\t\t\tHOW MANY DAYS YOU WANT TO RENT A CAR? : ");
                scanf("%d",&days);
                                                                                                //printf("\n\n"); IS FOR LINE SPACING.
             //ARITHMETIC OPERATION
                op = days*sedan;

            system("cls");
printf("\n\n\n\n\n");
            //CUSTOMER BILL DISPLAY
            printf("\t\t\t\tYOUR BILL IS %.2fPESOS\n",op);
printf("\n\n");
            printf("\t\tPLEASE ENTER THE PAYMENT :  ");
             scanf("%f",&payment);

              system("cls");

               //NESTED IF STATEMENT

               if(payment == op){
                     //ARITHMETIC OPERATION
                    exchange = payment - op;

               //CHANGE DISPLAY
              printf("\n\n\n\n\n");
                  printf("\t\t\t\tCHANGE : %.2f \n",exchange);
              printf("\n\n");
                  printf("\t\t\t\tYOU GIVE EXACT AMOUNT VALUE THANK YOU !\n");
              printf("\n\n\n\n\n");

                                                                                                //printf("\n\n"); IS FOR LINE SPACING.
               }
               else if(payment > op){
                   //ARITHMETIC OPERATION
                   exchange = payment - op;

               //CHANGE DISPLAY
              printf("\n\n\n\n\n");
                printf("\t\t\t\tYOU STILL HAVE CHANGE FOR YOUR %.2f\n",payment);
              printf("\n\n");
                printf("\t\t\t\tCHANGE : %.2f \n",exchange);
              printf("\n\n\n\n\n");

               }
              else{
                    printf("\n\n\n\n\n");
                printf("\t\t\t\tYOUR MONEY IS NOT ENOUGH TO PAY YOUR RENT BILL...");
                    printf("\n\n\n\n\n");
              }
                                                                                                //printf("\n\n"); IS FOR LINE SPACING.
           }
           //ELSE FOR selection
           else{
                //IF A CUSTOMER SELECTS A NUMBER THAT IS NOT IN THE SELECTION.
                printf("\n\n\n\n\n");
             printf("\t\t\t\tTHE %d ARE NOT IN THE SELECTION.. ",selection);
                printf("\n\n\n\n\n");
           }



    return 0;
}
