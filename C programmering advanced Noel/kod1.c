#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MaxWords 50
#define MaxLength 10

int main(){

	int getWord(FILE*,char[]);
	int search(char[], char[][MaxLength+1], int);
	void AddToList(char[][MaxLength+1],int[],int,int);
	void printResults(FILE *,char[][MaxLength+1], word[MaxLength+1]);
	char wordList[MaxWords+1][MaxLength+1], word[MaxLength+1];
	int frequency[MaxWords+1], numWords = 0, j, loc;
	FILE * in = fopen("passage.txt","r");
	if(in == NULL){
		printf("Cannot find file\n");
		exit(1);
	}
	FILE *out = fopen("output.txt", "w");
	if(out == NULL){
		printf("Cannot create output file\n");
		exit(2);
	}
	for(j = 1; j <= MaxWords; j++)frequency[j] = 0;
		while(getWord(in, word) != 0){
			loc = binarySearch(word, wordlist, 1, numWords);
			if(loc > 0) ++frequency[loc];
			else//this is a new word
				if(numWords < MaxWords){//if table is not full
					AddToList(word, wordlist, frequency, -loc, numWords);
					++numWords;
				}
				else fprintf(out,  "%s not added to table\n", word);
		}
		printResults(out, wordlist, frequency, numWords);
	}//end main

int getWord(FILE *in, char str[]){
	//stores the next word, if any, in str; word is converted to lowercase
	//returns 1 if a word is found; 0, otherwise
	char ch;
	int n = 0;
	//read over white space
	while(!isalpha(ch = getc(in)) && ch != EOF);//empty while body
	if (ch == EOF)return 0;
	str[n++] = tolower(ch);
	while(!isalpha(ch = getc(in)) && ch != EOF)
		if(n < MaxLength)str[n++] = tolower(ch);
	str[n] = '\0';
	return 1;
}//end of getword

int binarySearch(char item[], char list[][MaxLength+1], int lo, int hi){
	//Searches list[lo..hi] for item; if found, return to its location
	//if not found, return the negative of the location in which to insert
	while(lo <= hi{
		int mid = (lo + hi) / 2;
		int result = strcmp(item, list[mid]);
		if(result == 0)return mid;
		if(result < 0)hi = mid -1;
		else lo = mid + 1;
	}
	return -lo; //not found; should be inserted in location lo
}// end binarySearch

void addToList(char item[], char list[][MaxLength+1], int freq[], int p, int n){
	//Adds item in position list[p]; sets freq[p] to 1
	//shifts list[n] down to list[p], to the right
	int j;
	for(j = n; j >= p; j--){
		strcpy(list[j+1], list[j]);
		freq[j+1] = freq[j];
	}
	strcpy(list[p], item);
	freq[j+1] = 1;
}//end addToList

void printResults(FILE *out, char list[][MaxLength+1], int freq[], int n){
	int j;
	fprintf(out, "\nWords   Frequency \n\n");
	for(j = 1; j <= n; j++)
		fprintf(out, "%-15s %2d\n", list[j], freq[j]);
}//end printResults