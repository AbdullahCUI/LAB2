/**
 * Author: Abdullah
 *
 * This program interactively prompts the user for
 * their birthday and computes how old they are.
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main(int argc, char **argv) {

  char name_1[100];
  printf("Please Enter Your First Name (no spaces) followed by ENTER: ");
  scanf("%s", &name_1);

//year declared in integer data type and general store 0
  int year = 0;
  printf("Enter the year in which you were born: ");
  scanf("%d", &year);

//month variable is declared in integer data type and general store 0
  int month = 0;
  printf("Enter the month in which you were born (1-12): ");
  scanf("%d", &month);

//day is declared as a variable and declared in integer data type store value 0
  int day = 0;
  printf("Enter the day of the month in which you were born (1-31): ");
  scanf("%d", &day);

//str is array
  char str[100];
  //time_t is reserved word and declared variable now and assigin time is null
  time_t now = time(NULL);
  //use structer in their
  struct tm *ptrNow;
  struct tm bday;
  bday.tm_mday = day;
  bday.tm_mon = month - 1;
  //tm_year is the number of years since 1900, so correcting:

  //user enter corrent year is subtract from 1900
  bday.tm_year = year - 1900;

  //tm_sec (sec mean second) issigned value 0
  bday.tm_sec = 0;

  //tm_min meant time mintus and assigined 0 value
  bday.tm_min = 0;

  //tm_hour mean time hours and assigned 0 value
  bday.tm_hour = 0;

  //tm_isdst meandaylight saving timeflag
  bday.tm_isdst = -1; //let system determine DST or not
  ptrNow = localtime(&now);
  strftime(str,80,"%Y/%m/%d",ptrNow);
  printf("Today is %s\n", str);
  strftime(str,80,"%Y/%m/%d",&bday);
  printf("Your birthday was %s\n", str);

  time_t bdayT = mktime(&bday);
  long diff = (long) difftime(now, bdayT);

//year declared in integer data type


//diff is dividing by (365.25 days multipli 24 hours multipli 60 mintus and multipli 60 sec)
  int years = diff / (365.25 * 24 * 60 * 60);

  //from diff subtract the vlaue of year
  diff -= years * (365.25 * 24 * 60 * 60);

  //in declared in integer data type and assigned value is 


  //diff divided by (24 hours * 60 mints and multipli 60 sec)
  int days = diff / (24 * 60 * 60);

// lets laste for week 
//week declared in integer data type 
//assigind value day is divided by 7
  int weeks = days / 7;
  //and a reminder is assigned to days
  days = days % 7;

  //laste message

  printf("Hello, %s.  You are %d years, %d weeks, and %d days old today\n", name_1, years, weeks, days);

}
