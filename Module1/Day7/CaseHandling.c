#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define BUFFER_SIZE 4096

void changeCase(char *buffer, int option)
{
    switch (option)
    {
        case 'u':
            for (int i = 0; buffer[i] != '\0'; ++i)
                buffer[i] = toupper(buffer[i]);
            break;
        case 'l':
            for (int i = 0; buffer[i] != '\0'; ++i)
                buffer[i] = tolower(buffer[i]);
            break;
        case 's':
            buffer[0] = toupper(buffer[0]);
            for (int i = 1; buffer[i] != '\0'; ++i)
                buffer[i] = tolower(buffer[i]);
            break;
        default:
            break;
    }
}

int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        printf("Insufficient arguments. Usage: ./cp <option> <source_file> <target_file>\n");
        return 1;
    }

    char *option = argv[1];
    char *sourcePath = argv[2];
    char *targetPath = argv[3];

    FILE *sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL)
    {
        printf("Failed to open the source file.\n");
        return 1;
    }

    FILE *targetFile = fopen(targetPath, "w");
    if (targetFile == NULL)
    {
        printf("Failed to create the target file.\n");
        fclose(sourceFile);
        return 1;
    }

    char buffer[BUFFER_SIZE];
    int optionLength = strlen(option);
    int caseOption = 0;
    if (optionLength > 1)
    {
        caseOption = option[1];
    }

    while (fgets(buffer, BUFFER_SIZE, sourceFile) != NULL)
    {
        if (caseOption != 0)
        {
            changeCase(buffer, caseOption);
        }
        fputs(buffer, targetFile);
    }

    fclose(sourceFile);
    fclose(targetFile);

    printf("File copied successfully.\n");

    return 0;
}