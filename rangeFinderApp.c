#include <stdio.h>

int main(){
    //Rangefinder APP beta for measure distance between tank from target.
    //Made by Burak.;
    //Road calculated for 5 seconds.
    char ammo;
    double ammoSpeed, time = 5.0, road;
    printf("\n What is the ammo type ?");
    scanf("%c",&ammo);
    road = ammoSpeed * time;
    if(ammo == 'H')
    {
        printf("\n The M830A1 Heat's ammo speed is 1410 m/s.. ");
        ammoSpeed = 1410.0;
        road = ammoSpeed * time;
        printf("\n Calculated road in meters is %lf meters", road);
    }
    else if (ammo == 'S')
    {
        printf("\n The M829 Sabot's acceleration is 335 m/s in 5 seconds and ammo speed is 1650 m/s..");
        ammoSpeed = 1650.0;
        road = ammoSpeed * time;
        printf("\n The calculated road in meters is %lf meters", road);
    }    
    return 0;
}