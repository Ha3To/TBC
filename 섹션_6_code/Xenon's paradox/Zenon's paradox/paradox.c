//
//  main.c
//  Xenon's paradox
//
//  Created by 임태호 on 2022/02/10.
//

#include <stdio.h>

int main() {
    
    /*
        Simulation of a Moving Object
     
        - Speed = 1.0 m/s
        - dt = 1.0 s
        - Distance traveled during dt = Speed * dt
     
        - Step 1 : 1.0 m/s * 1.0 s = 1.0 m, dist = 1.0 m
        - Step 2 : 1.0 m/s * 1.0 s = 1.0 m, dist = 1.0 m + 1.0 m = 2.0 m
        - Step 3 : 1.0 m/s * 1.0 s = 1.0 m, dist = 2.0 m + 1.0 m = 3.0 m
        - ... ...
    */
    
    /*
        Zenon's Paradox
     
        - Step 1 : 1.0 * 1.0 = 1.0, 1.0
        - Step 2 : 1.0 * 0.5 = 0.5, 1.0 + 0.5 = 1.5
        - Step 3 : 1.0 * 0.25 = 0.25, 1.5 + 0.25 = 1.75
        - ... ...
    */
    
    const double speed = 1.0;
    const unsigned repeat_max = 10;
    
    double dt = 0.01;               // Time Interval
    double time = 0.0;              // Elapsed Time
    double dist_arch = 0.0;         // Distance Archlleus
    double dist_turtle = 1.0;       // Distance Turtle
    double speed_arch = 10.0;       // Speed Archlleus
    double speed_turtle = 0.0001;   // Speed Turtle
    unsigned i;
    
    printf("Time = %fs, dt = %fs, Archilleus = %fm, turtle = %fm\n", time, dt, dist_arch, dist_turtle);
    
    for (i = 0; i < repeat_max; ++i) {
        dist_arch += speed_arch * dt;
        dist_turtle += speed_turtle * dt;
        time += dt;
        
        printf("Time = %fs, dt = %fs, Archilleus = %fm, turtle = %fm\n", time, dt, dist_arch, dist_turtle);
        
        dt *= 0.5;
    }
    
    //Note: infinite geometric series

    return 0;
}
