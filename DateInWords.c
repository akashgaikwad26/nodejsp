/******************************************
 /*Program to print the date in legal form
 * 
 * Enter date(MM/DD/YYY): 05/25/2018
 * 25th May, 2018
 ******************************************/

# include <stdio.h> 
# include <string.h>
# include <assert.h>

int dateToFormat(int day, int month, int year, char *str)
{       

    char *months[] = {
                        "January", "February", "March", "April",
                        "May", "June", "July", "August", 
                        "September", "October", "November", "December",
                      };
    char numVal[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    // add day value to string
    char temp[3] =  {'0', '0', '\0'};

    int num1 = day / 10;
    int num2 =day % 10;
    temp[0] = numVal[num1];
    temp[1] = numVal[num2];

    strcat(str, temp);

    // if day is 1 or 21 or 31, add the suffix "st"
    if(day == 1 || day == 21 || day == 31)
    {
        strcat(str, "st ");
    }

    // if day is 2 or 22, add the suffix "nd"
    else if(day == 2 || day == 22)
    {
        strcat(str, "nd ");
    }

    // if day is 3 or 23, add the suffix "rd"
    else if(day == 3 || day == 23)
    {
        strcat(str, "rd ");
    }

    // for everything else add the suffix "th"
    else
    {
        strcat(str, "th ");
    }    
    strcat(str, months[month - 1]);
    strcat(str, ", ");
    char yearStr[5] = {'0', '0', '0', '0','\0'};
    num1 = year/1000;
    num2 = year%1000;
    yearStr[0] = numVal[num1];
    num1 = num2/100;
    num2 = num2%100;
    yearStr[1] = numVal[num1];
    num1 = num2/10;
    num2 = num2%10;
    yearStr[2] = numVal[num1];
    yearStr[3] = numVal[num2];
    strcat(str, yearStr);

    printf("Dt set to %s\n", str);
    printf("Return value = %d\n", strlen(str));

    return strlen(str);
}

int main(void)
{
    char retVal[25] = "";
    assert(dateToFormat(1, 1, 2023, retVal) == 18 && !strcmp(retVal, "01st January, 2023"));
    strcpy(retVal, "");
    assert(dateToFormat(29, 10, 2000, retVal) == 18 && !strcmp(retVal, "29th October, 2000"));
    strcpy(retVal, "");
    assert(dateToFormat(10, 5, 1984, retVal) == 14 && !strcmp(retVal, "10th May, 1984"));
    strcpy(retVal, "");
    assert(dateToFormat(2, 3, 1984, retVal) == 16 && !strcmp(retVal, "02nd March, 1984"));
    strcpy(retVal, "");
    assert(dateToFormat(23, 4, 1999, retVal) == 16 && !strcmp(retVal, "23rd April, 1999"));
    strcpy(retVal, "");
    assert(dateToFormat(23, 4, 0, retVal) == 16 && !strcmp(retVal, "23rd April, 0000"));
    strcpy(retVal, "");
    assert(dateToFormat(16, 12, 9999, retVal) == 19 && !strcmp(retVal, "16th December, 9999"));
    return 0;
}