
/*
------------------------------------------------------------------------------------------------
USERNAME: sidsrivastavasks
DESCRIPTION: THIS PROGRAM WILL CHECK WHEATHER A GIVEN GRAPH IS BIPERTITE OR NOT
DATE: 2/10/2021
------------------------------------------------------------------------------------------------
*/

#include<iostream>

using namespace std;

int queue[100];
int front = -1, rare = -1;
int adj[100][100] = {0};

void push(int curr) {

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

    queue[rare] = curr;

}

int peek() {
    return queue[front];
}

void pop() {

    if (front == -1) {
        printf("Stack Underflow");
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

bool isBipertite(int nodes) {

    int color[nodes + 1];


    for (int i = 1; i <= nodes; i++) {
        color[i] = -1;
    }

    for (int i = 1; i <= nodes; i++) {
        if (color[i] == -1) {

            push(i);
            color[i] = 0;

            while (!isEmpty()) {
                int curr = peek();
                pop();

                for (int j = 1; j <= nodes; j++) {
                    if (adj[curr][j] == 1 && color[j] == -1) {
                        push(j);
                        color[j] = !color[curr];
                    }
                    else if (adj[curr][j] == 1 && color[j] == color[curr]) {
                        return false;
                    }
                }
            }
        }


    }
    return true;
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

    printf("The Given Graph is Bipertite? Yes or No : ");
    if (n == 0) {
        printf("NO, The Graph is not Bipertite");
    }
    else if (isBipertite(n)) {
        printf("YES, The Graph is Bipertite");
    }
    else {
        printf("NO, The Graph is not Bipertite");
    }
    return 0;
}
