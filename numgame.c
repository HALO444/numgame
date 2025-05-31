#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void clear_sys();
int game_menu_1();
void ascii();
void game_start(int num);
void ask_problem(int number_limits[]);


int main()
{   int resize = system("printf '\033[8;35;100t'");
    srand(time(NULL));
    int num = game_menu_1();
    game_start(num);
    return 0;
}

void ask_problem(int number_limits[])
{   
    //clear_sys();
    //ascii();
        int user_input;
        int number_0 = (rand() % number_limits[1]) + number_limits[0];
        int number_1 = (rand() % number_limits[1]) + number_limits[0]; 
        printf("What is %d + %d : ", number_0,number_1);
        scanf("%d",&user_input);
        //printf("hello");
        if (user_input == number_0 + number_1)
        {
            printf("     Answer is correct ✅ \n");
        }
        else
        {
            printf("     Answer is Wrong ❌ \n");
            printf("     Correct answer is %d \n", number_0 + number_1);
        }


}

void game_start(int num)
{
 //int number_limits[2];
 int question;   
 //printf("fff");
 clear_sys();
 ascii();
 for(question = 0;question < 10;question++)
 {
   if (num == 1)
   {
    int number_limits[2] = {1,9};
    //return number_limits;
    ask_problem(number_limits); 
   }
   else if (num == 2)
   {
    int number_limits[2] = {10,99};
    ask_problem(number_limits);
    //return number_limits;
   }
   else if (num == 3)
   {
    int number_limits[2] = {100,999};
    ask_problem(number_limits);
    //return number_limits;
   }
   else
   {
    int number_limits[2] = {1000,9999};
    ask_problem(number_limits);
    //return number_limits;
   }
   
   
 }
}

void ascii()
{
     const char* ascii_art = 
"__    __                                 ______                                     \n"
"/  \\  /  |                               /      \\                                    \n"
"$$  \\ $$ | __    __  _____  ____        /$$$$$$  |  ______   _____  ____    ______  \n"
"$$$  \\$$ |/  |  /  |/     \\/    \\       $$ | _$$/  /      \\ /     \\/    \\  /      \\ \n"
"$$$$  $$ |$$ |  $$ |$$$$$$ $$$$  |      $$ |/    | $$$$$$  |$$$$$$ $$$$  |/$$$$$$  |\n"
"$$ $$ $$ |$$ |  $$ |$$ | $$ | $$ |      $$ |$$$$ | /    $$ |$$ | $$ | $$ |$$    $$ |\n"
"$$ |$$$$ |$$ \\__$$ |$$ | $$ | $$ |      $$ \\__$$ |/$$$$$$$ |$$ | $$ | $$ |$$$$$$$$/ \n"
"$$ | $$$ |$$    $$/ $$ | $$ | $$ |______$$    $$/ $$    $$ |$$ | $$ | $$ |$$       |\n"
"$$/   $$/  $$$$$$/  $$/  $$/  $$//      |$$$$$$/   $$$$$$$/ $$/  $$/  $$/  $$$$$$$/ \n"
"                                 $$$$$$/                                             \n"
"                                                                                     \n";
    printf("%s", ascii_art);
}

void clear_sys()
{
    int systme_clear = system("clear");
}

int game_menu_1()
{   
    int num;
    do
    {
        clear_sys();
        ascii();    
        printf("Choose your adventure:\n");
        printf(" ");
        printf("1. Easy Peasy Lemon Squeezy\n");
        printf("\n");
        printf("2. Slightly Trickier\n");
        printf("\n");
        printf("3. The Challenge of Champions\n");
        printf("\n");
        printf("4. The Impossible Quest\n");
        printf("\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &num);
    }
    while (!(num >= 1 && num <= 4));
    return num;
    
    
    
}