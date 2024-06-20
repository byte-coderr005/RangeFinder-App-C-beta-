#include <stdio.h>
#include <stdlib.h>
#include <time.h>
                //Rangefinder..
#define Sound_speed 0.0343
double calculateDist(double travelTime){
    // x = v * t
    return (travelTime / 2) * Sound_speed; // firstly sound of speed goes to dest and get back to starting point.
    //Thats why we devide travelTime to 2.
}
int main(){
    //Rangefinder APP beta for measure distance between tank from target.
    //Made by Burak.;
    srand(time(0)); // Random time generator for microsecond because of sound of speed
    double travelTime = rand();
    char ammo;
    double ammoSpeed, road;
    double time = travelTime / 2;
    printf("\n What is the ammo type ?");
    scanf("%c",&ammo);
    road = calculateDist(travelTime);
    if(ammo == 'H')
    {
        printf("\n The M830A1 Heat's ammo speed is 1410 m/s.. ");
        ammoSpeed = (1410.0/1000000); // but we have to change second to microsecond. Because of SI.
        road = ammoSpeed * (travelTime + time);
        printf("\n Calculated road in meters is %lf meters", road);
    }
    else if (ammo == 'S')
    {
        printf("\n The M829 Sabot's acceleration is 335 m/s in 5 seconds and ammo speed is 1650 m/s..");
        ammoSpeed = (1650.0 /1000000); //  1 seconds = 1* 10^(-6) microseconds
        road = ammoSpeed * (travelTime + time);
        printf("\n The calculated road in meters is %lf meters", road);
    }    
    return 0;
}