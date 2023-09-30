//
//  main.c
//  Flights
//
//  Created by keenan ray on 10/19/22.
//

#include <stdio.h>
#include "flights.h"
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    FILE * inFile = NULL;
    char acode[3];
    
    if(argc!=2){
        printf("ERROR NO ARGS");
        return 1;
    }
    inFile = fopen(argv[1], "r");
    if(inFile == NULL){
        printf("ERROR FILE NOT OPEN");
        return 1;
    }
    char lines[100];
    Flight * flights = NULL;
    flights = (Flight*)malloc(NUM_FLIGHTS * sizeof(Flight));
    int i =0;
    while( fgets(lines, 99, inFile)!= NULL){
        sscanf(lines, "%3s,%3s,%2s,%5d", flights[i].origin, flights[i].destination, flights[i].airline, &flights[i].passengers);
        i++;
    }
    int counter = 0;
    int sum = 0;
    scanf("%2s",acode );
    for(int j = 0; j <i; j++){
        if (strcmp(acode, flights[j].airline)==0){
            counter ++;
            sum = sum + flights[j].passengers;
        }
        
    }
    
    printf("airline: %s\n", acode);
    printf("flights: %d\n", counter);
    printf("passengers: %d\n", sum);
    free(flights);
    fclose(inFile);
    
    return 0;
}
