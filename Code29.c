#include <stdio.h>
#include <string.h>

struct Time {
    int hour;
    int minute;
};

struct TrainInfo {
    int trainNo;
    char trainName[50];
    struct Time departure;
    struct Time arrival;
    char startStation[50];
    char endStation[50];
};

void listTrainsByDepartureStation(struct TrainInfo trains[], int count, char *station) {
    printf("Trains departing from %s:\n", station);
    for (int i = 0; i < count; i++) {
        if (strcmp(trains[i].startStation, station) == 0) {
            printf("Train No: %d, Train Name: %s\n", trains[i].trainNo, trains[i].trainName);
        }
    }
}

void listTrainsByDepartureTime(struct TrainInfo trains[], int count, char *station, struct Time time) {
    printf("Trains departing from %s at %02d:%02d:\n", station, time.hour, time.minute);
    for (int i = 0; i < count; i++) {
        if (strcmp(trains[i].startStation, station) == 0 &&
            trains[i].departure.hour == time.hour && trains[i].departure.minute == time.minute) {
            printf("Train No: %d, Train Name: %s\n", trains[i].trainNo, trains[i].trainName);
        }
    }
}

void listTrainsByDepartureWithinHour(struct TrainInfo trains[], int count, char *station, struct Time time) {
    printf("Trains departing from %s within one hour of %02d:%02d:\n", station, time.hour, time.minute);
    for (int i = 0; i < count; i++) {
        if (strcmp(trains[i].startStation, station) == 0 &&
            ((trains[i].departure.hour == time.hour && trains[i].departure.minute >= time.minute) ||
             (trains[i].departure.hour == time.hour + 1 && trains[i].departure.minute < time.minute))) {
            printf("Train No: %d, Train Name: %s\n", trains[i].trainNo, trains[i].trainName);
        }
    }
}

void listTrainsByStations(struct TrainInfo trains[], int count, char *startStation, char *endStation) {
    printf("Trains between %s and %s:\n", startStation, endStation);
    for (int i = 0; i < count; i++) {
        if (strcmp(trains[i].startStation, startStation) == 0 && strcmp(trains[i].endStation, endStation) == 0) {
            printf("Train No: %d, Train Name: %s\n", trains[i].trainNo, trains[i].trainName);
        }
    }
}

int main() {
    struct TrainInfo trains[5] = {
        {101, "Express A", {10, 30}, {14, 45}, "Station 1", "Station 5"},
        {102, "Express B", {11, 00}, {15, 20}, "Station 2", "Station 6"},
        {103, "Express C", {12, 15}, {16, 35}, "Station 1", "Station 6"},
        {104, "Express D", {13, 45}, {18, 00}, "Station 3", "Station 7"},
        {105, "Express E", {14, 30}, {19, 10}, "Station 2", "Station 8"}
    };

    char station[50];
    struct Time time;

    printf("Enter the station to list trains: ");
    scanf("%s", station);
    listTrainsByDepartureStation(trains, 5, station);

    printf("\nEnter the station and time (HH MM) to list trains: ");
    scanf("%s %d %d", station, &time.hour, &time.minute);
    listTrainsByDepartureTime(trains, 5, station, time);

    printf("\nEnter the station and time (HH MM) to list trains departing within next hour: ");
    scanf("%s %d %d", station, &time.hour, &time.minute);
    listTrainsByDepartureWithinHour(trains, 5, station, time);

    char endStation[50];
    printf("\nEnter the start and end station to list trains: ");
    scanf("%s %s", station, endStation);
    listTrainsByStations(trains, 5, station, endStation);

    return 0;
}
