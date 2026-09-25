#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Authentic representation of traditional Vedic-based phonetic sets (Syllables)
const char* alphabetSyllables[8][4] = {
    {"Chu", "Che", "Cho", "La"},  // Ashwini alignment
    {"Lee", "Lu", "Le", "Lo"},    // Bharani alignment
    {"A", "Ee", "U", "Ea"},       // Krittika alignment
    {"O", "Va", "Vee", "Voo"},    // Rohini alignment
    {"Ve", "Vo", "Ka", "Ke"},     // Mrigashira alignment
    {"Ku", "Gha", "Ng", "Na"},    // Ardra alignment
    {"Ke", "Ko", "Ha", "He"},     // Punarvasu alignment
    {"Hu", "He", "Ho", "Da"}      // Pushya alignment
};

void generateBirthAlphabets(int day, int month, int hour, int minutes) {
    // Mathematical hash utilizing user time variables to consistently target a deterministic bucket
    int dynamicIndex = (day + month + hour + minutes) % 8;
    
    // Use the minute quarters to dynamically calculate a specific "Pada" (Quarter 1 to 4)
    int padaIndex = (minutes / 15) % 4;

    // Extract the suggested primary syllables
    const char* primarySyllable = alphabetSyllables[dynamicIndex][padaIndex];

    printf("\n=========================================\n");
    printf("        BIRTH ALPHABET GENERATOR         \n");
    printf("=========================================\n");
    printf("Input Date & Time: %02d-%02d | %02d:%02d\n", day, month, hour, minutes);
    printf("-----------------------------------------\n");
    printf("Your cosmic starting syllable/letter is:\n");
    printf(">>>  %s  <<<\n\n", primarySyllable);
    
    printf("Primary Recommended Letter: %s\n", primarySyllable);
    printf("Alternate Auspicious Syllables: ");
    
    // Print alternate options within the same cosmic grouping
    int first = 1;
    for (int i = 0; i < 4; i++) {
        if (strcmp(alphabetSyllables[dynamicIndex][i], primarySyllable) != 0) {
            if (!first) {
                printf(", ");
            }
            printf("%s", alphabetSyllables[dynamicIndex][i]);
            first = 0;
        }
    }
    printf("\n-----------------------------------------\n");
    printf("Calculated mapping derived based on hour quartile configuration.\n");
    printf("=========================================\n");
}

int main() {
    int day, month, year, hour, minute;

    printf("Enter Date of Birth (DD-MM-YYYY): ");
    if (scanf("%d-%d-%d", &day, &month, &year) != 3) {
        printf("Invalid date format.\n");
        return 1;
    }

    printf("Enter Time of Birth in 24hr format (HH:MM): ");
    if (scanf("%d:%d", &hour, &minute) != 2) {
        printf("Invalid time format.\n");
        return 1;
    }

    // Basic input validation
    if (day < 1 || day > 31 || month < 1 || month > 12 || hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        printf("Error: Please check your input numbers. Invalid date or time values entered.\n");
        return 1;
    }

    generateBirthAlphabets(day, month, hour, minute);

    return 0;
}
