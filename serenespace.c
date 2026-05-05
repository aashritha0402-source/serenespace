#include<stdio.h>
#include<string.h>
void relax_tips();
void ground();
void motivate();
void grat_journal();
int main()
{
   char name[30];
   int ch;
     printf("=====Serene Space=====\n");
     printf("This is Serene Space your mental wellness companion and a safe space For your thoughts and emotions\n");
     printf("What can i call you?\n");
     scanf("%s",name);
     printf("Hey %s! how can i help you today?\n",name);
     printf("I can give you:\n");
     printf("1.Relaxation tips\n");
     printf("2.Grounding methods\n");
     printf("3.Motivation\n");
     printf("4.Gratitude journal\n");
     printf("Pick one!\n");
     scanf("%d",&ch);
    switch(ch)
        {
           case 1:relax_tips();
                   break;
           case 2:ground();
                   break;
           case 3:motivate();
                   break;
           case 4:grat_journal();
                   break;
        }
return 0;
}
void relax_tips()
{
     printf("So sorry to hear that you are feeling stressed\n");
     printf("Here are some relaxation tips:\n");
     printf("1.Go For a walk,trust me,it helps!\n2. Listen to your favourite music\n3.Dance it out!.4.Have a chat with your loved ones\n4.Take a nap\n");
     printf("Hope that helped!\n");
}

void ground()
{
   printf("Anxiety can be overwhelming, here are some grounding techniques to get you out of panic situations\n");
   printf("1.The 5-4-3-2-1 method --> identify 5 things you see,4 things you touch,3 things you hear,2 things you smell and 1 thing you taste\n");
   printf("This instantly grounds our senses!\n");
   printf("2.Describe a random object in detail\n");
   printf("3.Start counting backward from 100\n");
   printf("4.Try to find something cold and run it along your hands\n");
   printf("Fact:All these methods are scientifically proven methods\n");
}
void motivate()
{
      int num;
      printf("====MOTIVATION JAR====\n");
      printf("Welcome to the motivation jar!\n");
      printf("Pick a number between 1-4\nReach out for a motivation note!\n");
      scanf("%d",&num);
      if(num==1){
         printf("You dont have to see the whole staircase, just take the first staircase\n");
     }
      else if(num==2){
       printf("This too shall pass..\n");
     }
      else if(num==3){
        printf("Be gentle to yourself. You are doing your best!\n");
     }
     else{
       printf("Every Feeling Is Temporary.\n");
     }
}
void grat_journal()
{
  char entry[200];
   printf("Bad days come and go, but we should never to be grateful For what we already have..\n");
   printf("Write down 3 things you are grateful For today:\n");
   for(int i=1;i<=3;i++){
     printf("%d\n",i);
     scanf(" %[^\n]",entry);
    }
   printf("It is nice to notice the smallest of things!\n");
}


