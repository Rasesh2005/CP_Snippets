/*
------------------------------------------------------------------------------------------------
USERNAME: sidsrivastavasks
DESCRIPTION: THSI PROGRAM WILL HELP USER TO CHECK FOR CYCLE IN THE GRAPH
DATE: 3/10/2021
------------------------------------------------------------------------------------------------
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct pair {
    int curr;
    int prev;
};
struct pair queue[10001];
int front = -1, rare = -1;
int adj[10001][10001] = {0};
bool visited[10001] = {false};

void push(int curr, int prev) {

    if (rare > 10000) {
        printf("StackOverFlow\n");
        return ;
    }

    if (front == rare &&  front == -1) {
        front++;
        rare++;
    }
    else {
        rare++;
    }

    queue[rare].curr = curr;
    queue[rare].prev = prev;

}

struct pair peek() {
    return queue[front];
}

void pop() {

    if (front == -1) {
        printf("Stack Underflow");
        return -1;
    }

    if (front == rare) {
        front = -1;
        rare  = -1;
    }
    else {
        front++;
    }
}

bool isEmpty() {

    return (front == -1 ? true : false);
}

bool checkCycle(int vrtx, int nodes) {

    push(vrtx, -1);
    visited[vrtx] = true;

    while (!isEmpty()) {

        struct pair elmnt = peek();
        pop();

        for (int i = 1; i <= nodes; i++) {

            if (adj[elmnt.curr][i] == 1 && visited[i] && elmnt.prev != i) {
                return true;
            }

            else if (adj[elmnt.curr][i] == 1 && !visited[i]) {
                push(i, elmnt.curr);
                visited[i] = true;
            }
        }
    }
    return false;
}

bool isCycle(int nodes) {

    for (int i = 1; i <= nodes; i++) {

        if (!visited[i]) {

            if (checkCycle(i, nodes)) {
                return true;
            }

        }

    }
    return false;
}

int main()
{

    int n;
    printf("Enter the Number of Nodes : ");
    scanf("%d", &n);

    int edges;
    printf("Enter Number of Edges : ");
    scanf("%d", &edges);

    for (int i = 1; i <= edges; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        adj[a][b] = 1;
        adj[b][a] = 1;
    }

    printf("The Given Graph is Tree? Yes or No : ");
    if (n == 0) {
        printf("NO");
    }
    else if (!isCycle(n)) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}
