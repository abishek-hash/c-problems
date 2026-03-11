/******************************************************************************

Rainfall Pattern Analyzer
Description
A weather station records daily rainfall to analyze heavy rain days.
Problem Statement
Calculate total rainfall and count days where rainfall exceeded 50 mm.
Input Format
Integer N (number of days)
 N integers (rainfall per day in mm)
Output Format
Total Rainfall
 Heavy Rain Days
Test Cases
Input
5
30 60 45 80 20

Output
Total Rainfall: 235
Heavy Rain Days: 2

Input
3
10 20 30

Output
Total Rainfall: 60
Heavy Rain Days: 0

Input
4
55 70 90 40

Output
Total Rainfall: 255
Heavy Rain Days: 3

Explanation (TC1)
The loop adds all rainfall values.
 Rainfall above 50 mm is counted as heavy rain.
Explanation (TC3)
Only one day has rainfall below the threshold.

*******************************************************************************/
#include <stdio.h>

int main()
{
            int days;
            int rainfall=0;
            int heavy_rainfall_days=0;
            int total_rainfall_days=0;
            
            printf("Enter a Number of times Rainfalled:");
            scanf("%d",&days);
            
            printf("Enter of Amount (mm) Rainfalled:");
            
            for(int i=0;i<days;i++){
                scanf("%d",&rainfall);
                total_rainfall_days+=rainfall;
                if(total_rainfall_days>=50)
                heavy_rainfall_days++;
            }
            printf("Total Rainfall:%d\n",total_rainfall_days);
            printf("Heavy Rain Days:%d",heavy_rainfall_days);

    return 0;
}
