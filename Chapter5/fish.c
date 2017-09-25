#include <stdio.h>

typedef struct {
	const char *description;
	float duration;
}exercise;

typedef struct {
	const char *ingredients;
	float weight;
}meal;

typedef struct {
	meal food;
	exercise exercise;
}preferences;

typedef struct {
	const char *name;
	const char *species;
	int teeth;
	int age;
	preferences care;
}fish;

void catalog(fish f)
{
	printf("%s is a %s with %i teeth. He is %i\n", f.name, f.species, f.teeth, f.age);
}

void label(fish f)
{
	printf("Name: %s\nSpecies: %s\n%i years old, %i teeth\n", f.name, f.species, f.age, f.teeth);
	printf("Feed with %.2f lbs of %s and allow %s for %.2f", f.care.food.weight, f.care.food.ingredients, f.care.exercise.description, f.care.exercise.duration);
}

int main()
{
	fish snappy = {"Snappy", "Piranha", 69, 4, {{"meat", 0.2}, {"swim in the jacuzzi", 7.5}}};
	catalog(snappy);
	label(snappy);
	return 0;
}
