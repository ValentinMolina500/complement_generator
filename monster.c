//Partnered with Brandon Ngyugen
#include <stdio.h>
#include <string.h>

#define NAME_SIZE 15
#define FILM_SIZE 50
#define WEAKNESS_SIZE 25
#define DEFEATED_BY_SIZE 30

typedef struct
	{
		char 	name[NAME_SIZE];
		char	film[FILM_SIZE];
		int 	year;
		char	weakness[WEAKNESS_SIZE];
		char	defeatedBy[DEFEATED_BY_SIZE];
		double	rating;
	} Monster;

Monster monsters[] = {
	{
		"Count Dracula",
		"Dracula",
		1931,
		"wooden stake",
		"Van Helsing",
		7.6,
	},
	{
		.rating = 8.0,
		.film = "Frankenstein",
		.weakness = "fire",
		.name = "The Monster",
		.year = 1931,
		.defeatedBy = "villagers",
	},
	{
		.rating = 7.5,
		.film = "Godzilla",
		.weakness = "Nuke",
		.name = "Godzilla",
		.year = 1954,
		.defeatedBy = "Humans",
	},
	{
		"",
	},
};
			
void monster_print (Monster monsters)
{
	int colonIndent = 15;

	printf ("%*s:  %s\n", colonIndent, "Name", monsters.name);
	printf ("%*s:  %s\n", colonIndent, "Film", monsters.film);
	printf ("%*s:  %i\n", colonIndent, "Year", monsters.year);
	printf ("%*s:  %s\n", colonIndent, "Weakness", monsters.weakness);
	printf ("%*s:  %s\n", colonIndent, "Defeated by", monsters.defeatedBy);
	printf ("%*s:  %.1f\n", colonIndent, "Rating", monsters.rating);
}


int main (void)
{
	int i = 0;

	while (monsters[i].name[0] != 0) 
	{
		monster_print(monsters[i]);
		printf ("\n");
		i++;
	}


	return 0;
}








