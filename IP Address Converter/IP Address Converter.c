#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *decimalToBinary(int decimal)
{
    char *binary = (char *)malloc(9 * sizeof(char));
    if (!binary)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    binary[8] = '\0';
    int i;
    for (i = 7; i >= 0; --i)
    {
        binary[i] = (decimal % 2) + '0';
        decimal /= 2;
    }
    return binary;
}

int binaryToDecimal(char *binary)
{
    int decimal = 0;
    int i;
    for (i = 0; i < 8; ++i)
    {
        decimal = decimal * 2 + (binary[i] - '0');
    }
    return decimal;
}

int main()
{
    int choice;
    printf("Choose an option:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        char ip_address[16];
        printf("Enter IPv4 address (e.g., 192.168.1.1): ");
        scanf("%s", ip_address);

        char *token = strtok(ip_address, ".");
        printf("Equivalent binary: ");
        while (token != NULL)
        {
            int decimal = atoi(token);
            char *binary = decimalToBinary(decimal);
            printf("%s", binary);
            free(binary);
            token = strtok(NULL, ".");
            if (token != NULL)
            {
                printf(".");
            }
        }
        printf("\n");
    }
    else if (choice == 2)
    {
        char binary_ip[35];
        printf("Enter binary IPv4 address (e.g., 11000000.10101000.00000000.00000010): ");
        scanf("%s", binary_ip);

        char *token = strtok(binary_ip, ".");
        printf("Equivalent decimal: ");
        while (token != NULL)
        {
            int decimal = binaryToDecimal(token);
            printf("%d", decimal);
            token = strtok(NULL, ".");
            if (token != NULL)
            {
                printf(".");
            }
        }
        printf("\n");
    }
    else
    {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}