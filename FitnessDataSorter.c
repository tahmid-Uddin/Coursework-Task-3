#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct for the fitness data
typedef struct {
    char date[11];
    char time[6];
    int steps;
} FitnessData;

// Function to tokenize a record
void tokeniseRecord(char *record, char delimiter, char *date, char *time, int *steps) {
    char *ptr = strtok(record, &delimiter);
    if (ptr != NULL) {
        strcpy(date, ptr);
        ptr = strtok(NULL, &delimiter);
        if (ptr != NULL) {
            strcpy(time, ptr);
            ptr = strtok(NULL, &delimiter);
            if (ptr != NULL) {
                *steps = atoi(ptr);
            }
        }
    }
}


int main() {
    int bufferSize = 100;
    char line[bufferSize];
    char filename[bufferSize];
    int numberOfRecords = 0;
    FILE *input;
    
    printf("Enter filename: ");
    fgets(line, bufferSize, stdin);
    sscanf(line, " %s ", filename);
    input = fopen(filename, "r");
    
    if (input == NULL) {
        printf("Error invalid file\n");
        return 1;
    }

    while (fgets(line, bufferSize, input)!= NULL) {
        numberOfRecords++;
    }

    rewind(input);
    FitnessData fileData[numberOfRecords];

    int index = 0;
    char delimiter = ',';
    while (fgets(line, bufferSize, input)!= NULL) {
        char *ptr = strtok(NULL, &delimiter);
    
        while (ptr != NULL) {
            if (ptr == '') {

            }
        }

        printf("%s,", ptr);
        ptr = strtok(NULL, &delimiter);
        printf("%s,", ptr);
        ptr = strtok(NULL, &delimiter);
        printf("%s,", ptr);




        // tokeniseRecord(line, ',', fileData[index].date, fileData[index].time, &fileData[index].steps);
        // printf("%d) %s %s %d\n", index+1, fileData[index].date, fileData[index].time, fileData[index].steps);
        // index++;
    }

    
}
