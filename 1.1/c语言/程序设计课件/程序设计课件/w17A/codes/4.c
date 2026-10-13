#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <memory.h>
#include <memory.h>

typedef struct {
    long long * balance;
    int balanceSize;
} Bank;

Bank* bankCreate(long long* balance, int balanceSize) {
    Bank * obj = (Bank *)malloc(sizeof(Bank));
    obj->balance = (long long *)malloc(sizeof(long long) * balanceSize);
    obj->balanceSize = balanceSize;
    memcpy(obj->balance, balance, sizeof(long long) * balanceSize);
    return obj;
}

bool bankTransfer(Bank* obj, int account1, int account2, long long money) {
    if (account1 > obj->balanceSize || account2 > obj->balanceSize || obj->balance[account1 - 1] < money) {
        return false;
    }
    obj->balance[account1 - 1] -= money;
    obj->balance[account2 - 1] += money;
    return true;
}

bool bankDeposit(Bank* obj, int account, long long money) {
    if (account > obj->balanceSize) {
        return false;
    }
    obj->balance[account - 1] += money;
    return true;
}

bool bankWithdraw(Bank* obj, int account, long long money) {
    if (account > obj->balanceSize || obj->balance[account - 1] < money) {
        return false;
    }
    obj->balance[account - 1] -= money;
    return true;
}

void bankFree(Bank* obj) {
    free(obj->balance);
}

int main(){
    int N = 6;
    const char action[10][10] = {"Bank", "withdraw", "transfer", "deposit", "transfer", "withdraw"};
    long long data[10][10] = {{10, 100, 20, 50, 30}, {3, 10}, {5, 1, 20}, {5, 20}, {3, 4, 15}, {10, 50}};
    Bank* obj = bankCreate(data[0], 5);
    for(int i=1;i<N;i++){
        bool param_1=0;
        //printf("%s\r", action[i]);
        if(strcmp(action[i], "withdraw")==0){
            param_1 = bankWithdraw(obj, data[i][0], data[i][1]);
            printf("withdraw ");
        }
        else if(strcmp(action[i], "transfer")==0){
            param_1 = bankTransfer(obj, data[i][0], data[i][1], data[i][2]);
            printf("transfer ");
        }
        else if(strcmp(action[i], "deposit")==0){
            param_1 = bankDeposit(obj, data[i][0], data[i][1]);
            printf("deposit ");
        }
        if(param_1){printf("true\n\r");}else{printf("false\n\r");}
    }
    bankFree(obj);
    return 0;
}