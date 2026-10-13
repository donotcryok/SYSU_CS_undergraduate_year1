#include <stdio.h>

float weight = 100.0;
int change_mood(int mood, int val);
void change_weight(float factor);
int rua(int mood);
int feed(int mood);
int do_nothing(int mood);

int main()
{
    int mood = 1, act,i;

    for (i=0; i<7; i++) {
        scanf("%d", &act);

        switch (act) {
            case 2: mood = rua(mood); break;
            case 1: mood = feed(mood); break;
            case 0: mood = do_nothing(mood); break;
        }
    }
    
    return 0;
}

int change_mood(int mood, int val)
{
    int new_mood = mood + val;

    if (new_mood > 0)
    	printf("Little Qin is happy! XD\n");
    else if (new_mood < 0)
    	printf("Little Qin is sad... : (\n");
    else
    	printf("Little Qin wants to play with you~ : )\n");

    return new_mood;
}

void change_weight(float factor)
{
    weight *= factor;

    if (weight < 50.0)
    	printf("Cute!\n");
    else if (weight >= 50.0 && weight <= 200.0)
    	printf("So cute!\n");
    else if (weight > 200.0)
    	printf("Extremely CUTE!\n");
}

int rua(int mood)
{
    int new_mood = change_mood(mood, 1);
    return new_mood;
}

int feed(int mood)
{
    int new_mood = change_mood(mood, 2);
    change_weight(2.0);
    return new_mood;
}

int do_nothing(int mood)
{
    int new_mood = change_mood(mood, -1);
    change_weight(0.75);
    return new_mood;
}

