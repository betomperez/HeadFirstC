#include <stdio.h>

struct preferences {
	const char *food;
	float exercise_hours;
};

struct fish {
	const char *name;
	const char *species;
	int teeth;
	int age;
	struct preferences care;
};

void catalog(struct fish f)
{
	printf("%s is a %s with %i teeth. He is %i\n", f.name, f.species, f.teeth, f.age);
}

void label(struct fish f)
{
	printf("Name: %s\nSpecies: %s\n%i years old, %i teeth\n", f.name, f.species, f.age, f.teeth);
}

int main()
{
	struct fish snappy = {"Snappy", "Piranha", 10, 3, {"Meat", 7.5}};
	catalog(snappy);
	printf("%s likes to eat %s\n", snappy.name, snappy.care.food);
	printf("%s likes to exercise for %.2f hours\n", snappy.name, snappy.care.exercise_hours);
	label(snappy);
	return 0;
}
