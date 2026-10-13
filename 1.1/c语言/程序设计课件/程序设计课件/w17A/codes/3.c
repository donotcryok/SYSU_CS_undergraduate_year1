#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int b, m, s;
} ParkingSystem;

ParkingSystem* parkingSystemCreate(int big, int medium, int small) {
    ParkingSystem* ret = malloc(sizeof(ParkingSystem));
    ret->b = big;
    ret->m = medium;
    ret->s = small;
    return ret;
}

bool parkingSystemAddCar(ParkingSystem* obj, int carType) {
    if (carType == 1) {
        if (obj->b > 0) {
            obj->b--;
            return true;
        }
    } else if (carType == 2) {
        if (obj->m > 0) {
            obj->m--;
            return true;
        }
    } else if (carType == 3) {
        if (obj->s > 0) {
            obj->s--;
            return true;
        }
    }
    return false;
}

void parkingSystemFree(ParkingSystem* obj) {
    free(obj);
}

int main(){
    //char *action[50] =  {"ParkingSystem", "addCar", "addCar", "addCar", "addCar"};
    int N = 5;
    long data[5][3] = {{1, 1, 0}, {1}, {2}, {3}, {1}};
    ParkingSystem* obj = parkingSystemCreate(data[0][0], data[0][1], data[0][2]);
    for(int i=1;i<N;i++){
        bool param_1 = parkingSystemAddCar(obj, data[i][0]);
        if(param_1){printf("true\n\r");}else{printf("false\n\r");}
    }

    parkingSystemFree(obj);
    return 0;
}