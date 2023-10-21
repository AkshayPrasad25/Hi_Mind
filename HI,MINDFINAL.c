#include <stdio.h>
#include <stdlib.h>
void ptsd();
void main()
{
    int width = 80;
    char str[] = "HI,MIND";
    int length = sizeof(str) - 1;
    int pad = (length >= width) ? 0 : (width - length) / 2;
    printf("%*.*s%s\n", pad, pad, " ", str);
    char in[300],name[100],s[300],puse[100],pserv[100]="12345",city[100];
    char c,ch1,ch,ch2;
    int value;
    printf("Enter your username: \n");
    scanf("%s",name);
    password:
    printf("Enter your password: \n");
    scanf("%s",puse);
    value=strcmp(puse,pserv);
    if(value==0)
    {
        printf("Login successful!\n");
        printf("Welcome %s!\n",name);
        printf("Enter today's date: dd/mm/yyyy: \n");
        scanf("%s",in);
        printf("Hello %s !Welcome to Colloquium!\nWe can help you with the following situations\n",name);
        printf("a.Depression\nb.Anxiety\nc.PTSD\nd.Insomnia\n");
        option:
        printf("Please let us know by entering the option : ");
        scanf(" %c", &c);
        switch(c)
        {

            case 'a' :
            printf("You have selected Depression\n\n");
            printf("Hello %s!\nPlease pick a color which best fits your current situation :\n\n",name);
            printf("a.Red->Hotline for immediate help\nb.Yellow->Redirect you to our virtual support system\nc.Green->You can explore more in our website\n");
            scanf(" %c",&ch1);
            switch(ch1)
            {
            case 'a':
                printf("You have entered RED.\n\n");
                printf("Please enter your city:\n\n");
                scanf("%s",city);
                printf("Here are some hotlines for %s:\n\n",city);
                printf("Mitram Foudation: 080-25722573\nParivarthan: +91-7676602602 ......\n\n");
                printf("Have a good day!\n\n");
                printf("You do not find the happy life. You make it. -Camilla Kimball\n\n");
                break;
            case 'b':
                 printf("\nYou have entered YELLOW.\n\n");
                 printf("Please wait we will redirect you to out Virtual Support System\n\n");
                 printf("*************************************************************************************\n\n");
                 printf("Virtual Support System: \n\n");
                 printf("Specialist: Dr.Ben : Hi there! what brings you here?\n\n");
                 printf("%s [%s]: I'm depressed and it has been real rough lately\n\n",name,in);
                 printf("Specialist: Dr.Ben : What's wrong? Anything bothering you specifically?\n\n");
                 printf("%s [%s]: *Talks it out with specialist\n\n",name,in);
                 printf("*************************************************************************************\n\n");
                 break;
            case 'c':
                 printf("You have entered GREEN.\n");
                 printf("Would you like us to redirect you to our Virtual Support System?Y/N\n\n");
                 scanf(" %c",&ch);
                 if(ch=='Y'||ch=='y')
                 {
                     printf("\nPlease wait we will redirect you to out Virtual Support System\n\n");
                     printf("Virtual Support System: \n\n");
                     printf("Specialist: Dr.Ben : Hi there! what brings you here?\n\n");
                 }
                 else{
                    printf("You can explore more services offered by our application\n\n");
                    printf("You can select and learn about the given topics below through Self Thought: \n\n");
                    printf("Self Thought\n\n");
                    printf("a.PTSD\nb.Depression\nc.Anxiety\n.d.Panic Attacks\n\n");

                    pos:
                    scanf(" %c",&ch2);
                    switch(ch2)
                    {
                        case 'a':
                            printf("PTSD\n\n");
                            ptsd();
                            break;
                        case 'b':
                            printf("Depression\n\n");
                            break;
                        case 'c':
                            printf("Anxiety\n\n");
                            break;
                        case 'd':
                            printf("Panic Attacks\n\n");
                            break;
                        default:
                            printf("Invalid option\n\n");
                            goto pos;
                    }//Function call for self n group study will add later when done with main function
                    printf("Have a great day!\n\n");
                    printf("You make a life out of what you have, not what you're missing. -Kate Morton\n\n");
                 }
                 break;
            default:
                printf("Invalid option!");

            }
            break;
            case 'b' :
            printf("Anxiety");
            break;
            case 'c' :
            printf("PTSD");
            break;
            case 'd' :
            printf("Panic Attacks");
            break;
            default:
            printf("Invalid");

        }



    }
    else
    {
        printf("Incorrect password!\n");
        goto password;
    }

}
void ptsd()
{
    char ch4,ch5;
    printf("Hey there! Do you know what PTSD means?\n");
    //printf("If you don't,please select any field that you want to know about PTSD\n");
    printf("If you don't,not a problem we're here to help. Please select a relevant category: \n\n");
    printf("a : Causes for PTSD\nb : Symptoms\nc : Treatment\n\n");
    pst:
    scanf(" %c",&ch4);
    switch(ch4)
    {
        case 'a' : printf("Hey there! Would you like to know about the causes of PTSD?\n");
                   printf("Some of the causes are : \n1) serious accidents\n2)physical or sexual assault\n3)abuse, including childhood or domestic abuse\n4)exposure to traumatic events at work, including remote exposure\n5)serious health problems, such as being admitted to intensive care and more\n\n");
                   printf("Here are some of the video links that would help you to get to know more about this\n\n");
                   printf("https://www.youtube.com/watch?v=hzSx4rMyVjI\n");
                   printf("\nPlease copy the above link to get to know more about the causes for PTSD\n");
                   printf("*****************************************************************************************\n\n");
                   printf("Would you like to learn more? Y/N\n\n");
                   scanf(" %c",&ch5);
                   if(ch5=='N'||ch5=='n')
                   {
                       exit(0);
                   }
                   printf("Select the below options to learn more\n\n");
                   printf("a : Causes for PTSD\nb : Symptoms\nc : Treatment\n\n");
                   break;
        case 'b' : printf("Hey there! Would you like to know about the symptoms of PTSD?\n");
                   printf("Some of the symptoms are : \n1)Memories\n2)Avoidance\n3)Behavior Changes\n4)And Mood Swings\n\n");
                   printf("Here are some video links that would help you to get to know more about this\n\n");
                   printf("https://www.youtube.com/watch?v=hzSx4rMyVjI\n");
                   printf("\nCopy the above link to know more about the symptoms for PTSD\n");
                   printf("*****************************************************************************************\n\n");
                   printf("Would you like to learn more? Y/N\n\n");
                   scanf(" %c",&ch5);
                   if(ch5=='N'||ch5=='n')
                   {
                       exit(0);
                   }
                   printf("Select the below options to learn more\n\n");
                   printf("a : Causes for PTSD\nb : Symptoms\nc : Treatment\n\n");
                   break;
        case 'c' : printf("Hey there! Would you like to know about the treatment that one can afford for PTSD?\n");
                   printf("Some of the treatments available are : \n1)Cognitive Processing Therapy\n2)Prolonged Exposure Therapy\n3)Eye Movement Desensitization and Reprocessing\n4)Stress Inoculation Training and Medications\n\n");
                   printf("Here are some of the video links that would help you to get to know more about this\n\n");
                   printf("https://www.youtube.com/watch?v=hzSx4rMyVjI\n");
                   printf("\nPlease copy the above link to get to know more about the treatments for PTSD\n");
                   printf("*****************************************************************************************\n\n");
                   printf("Would you like to learn more? Y/N\n\n");
                   scanf(" %c",&ch5);
                   if(ch5=='N'||ch5=='n')
                   {
                       exit(0);
                   }
                   printf("Select the below options to learn more\n\n");
                   printf("a : Causes for PTSD\nb : Symptoms\nc : Treatment\n\n");
                   break;
        default :  printf("Heres a quote for you : \nAlways remember, if you have been diagnosed with PTSD, it is not a sign of weakness; rather, it is proof of your strength, because you have survived!.");
                    exit (0);
    }
    goto pst;
}
