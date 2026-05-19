#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>

void random_name(char *buffer, int length) {

    const char charset[] =
        "abcdefghijklmnopqrstuvwxyz0123456789";

    for (int i = 0; i < length; i++) {

        int key = rand() % (sizeof(charset) - 1);
        buffer[i] = charset[key];
    }

    buffer[length] = '\0';
}

int main() {

    srand(time(NULL));

    char extension[10];
    char filename[64];
    char fullpath[MAX_PATH];
    char userprofile[MAX_PATH];

    printf("=== CheatPractice ===\n\n");

    printf("File extension (txt/log/dat): ");
    scanf("%9s", extension);

    random_name(filename, 12);

    strcpy(userprofile, getenv("USERPROFILE"));

    sprintf(
        fullpath,
        "%s\\Desktop\\%s.%s",
        userprofile,
        filename,
        extension
    );

    FILE *file = fopen(fullpath, "w");

    if (file == NULL) {

        printf("Failed to create file.\n");
        return 1;
    }

    fprintf(file, "Practice file");
    fclose(file);

    printf("\nFile created and opened.\n");
    printf("You have 10 seconds to find it.\n");

    char cmd[512];

    sprintf(cmd, "start \"\" \"%s\"", fullpath);

    system(cmd);

    Sleep(10000);

    remove(fullpath);

    printf("\nFile automatically deleted.\n");

    char attempt[128];

    printf("\nEnter the full file name: ");
    scanf("%127s", attempt);

    char correct[128];

    sprintf(correct, "%s.%s", filename, extension);

    if (strcmp(attempt, correct) == 0) {

        printf("\nVALID\n");
    }
    else {

        printf("\nINVALID\n");
        printf("Correct file: %s\n", correct);
    }

    system("pause");
    return 0;
}