//Antonio Urdaneta
//9/13/2022
//2D Arrays



#include <stdlib.h>
#include <stdio.h>
#define COLS 5
#define ROWS 5
// prototype
int addStatsForAPlayer(int stats[][COLS], int eSize);
void displayPlayerStats(int stats[][COLS], int eSize);

int main() {
int stats[ROWS][COLS] = {0};
int eSize = 0;

eSize = addStatsForAPlayer(stats, eSize);




displayPlayerStats(stats, eSize);






}// end of main

int addStatsForAPlayer(int stats[][COLS], int eSize) {

	if (eSize == ROWS) {
		printf("NO SPACE....");
		system("pause");
		return eSize;
	}// end of if

	printf("How many times did player  %i bat: ", eSize);
	scanf_s("%i", &stats[eSize][0]);
	printf("How many times did player  %i get a single: ", eSize);
	scanf_s("%i", &stats[eSize][1]);
	printf("How many times did player  %i get a double: ", eSize);
	scanf_s("%i", &stats[eSize][2]);
	printf("How many times did player  %i get a triple: ", eSize);
	scanf_s("%i", &stats[eSize][3]);
	printf("How many times did player  %i hit a home run: ", eSize);
	scanf_s("%i", &stats[eSize][4]);

	return eSize + 1;
}

void displayPlayerStats(int stats[][COLS], int eSize) {
	int sum = 0;
	float average = 0.0;
	if (eSize == 0) {
		printf("no player data entered");
		system("pause");
		return;
	}// end if
	printf("\n\tID\tAB\t1B\t2B\t3B\tHR\tAVG");
	printf("\n\--\t--\t--\t--\t--\t--\t---");

		for (int i = 0; i < eSize; i++) {
			printf("\n\t%i\t", i);
			sum = 0;
			for (int j = 0; j < COLS; j++) {
				printf("%i\t", stats[i][j]);
				if (j > 0)
					sum += stats[i][j];
			} // end of inner for loop
			average = sum / (float)stats[i][0];
			printf("%.3f", average);

		}// end outter for loop



}// end display 