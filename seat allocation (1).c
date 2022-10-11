#include<stdio.h>
#include<conio.h>
int main()
{

    printf(" \t \t \t \t \t \t Welcome\n \t\t\t\t\tUniversity of Asia Pacific\n");
    while(1)
    {
        int choice,sem,date,a,id,i,stdi,rn;
        char routine,room[5000],seat,exit;
        printf("\n\n[1]Routine\n[2]Seat plan\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("\nSemester:\n");
            printf("[1]1.1\n[2]1.2\n[3]2.1\n[4]2.2\n[5]3.1\n[6]3.2\n[7]4.1\n[8]4.2\n");
            printf("\nEnter your semester: ");
            scanf("%d",&sem);

            FILE *fp1,*fp2,*fp3,*fp4,*fp5,*fp6,*fp7,*fp8;
            fp1=fopen("routine 1.1.txt","r");
            fp2=fopen("routine 1.2.txt","r");
            fp3=fopen("routine 2.1.txt","r");
            fp4=fopen("routine 2.2.txt","r");
            fp5=fopen("routine 3.1.txt","r");
            fp6=fopen("routine 3.2.txt","r");
            fp7=fopen("routine 4.1.txt","r");
            fp8=fopen("routine 4.2.txt ","r");
            printf("\n");

            switch(sem)
            {
            case 1:
                while(1)
                {
                    routine=fgetc(fp1);
                    if(routine==EOF)
                        break;
                    printf("%c",routine);

                }
                fclose(fp1);
                break;


            case 2:

                while(1)
                {
                    routine=fgetc(fp2);
                    if(routine==EOF)
                        break;
                    printf("%c",routine);
                }
                fclose(fp2);
                break;
            case 3:

                while(1)
                {
                    routine=fgetc(fp3);
                    if(routine==EOF)
                        break;
                    printf("%c",routine);
                }
                fclose(fp3);
                break;
            case 4:

                while(1)
                {
                    routine=fgetc(fp4);
                    if(routine==EOF)
                        break;
                    printf("%c",routine);
                }
                fclose(fp4);
                break;
            case 5:

                while(1)
                {
                    routine=fgetc(fp5);
                    if(routine==EOF)
                        break;
                    printf("%c",routine);
                }
                fclose(fp5);
                break;
            case 6:

                while(1)
                {
                    routine=fgetc(fp6);
                    if(routine==EOF)
                        break;
                    printf("%c",routine);
                }
                fclose(fp6);
                break;
            case 7:

                while(1)
                {
                    routine=fgetc(fp7);
                    if(routine==EOF)
                        break;
                    printf("%c",routine);
                }
                fclose(fp7);
                break;
            case 8:

                while(1)
                {
                    routine=fgetc(fp8);
                    if(routine==EOF)
                        break;
                    printf("%c",routine);
                }
                fclose(fp8);
                break;

            }


        }
        if(choice==2)
        {
            printf("Choose Type:\n[1]Room Wise\n[2]Roll Wise\n");
            printf("\nEnter your choice:");
            scanf("%d",&choice);
            printf("\n");
            if(choice==1)
            {
                printf("Date selection:\n[1]3-04-2021\n[2]5-04-2021\n[3]7-04-2021\n[4]8-04-2021\n[5]9-04-2021\n[6]11-04-2021\n[7]13-04-2021\n");
                printf("\nChoose Date: ");
                scanf("%d",&date);
                printf("\n");
                if(date==1)
                {
                    printf("Room Selection:\n[1]201\n[2]202\n[3]203\n[4]204\n[5]301\n[6]302\n[7]303\n[8]304\n[9]401\n[10]402\n[11]403\n[12]404\n[13]501\n[14]502\n[15]503\n[16]503\n");
                    printf("\nChoose Room:");
                    scanf("%d",&rn);
                    printf("\n");
                    if(rn==1)
                    {
                        FILE *r1=fopen("Day1 201.txt","r");
                        while(1)
                        {
                            seat=fgetc(r1);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r1);

                    }
                    else if(rn==2)
                    {
                        FILE *r2=fopen("Day1 202.txt","r");
                        while(1)
                        {
                            seat=fgetc(r2);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r2);

                    }
                    else if(rn==3)
                    {
                        FILE *r3=fopen("Day1 203.txt","r");
                        while(1)
                        {
                            seat=fgetc(r3);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r3);

                    }
                    else if(rn==4)
                    {
                        FILE *r4=fopen("Day1 204.txt","r");
                        while(1)
                        {
                            seat=fgetc(r4);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r4);

                    }
                    else if(rn==5)
                    {
                        FILE *r5=fopen("Day1 301.txt","r");
                        while(1)
                        {
                            seat=fgetc(r5);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r5);

                    }
                    else if(rn==6)
                    {
                        FILE *r6=fopen("Day1 302.txt","r");
                        while(1)
                        {
                            seat=fgetc(r6);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r6);

                    }
                    else if(rn==7)
                    {
                        FILE *r7=fopen("Day1 303.txt","r");
                        while(1)
                        {
                            seat=fgetc(r7);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r7);

                    }
                    else if(rn==8)
                    {
                        FILE *r8=fopen("Day1 304.txt","r");
                        while(1)
                        {
                            seat=fgetc(r8);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r8);

                    }
                    else if(rn==9)
                    {
                        FILE *r9=fopen("Day1 401.txt","r");
                        while(1)
                        {
                            seat=fgetc(r9);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r9);

                    }
                    else if(rn==10)
                    {
                        FILE *r10=fopen("Day1 402.txt","r");
                        while(1)
                        {
                            seat=fgetc(r10);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r10);

                    }
                    else if(rn==11)
                    {
                        FILE *r11=fopen("Day1 403.txt","r");
                        while(1)
                        {
                            seat=fgetc(r11);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r11);

                    }
                    else if(rn==12)
                    {
                        FILE *r12=fopen("Day1 404.txt","r");
                        while(1)
                        {
                            seat=fgetc(r12);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r12);

                    }

                    else
                    {
                        printf("No exam assigned");
                    }


                }
                if(date==2)
                {
                    printf("Room Selection:\n[1]201\n[2]202\n[3]203\n[4]204\n[5]301\n[6]302\n[7]303\n[8]304\n[9]401\n[10]402\n[11]403\n[12]404\n[13]501\n[14]502\n[15]503\n[16]503\n");
                    printf("\nChoose Room:");
                    scanf("%d",&rn);
                    printf("\n");
                    if(rn==1)
                    {
                        FILE *r1=fopen("Day2 201.txt","r");
                        while(1)
                        {
                            seat=fgetc(r1);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r1);

                    }
                    if(rn==2)
                    {
                        FILE *r2=fopen("Day2 202.txt","r");
                        while(1)
                        {
                            seat=fgetc(r2);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r2);

                    }
                    if(rn==3)
                    {
                        FILE *r3=fopen("Day2 203.txt","r");
                        while(1)
                        {
                            seat=fgetc(r3);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r3);

                    }
                    if(rn==4)
                    {
                        FILE *r4=fopen("Day2 204.txt","r");
                        while(1)
                        {
                            seat=fgetc(r4);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r4);

                    }
                    if(rn==5)
                    {
                        FILE *r5=fopen("Day2 301.txt","r");
                        while(1)
                        {
                            seat=fgetc(r5);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r5);

                    }
                    if(rn==6)
                    {
                        FILE *r6=fopen("Day2 302.txt","r");
                        while(1)
                        {
                            seat=fgetc(r6);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r6);

                    }
                    if(rn==7)
                    {
                        FILE *r7=fopen("Day2 303.txt","r");
                        while(1)
                        {
                            seat=fgetc(r7);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r7);

                    }
                    if(rn==8)
                    {
                        FILE *r8=fopen("Day2 304.txt","r");
                        while(1)
                        {
                            seat=fgetc(r8);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r8);

                    }
                    if(rn==9)
                    {
                        FILE *r9=fopen("Day2 401.txt","r");
                        while(1)
                        {
                            seat=fgetc(r9);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r9);

                    }
                    if(rn==10)
                    {
                        FILE *r10=fopen("Day2 402.txt","r");
                        while(1)
                        {
                            seat=fgetc(r10);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r10);

                    }
                    if(rn==11)
                    {
                        FILE *r11=fopen("Day2 403.txt","r");
                        while(1)
                        {
                            seat=fgetc(r11);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r11);

                    }
                    if(rn==12)
                    {
                        FILE *r12=fopen("Day2 404.txt","r");
                        while(1)
                        {
                            seat=fgetc(r12);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r12);

                    }
                    if(rn==13)
                    {
                        FILE *r13=fopen("Day2 501.txt","r");
                        while(1)
                        {
                            seat=fgetc(r13);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r13);

                    }
                    if(rn==14)
                    {
                        FILE *r14=fopen("Day2 502.txt","r");
                        while(1)
                        {
                            seat=fgetc(r14);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r14);

                    }
                    if(rn==15)
                    {
                        FILE *r15=fopen("Day2 503.txt","r");
                        while(1)
                        {
                            seat=fgetc(r15);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r15);

                    }
                    if(rn==16)
                    {
                        FILE *r16=fopen("Day2 504.txt","r");
                        while(1)
                        {
                            seat=fgetc(r16);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r16);

                    }

                }
                if(date==3)
                {
                    printf("Room Selection:\n[1]201\n[2]202\n[3]203\n[4]204\n[5]301\n[6]302\n[7]303\n[8]304\n[9]401\n[10]402\n[11]403\n[12]404\n[13]501\n[14]502\n[15]503\n[16]503\n");
                    printf("\nChoose Room:");
                    scanf("%d",&rn);
                    printf("\n");
                    if(rn==1)
                    {
                        FILE *r1=fopen("Day3 201.txt","r");
                        while(1)
                        {
                            seat=fgetc(r1);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r1);

                    }
                    if(rn==2)
                    {
                        FILE *r2=fopen("Day3 202.txt","r");
                        while(1)
                        {
                            seat=fgetc(r2);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r2);

                    }
                    if(rn==3)
                    {
                        FILE *r3=fopen("Day3 203.txt","r");
                        while(1)
                        {
                            seat=fgetc(r3);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r3);

                    }
                    if(rn==4)
                    {
                        FILE *r4=fopen("Day3 204.txt","r");
                        while(1)
                        {
                            seat=fgetc(r4);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r4);

                    }
                    if(rn==5)
                    {
                        FILE *r5=fopen("Day3 301.txt","r");
                        while(1)
                        {
                            seat=fgetc(r5);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r5);

                    }
                    if(rn==6)
                    {
                        FILE *r6=fopen("Day3 302.txt","r");
                        while(1)
                        {
                            seat=fgetc(r6);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r6);

                    }
                    if(rn==7)
                    {
                        FILE *r7=fopen("Day3 303.txt","r");
                        while(1)
                        {
                            seat=fgetc(r7);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r7);

                    }
                    if(rn==8)
                    {
                        FILE *r8=fopen("Day3 304.txt","r");
                        while(1)
                        {
                            seat=fgetc(r8);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r8);

                    }
                    if(rn==9)
                    {
                        FILE *r9=fopen("Day3 401.txt","r");
                        while(1)
                        {
                            seat=fgetc(r9);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r9);

                    }
                    if(rn==10)
                    {
                        FILE *r10=fopen("Day3 402.txt","r");
                        while(1)
                        {
                            seat=fgetc(r10);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r10);

                    }
                    if(rn==11)
                    {
                        FILE *r11=fopen("Day3 403.txt","r");
                        while(1)
                        {
                            seat=fgetc(r11);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r11);

                    }
                    if(rn==12)
                    {
                        FILE *r12=fopen("Day3 404.txt","r");
                        while(1)
                        {
                            seat=fgetc(r12);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r12);

                    }
                    if(rn==13)
                    {
                        FILE *r13=fopen("Day3 501.txt","r");
                        while(1)
                        {
                            seat=fgetc(r13);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r13);

                    }
                    if(rn==14)
                    {
                        FILE *r14=fopen("Day3 502.txt","r");
                        while(1)
                        {
                            seat=fgetc(r14);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r14);

                    }
                    if(rn==15)
                    {
                        FILE *r15=fopen("Day3 503.txt","r");
                        while(1)
                        {
                            seat=fgetc(r15);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r15);

                    }
                    if(rn==16)
                    {
                        FILE *r16=fopen("Day3 504.txt","r");
                        while(1)
                        {
                            seat=fgetc(r16);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r16);

                    }

                }
                if(date==4)
                {
                    printf("Room Selection:\n[1]201\n[2]202\n[3]203\n[4]204\n[5]301\n[6]302\n[7]303\n[8]304\n[9]401\n[10]402\n[11]403\n[12]404\n[13]501\n[14]502\n[15]503\n[16]503\n");
                    printf("\nChoose Room:");
                    scanf("%d",&rn);
                    printf("\n");
                    if(rn==1)
                    {
                        FILE *r1=fopen("Day4 201.txt","r");
                        while(1)
                        {
                            seat=fgetc(r1);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r1);

                    }
                    if(rn==2)
                    {
                        FILE *r2=fopen("Day4 202.txt","r");
                        while(1)
                        {
                            seat=fgetc(r2);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r2);

                    }
                    if(rn==3)
                    {
                        FILE *r3=fopen("Day4 203.txt","r");
                        while(1)
                        {
                            seat=fgetc(r3);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r3);

                    }
                    if(rn==4)
                    {
                        FILE *r4=fopen("Day4 204.txt","r");
                        while(1)
                        {
                            seat=fgetc(r4);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r4);

                    }
                    if(rn==5)
                    {
                        FILE *r5=fopen("Day4 301.txt","r");
                        while(1)
                        {
                            seat=fgetc(r5);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r5);

                    }
                    if(rn==6)
                    {
                        FILE *r6=fopen("Day4 302.txt","r");
                        while(1)
                        {
                            seat=fgetc(r6);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r6);

                    }
                    if(rn==7)
                    {
                        FILE *r7=fopen("Day4 303.txt","r");
                        while(1)
                        {
                            seat=fgetc(r7);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r7);

                    }
                    if(rn==8)
                    {
                        FILE *r8=fopen("Day4 304.txt","r");
                        while(1)
                        {
                            seat=fgetc(r8);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r8);

                    }
                    if(rn==9)
                    {
                        FILE *r9=fopen("Day4 401.txt","r");
                        while(1)
                        {
                            seat=fgetc(r9);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r9);

                    }
                    if(rn==10)
                    {
                        FILE *r10=fopen("Day4 402.txt","r");
                        while(1)
                        {
                            seat=fgetc(r10);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r10);

                    }
                    if(rn==11)
                    {
                        FILE *r11=fopen("Day4 403.txt","r");
                        while(1)
                        {
                            seat=fgetc(r11);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r11);

                    }
                    if(rn==12)
                    {
                        FILE *r12=fopen("Day4 404.txt","r");
                        while(1)
                        {
                            seat=fgetc(r12);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r12);

                    }
                    if(rn==13)
                    {
                        FILE *r13=fopen("Day4 501.txt","r");
                        while(1)
                        {
                            seat=fgetc(r13);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r13);

                    }
                    if(rn==14)
                    {
                        FILE *r14=fopen("Day4 502.txt","r");
                        while(1)
                        {
                            seat=fgetc(r14);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r14);

                    }
                    if(rn==15)
                    {
                        FILE *r15=fopen("Day4 503.txt","r");
                        while(1)
                        {
                            seat=fgetc(r15);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r15);

                    }
                    if(rn==16)
                    {
                        FILE *r16=fopen("Day4 504.txt","r");
                        while(1)
                        {
                            seat=fgetc(r16);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r16);

                    }

                }
                if(date==5)
                {
                    printf("Room Selection:\n[1]201\n[2]202\n[3]203\n[4]204\n[5]301\n[6]302\n[7]303\n[8]304\n[9]401\n[10]402\n[11]403\n[12]404\n[13]501\n[14]502\n[15]503\n[16]503\n");
                    printf("\nChoose Room:");
                    scanf("%d",&rn);
                    printf("\n");
                    if(rn==1)
                    {
                        FILE *r1=fopen("Day5 201.txt","r");
                        while(1)
                        {
                            seat=fgetc(r1);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r1);

                    }
                    if(rn==2)
                    {
                        FILE *r2=fopen("Day5 202.txt","r");
                        while(1)
                        {
                            seat=fgetc(r2);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r2);

                    }
                    if(rn==3)
                    {
                        FILE *r3=fopen("Day5 203.txt","r");
                        while(1)
                        {
                            seat=fgetc(r3);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r3);

                    }
                    if(rn==4)
                    {
                        FILE *r4=fopen("Day5 204.txt","r");
                        while(1)
                        {
                            seat=fgetc(r4);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r4);

                    }
                    if(rn==5)
                    {
                        FILE *r5=fopen("Day5 301.txt","r");
                        while(1)
                        {
                            seat=fgetc(r5);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r5);

                    }
                    if(rn==6)
                    {
                        FILE *r6=fopen("Day5 302.txt","r");
                        while(1)
                        {
                            seat=fgetc(r6);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r6);

                    }
                    if(rn==7)
                    {
                        FILE *r7=fopen("Day5 303.txt","r");
                        while(1)
                        {
                            seat=fgetc(r7);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r7);

                    }
                    if(rn==8)
                    {
                        FILE *r8=fopen("Day5 304.txt","r");
                        while(1)
                        {
                            seat=fgetc(r8);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r8);

                    }
                    if(rn==9)
                    {
                        FILE *r9=fopen("Day5 401.txt","r");
                        while(1)
                        {
                            seat=fgetc(r9);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r9);

                    }
                    if(rn==10)
                    {
                        FILE *r10=fopen("Day5 402.txt","r");
                        while(1)
                        {
                            seat=fgetc(r10);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r10);

                    }
                    if(rn==11)
                    {
                        FILE *r11=fopen("Day5 403.txt","r");
                        while(1)
                        {
                            seat=fgetc(r11);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r11);

                    }
                    if(rn==12)
                    {
                        FILE *r12=fopen("Day5 404.txt","r");
                        while(1)
                        {
                            seat=fgetc(r12);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r12);

                    }
                    if(rn==13)
                    {
                        FILE *r13=fopen("Day5 501.txt","r");
                        while(1)
                        {
                            seat=fgetc(r13);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r13);

                    }
                    if(rn==14)
                    {
                        FILE *r14=fopen("Day5 502.txt","r");
                        while(1)
                        {
                            seat=fgetc(r14);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r14);

                    }
                    if(rn==15)
                    {
                        FILE *r15=fopen("Day5 503.txt","r");
                        while(1)
                        {
                            seat=fgetc(r15);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r15);

                    }
                    if(rn==16)
                    {
                        FILE *r16=fopen("Day5 504.txt","r");
                        while(1)
                        {
                            seat=fgetc(r16);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r16);

                    }

                }
                if(date==6)
                {
                    printf("Room Selection:\n[1]201\n[2]202\n[3]203\n[4]204\n[5]301\n[6]302\n[7]303\n[8]304\n[9]401\n[10]402\n[11]403\n[12]404\n[13]501\n[14]502\n[15]503\n[16]503\n");
                    printf("\nChoose Room:");
                    scanf("%d",&rn);
                    printf("\n");
                    if(rn==1)
                    {
                        FILE *r1=fopen("Day6 201.txt","r");
                        while(1)
                        {
                            seat=fgetc(r1);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r1);

                    }
                    if(rn==2)
                    {
                        FILE *r2=fopen("Day6 202.txt","r");
                        while(1)
                        {
                            seat=fgetc(r2);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r2);

                    }
                    if(rn==3)
                    {
                        FILE *r3=fopen("Day6 203.txt","r");
                        while(1)
                        {
                            seat=fgetc(r3);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r3);

                    }
                    if(rn==4)
                    {
                        FILE *r4=fopen("Day6 204.txt","r");
                        while(1)
                        {
                            seat=fgetc(r4);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r4);

                    }
                    if(rn==5)
                    {
                        FILE *r5=fopen("Day6 301.txt","r");
                        while(1)
                        {
                            seat=fgetc(r5);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r5);

                    }
                    if(rn==6)
                    {
                        FILE *r6=fopen("Day6 302.txt","r");
                        while(1)
                        {
                            seat=fgetc(r6);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r6);

                    }
                    if(rn==7)
                    {
                        FILE *r7=fopen("Day6 303.txt","r");
                        while(1)
                        {
                            seat=fgetc(r7);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r7);

                    }
                    if(rn==8)
                    {
                        FILE *r8=fopen("Day6 304.txt","r");
                        while(1)
                        {
                            seat=fgetc(r8);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r8);

                    }
                    if(rn==9)
                    {
                        FILE *r9=fopen("Day6 401.txt","r");
                        while(1)
                        {
                            seat=fgetc(r9);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r9);

                    }
                    if(rn==10)
                    {
                        FILE *r10=fopen("Day6 402.txt","r");
                        while(1)
                        {
                            seat=fgetc(r10);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r10);

                    }
                    if(rn==11)
                    {
                        FILE *r11=fopen("Day6 403.txt","r");
                        while(1)
                        {
                            seat=fgetc(r11);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r11);

                    }
                    if(rn==12)
                    {
                        FILE *r12=fopen("Day6 404.txt","r");
                        while(1)
                        {
                            seat=fgetc(r12);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r12);

                    }
                    if(rn==13)
                    {
                        FILE *r13=fopen("Day6 501.txt","r");
                        while(1)
                        {
                            seat=fgetc(r13);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r13);

                    }
                    if(rn==14)
                    {
                        FILE *r14=fopen("Day6 502.txt","r");
                        while(1)
                        {
                            seat=fgetc(r14);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r14);

                    }
                    if(rn==15)
                    {
                        FILE *r15=fopen("Day6 503.txt","r");
                        while(1)
                        {
                            seat=fgetc(r15);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r15);

                    }
                    if(rn==16)
                    {
                        FILE *r16=fopen("Day6 504.txt","r");
                        while(1)
                        {
                            seat=fgetc(r16);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r16);

                    }

                }
                if(date==7)
                {
                    printf("Room Selection:\n[1]201\n[2]202\n[3]203\n[4]204\n[5]301\n[6]302\n[7]303\n[8]304\n[9]401\n[10]402\n[11]403\n[12]404\n[13]501\n[14]502\n[15]503\n[16]503\n");
                    printf("\nChoose Room:");
                    scanf("%d",&rn);
                    printf("\n");
                    if(rn==1)
                    {
                        FILE *r1=fopen("Day7 201.txt","r");
                        while(1)
                        {
                            seat=fgetc(r1);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r1);

                    }
                    if(rn==2)
                    {
                        FILE *r2=fopen("Day7 202.txt","r");
                        while(1)
                        {
                            seat=fgetc(r2);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r2);

                    }
                    if(rn==3)
                    {
                        FILE *r3=fopen("Day7 203.txt","r");
                        while(1)
                        {
                            seat=fgetc(r3);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r3);

                    }
                    if(rn==4)
                    {
                        FILE *r4=fopen("Day7 204.txt","r");
                        while(1)
                        {
                            seat=fgetc(r4);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r4);

                    }
                    if(rn==5)
                    {
                        FILE *r5=fopen("Day7 301.txt","r");
                        while(1)
                        {
                            seat=fgetc(r5);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r5);

                    }
                    if(rn==6)
                    {
                        FILE *r6=fopen("Day7 302.txt","r");
                        while(1)
                        {
                            seat=fgetc(r6);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r6);

                    }
                    if(rn==7)
                    {
                        FILE *r7=fopen("Day7 303.txt","r");
                        while(1)
                        {
                            seat=fgetc(r7);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r7);

                    }
                    if(rn==8)
                    {
                        FILE *r8=fopen("Day7 304.txt","r");
                        while(1)
                        {
                            seat=fgetc(r8);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r8);

                    }
                    if(rn==9)
                    {
                        FILE *r9=fopen("Day7 401.txt","r");
                        while(1)
                        {
                            seat=fgetc(r9);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r9);

                    }
                    if(rn==10)
                    {
                        FILE *r10=fopen("Day7 402.txt","r");
                        while(1)
                        {
                            seat=fgetc(r10);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r10);

                    }
                    if(rn==11)
                    {
                        FILE *r11=fopen("Day7 403.txt","r");
                        while(1)
                        {
                            seat=fgetc(r11);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r11);

                    }
                    if(rn==12)
                    {
                        FILE *r12=fopen("Day7 404.txt","r");
                        while(1)
                        {
                            seat=fgetc(r12);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r12);

                    }
                    if(rn==13)
                    {
                        FILE *r13=fopen("Day7 501.txt","r");
                        while(1)
                        {
                            seat=fgetc(r13);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r13);

                    }
                    if(rn==14)
                    {
                        FILE *r14=fopen("Day7 502.txt","r");
                        while(1)
                        {
                            seat=fgetc(r14);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r14);

                    }
                    if(rn==15)
                    {
                        FILE *r15=fopen("Day7 503.txt","r");
                        while(1)
                        {
                            seat=fgetc(r15);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r15);

                    }
                    if(rn==16)
                    {
                        FILE *r16=fopen("Day7 504.txt","r");
                        while(1)
                        {
                            seat=fgetc(r16);
                            if(seat==EOF)
                                break;
                            printf("%c",seat);

                        }
                        fclose(r16);

                    }

                }

            }
            if(choice==2)
            {
                printf("Date selection:\n[1]3-04-2021\n[2]5-04-2021\n[3]7-04-2021\n[4]8-04-2021\n[5]9-04-2021\n[6]11-04-2021\n[7]13-04-2021\n");
                printf("\nChoose Date: ");
                scanf("%d",&date);
                printf("\n");
                if(date==1)
                {
                    printf("Enter Your ID: ");
                    scanf("%d",&stdi);
                    FILE *f1 =fopen("day 1.txt","r");
                    for(i=0; i<5000; i++)
                    {
                        fscanf(f1,"%s",room);
                        id=atoi(room);
                        if(id==stdi)
                        {
                            fgets(room,5000,(FILE*)f1);
                            printf("\n%s",room);
                            break;
                        }
                    }

                }
                else if(date==2)
                {
                    printf("Enter Your ID: ");
                    scanf("%d",&stdi);
                    FILE *f2 =fopen("day 2.txt","r");
                    for(i=0; i<5000; i++)
                    {
                        fscanf(f2,"%s",room);
                        id=atoi(room);
                        if(id==stdi)
                        {
                            fgets(room,5000,(FILE*)f2);
                            printf("%s",room);
                            break;
                        }
                    }
                }
                else if(date==3)
                {
                    printf("Enter Your ID: ");
                    scanf("%d",&stdi);
                    FILE *f1 =fopen("day 3.txt","r");
                    for(i=0; i<5000; i++)
                    {
                        fscanf(f1,"%s",room);
                        id=atoi(room);
                        if(id==stdi)
                        {
                            fgets(room,5000,(FILE*)f1);
                            printf("%s",room);
                            break;
                        }
                    }
                }
                else if(date==4)
                {
                    printf("Enter Your ID: ");
                    scanf("%d",&stdi);
                    FILE *f1 =fopen("day 4.txt","r");
                    for(i=0; i<5000; i++)
                    {
                        fscanf(f1,"%s",room);
                        id=atoi(room);
                        if(id==stdi)
                        {
                            fgets(room,5000,(FILE*)f1);
                            printf("%s",room);
                            break;
                        }
                    }
                }
                else if(date==5)
                {
                    printf("Enter Your ID: ");
                    scanf("%d",&stdi);
                    FILE *f1 =fopen("day 5.txt","r");
                    for(i=0; i<5000; i++)
                    {
                        fscanf(f1,"%s",room);
                        id=atoi(room);
                        if(id==stdi)
                        {
                            fgets(room,5000,(FILE*)f1);
                            printf("%s",room);
                            break;
                        }
                    }
                }
                else if(date==6)
                {
                    printf("Enter Your ID: ");
                    scanf("%d",&stdi);
                    FILE *f1 =fopen("day 6.txt","r");
                    for(i=0; i<5000; i++)
                    {
                        fscanf(f1,"%s",room);
                        id=atoi(room);
                        if(id==stdi)
                        {
                            fgets(room,5000,(FILE*)f1);
                            printf("%s",room);
                            break;
                        }
                    }
                }
                else if(date==7)
                {
                    printf("Enter Your ID: ");
                    scanf("%d",&stdi);
                    FILE *f1 =fopen("day 7.txt","r");
                    for(i=0; i<5000; i++)
                    {
                        fscanf(f1,"%s",room);
                        id=atoi(room);
                        if(id==stdi)
                        {
                            fgets(room,5000,(FILE*)f1);
                            printf("%s",room);
                            break;
                        }
                    }

                }

            }
        }
        printf("\n\nPress c to continue or x to exit");
        printf("Your Choice: ");
        scanf("%*c%c",&exit);
        if(exit=='x')
        {
            break;
        }

    }
    getch();
    return 0;
}
