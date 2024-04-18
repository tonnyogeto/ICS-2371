// TONNY MAISHA OGETO
// ENE212-0086/2021


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp = NULL;
    char name[50];
    int age;
    
    // Ask for user input
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    
    // Open file for reading and writing
    fp = fopen("abc.txt", "r+");
    if (fp == NULL) {
        // If file doesn't exist, create it
        fp = fopen("abc.txt", "w+");
        if (fp == NULL) {
            printf("Error creating file!");
            exit(1);
        }
    }
    
    // Read existing information from file, if any
    fscanf(fp, "%*[^\n]\n"); // Skip the first line
    fscanf(fp, "Name: %s\n", name);
    fscanf(fp, "Age: %d\n", &age);
    
    // Display existing information
    printf("\nExisting Information:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    
    // Ask for modified information
    printf("\nEnter your modified name: ");
    scanf("%s", name);
    printf("Enter your modified age: ");
    scanf("%d", &age);
    
    // Move file pointer to the beginning of the file for rewriting
    rewind(fp);
    
    // Write modified information to file
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);
   
    // Close the file
    fclose(fp);
    
    printf("\nModified data saved successfully to abc.txt!\n");
    
    return 0;
}
