#include <stdio.h>
#include <string.h>

int main()
{
        int score = 0;
        int lifeline = 5;
        char answer[20];

        printf("Quiz Game Started!\n");
        printf("You have 5 lifelines.\n");

        // Question 1
        printf(" What is the most populated country in the world?\n");
        printf("A) China\n");
        printf("B) India\n");
        printf("C) United States\n");
        printf("D) Austrailia\n");
        printf("Enter your answer: ");
        scanf("%s", answer);
        if (answer[0] == 'B'|| answer[0] == 'b' )
        {
        score++;
        printf("Correct answer!\n");
} else {
        lifeline--;
            printf("Incorrect answer!\t \t \t \t You lost one lifeline.\n");
            printf("\t \t \t \t \t \tLifelines remaining: %d\n", lifeline);
        if ( lifeline == 0)
        {
            printf(" You have run out of lifeline ! \n....GAME OVER ....");
            printf("\nYour final score is : %d\n",score);
            return 0;
        }
}

        // Question 2
        printf("Mumbai is the capital of which state?\n");
        printf("A) Bandra\n");
        printf("B) Rajasthan\n");
        printf("C) Maharashtra\n");
        printf("D) Uttar pradesh\n");
        printf("Enter your answer: ");
        scanf("%s", answer);
        if (answer[0] == 'C'|| answer[0] == 'c' )
        {
        score++;
        printf("Correct answer!\n");
} else {
        lifeline--;
            printf("Incorrect answer!\t \t \t \t You lost one lifeline.\n");
            printf("\t \t \t \t \t \tLifelines remaining: %d\n", lifeline);
        if ( lifeline == 0)
        {
            printf(" You have run out of lifeline ! \n....GAME OVER ....");
            printf("\nYour final score is : %d\n",score);
            return 0;
        }
}

        // Question 3
        printf("What is the largest planet in our solar system?\n");
        printf("A) Earth\n");
        printf("B) Saturn\n");
        printf("C) Jupiter\n");
        printf("D) Uranus\n");
        printf("Enter your answer: ");
        scanf("%s", answer);
        if (answer[0] == 'C'|| answer[0] == 'c' )
        {
        score++;
        printf("Correct answer!\n");
} else {
        lifeline--;
            printf("Incorrect answer!\t \t \t \t You lost one lifeline.\n");
            printf("\t \t \t \t \t \tLifelines remaining: %d\n", lifeline);
        if ( lifeline == 0)
        {
            printf(" You have run out of lifeline ! \n....GAME OVER ....");
            printf("\nYour final score is : %d\n",score);
            return 0;
        }
}

        // Question 4
        printf("Which animal give pink milk?\n");
        printf("A) Banthas\n");
        printf("B) Buffalo\n");
        printf("C) Hippos\n");
        printf("D) Sheep\n");
        printf("Enter your answer: ");
        scanf("%s", answer);
        if (answer[0] == 'C'|| answer[0] == 'c' )
        {
        score++;
        printf("Correct answer!\n");
        } 
else {
        lifeline--;
        printf("Incorrect answer!\t \t \t \t You lost one lifeline.\n");
        printf("\t \t \t \t \t \tLifelines remaining: %d\n", lifeline);
        if ( lifeline == 0)
        {
            printf(" You have run out of lifeline ! \n....GAME OVER ....");
            printf("\nYour final score is : %d\n",score);
        return 0;
        }
}

         // Question 5
        printf("What is the chemical symbol for gold?\n");
        printf("A) Ag\n");
        printf("B) Au\n");
        printf("C) Hg\n");
        printf("D) Pb\n");
        printf("Enter your answer: ");
        scanf("%s", answer);
        if (answer[0] == 'B'|| answer[0] == 'b' )
        {
        score++;
        printf("Correct answer!\n");
} else {
        lifeline--;
            printf("Incorrect answer!\t \t \t \t You lost one lifeline.\n");
            printf("\t \t \t \t \t \tLifelines remaining: %d\n", lifeline);
        if ( lifeline == 0)
        {
            printf(" You have run out of lifeline ! \n....GAME OVER ....");
            printf("\nYour final score is : %d\n",score);
            return 0;
        }
}
     
         // Question 6
        printf("What is the capital of France?\n");
        printf("A) Berlin\n");
        printf("B) Paris\n");
        printf("C) London\n");
        printf("D) Rome\n");
        printf("Enter your answer: ");
        scanf("%s", answer);
        if (answer[0] == 'B'|| answer[0] == 'b' )
        {
        score++;
        printf("Correct answer!\n");
} else {
        lifeline--;
            printf("Incorrect answer!\t \t \t \t You lost one lifeline.\n");
            printf("\t \t \t \t \t \tLifelines remaining: %d\n", lifeline);
        if ( lifeline == 0)
        {
            printf(" You have run out of lifeline ! \n....GAME OVER ....");
            printf("\nYour final score is : %d\n",score);
            return 0;
        }
}

        // Question 7
        printf("What is the weight of one Human Eye?\n");
        printf("A) 2 grams\n");
        printf("B) 4 grams\n");
        printf("C) 6 grams\n");
        printf("D) 8 grams\n");
        printf("Enter your answer: ");
        scanf("%s", answer);
        if (answer[0] == 'D'|| answer[0] == 'd' )
        {
        score++;
        printf("Correct answer!\n");
} else {
        lifeline--;
            printf("Incorrect answer!\t \t \t \t You lost one lifeline.\n");
            printf("\t \t \t \t \t \tLifelines remaining: %d\n", lifeline);
        if ( lifeline == 0)
        {
            printf(" You have run out of lifeline ! \n....GAME OVER ....");
            printf("\nYour final score is : %d\n",score);
            return 0;
        }
}

        // Question 8
        printf("What was the name of hindi speaking robot?\n");
        printf("A) Kajal\n");
        printf("B) Arpita\n");
        printf("C) Rashmi\n");
        printf("D) Susmita\n");
        printf("Enter your answer: ");
        scanf("%s", answer);
        if (answer[0] == 'C'|| answer[0] == 'c' )
        {
        score++;
        printf("Correct answer!\n");
} else {
        lifeline--;
            printf("Incorrect answer!\t \t \t \t You lost one lifeline.\n");
            printf("\t \t \t \t \t \tLifelines remaining: %d\n", lifeline);
        if ( lifeline == 0)
        {
            printf(" You have run out of lifeline ! \n....GAME OVER ....");
            printf("\nYour final score is : %d\n",score);
            return 0;
        }
}

        // Question 9
        printf("In which country 'Five Suns are Visible'?\n");
        printf("A) India\n");
        printf("B) China\n");
        printf("C) Japan\n");
        printf("D) Russia\n");
        printf("Enter your answer: ");
        scanf("%s", answer);
        if (answer[0] == 'B'|| answer[0] == 'b' )
        {
        score++;
        printf("Correct answer!\n");
} else {
        lifeline--;
            printf("Incorrect answer!\t \t \t \t You lost one lifeline.\n");
            printf("\t \t \t \t \t \tLifelines remaining: %d\n", lifeline);
        if ( lifeline == 0)
        {
            printf(" You have run out of lifeline ! \n....GAME OVER ....");
            printf("\nYour final score is : %d\n",score);
            return 0;
        }
}

        // Question 10
        printf("What sports does 'Roger Federer' play?\n");
        printf("A) Tennis\n");
        printf("B) Football\n");
        printf("C) Golf\n");
        printf("D) Badminton\n");
        printf("Enter your answer: ");
        scanf("%s", answer);
        if(answer[0] == 'A'|| answer[0] == 'a' )
        {
        score++;
        printf("Correct answer!\n");
} else {
        lifeline--;
            printf("Incorrect answer!\t \t \t \t You lost one lifeline.\n");
            printf("\t \t \t \t \t \tLifelines remaining: %d\n", lifeline);
        if ( lifeline == 0)
        {
            printf(" You have run out of lifeline ! \n....GAME OVER ....");
            printf("\nYour final score is : %d\n",score);
            return 0;
        }
}
        // Question 11
        printf("Which country is known for creating the 'Anime culture'?\n");
        printf("A) China\n");
        printf("B) Japan\n");
        printf("C) India\n");
        printf("D) South Korea\n");
        printf("Enter your answer: ");
        scanf("%s", answer);
        if (answer[0] == 'B'|| answer[0] == 'b' )
        {
        score++;
        printf("Correct answer!\n");
} else {
        lifeline--;
            printf("Incorrect answer!\t \t \t \t You lost one lifeline.\n");
            printf("\t \t \t \t \t \tLifelines remaining: %d\n", lifeline);
        if ( lifeline == 0)
        {
            printf(" You have run out of lifeline ! \n....GAME OVER ....");
            printf("\nYour final score is : %d\n",score);
            return 0;
        }
}

        // Question 13
        printf("In which country was the game of Chess invented?\n");
        printf("A) India\n");
        printf("B) China\n");
        printf("C) Greece\n");
        printf("D) Australia\n");
        printf("Enter your answer: ");
        scanf("%s", answer);
        if (answer[0] == 'B'|| answer[0] == 'b' )
        {
        score++;
        printf("Correct answer!\n");
} else {
        lifeline--;
            printf("Incorrect answer!\t \t \t \t You lost one lifeline.\n");
            printf("\t \t \t \t \t \tLifelines remaining: %d\n", lifeline);
        if ( lifeline == 0)
        {
            printf(" You have run out of lifeline ! \n....GAME OVER ....");
            printf("\nYour final score is : %d\n",score);
            return 0;
        }
}
           // Question 14
        printf("What is the largest type of shark?\n");
        printf("A) Bull Shark\n");
        printf("B) Whale Shark\n");
        printf("C) Tiger Shark\n");
        printf("D) Simple Shark\n");
        printf("Enter your answer: ");
        scanf("%s", answer);
        if (answer[0] == 'B'|| answer[0] == 'b' )
        {
        score++;
        printf("Correct answer!\n");
} else {
        lifeline--;
            printf("Incorrect answer!\t \t \t \t You lost one lifeline.\n");
            printf("\t \t \t \t \t \tLifelines remaining: %d\n", lifeline);
        if ( lifeline == 0)
        {
            printf(" You have run out of lifeline ! \n....GAME OVER ....");
            printf("\nYour final score is : %d\n",score);
            return 0;
        }
    }

        // Question 15
        printf("Where is the smallest bone in the body located?\n");
        printf("A) Knee\n");
        printf("B) Ear\n");
        printf("C) Little Finger\n");
        printf("D) Nose\n");
        printf("Enter your answer: ");
        scanf("%s", answer);
        if (answer[0] == 'B'|| answer[0] == 'b' )
        {
        score++;
        printf("Correct answer!\n");
} else {
        lifeline--;
            printf("Incorrect answer!\t \t \t \t You lost one lifeline.\n");
            printf("\t \t \t \t \t \tLifelines remaining: %d\n", lifeline);
        if ( lifeline == 0)
        {
            printf(" You have run out of lifeline ! \n....GAME OVER ....");
            printf("\nYour final score is : %d\n",score);
            return 0;
        }
}

        printf("Quiz Game Over!\n");
        printf("Your final score is: %d/15\n", score);
        if (lifeline > 0)
        {
        printf("You have %d lifelines remaining.\n", lifeline);
        }
else
        {
        printf("You have run out of lifelines.\n");
        }

        return 0;
}

