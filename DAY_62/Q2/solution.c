// Day 62 - Question 2
// Problem: Keys and Rooms

#include <stdbool.h>

bool canVisitAllRooms(int** rooms, int roomsSize, int* roomsColSize) {
    bool visited[roomsSize];
    int stack[roomsSize];
    int top = 0, cnt = 0;
    for(int i=0;i<roomsSize;i++) visited[i] = false;
    visited[0] = true; stack[top++] = 0; cnt = 1;
    while(top) {
        int cur = stack[--top];
        for(int i=0;i<roomsColSize[cur];i++) {
            int k = rooms[cur][i];
            if(!visited[k]) {
                visited[k] = true;
                stack[top++] = k;
                cnt++;
            }
        }
    }
    return cnt == roomsSize;
}