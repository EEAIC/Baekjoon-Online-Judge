#include <iostream>
#include <queue>

using namespace std;

struct node
{
    int x, y;
    int step = 0;
    bool isbreak = false;
};

queue<struct node> qNode;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int **mapM;
    int N, M;
    
    cin >> N >> M;
    mapM = new int*[N];
    bool **visited = new bool*[N];
    bool **visited_with_break = new bool*[N];
    for (int i = 0; i < N; i++) {
        mapM[i] = new int[M];
        visited[i] = new bool[M];
        visited_with_break[i] = new bool[M];
    }
    string line;
    int result = -1;
    for (int i = 0; i < N; i++) {
        cin >> line;
        for (int j = 0; j < M; j++) {
            mapM[i][j] = line[j] - '0';
            visited[i][j] = false;
            visited_with_break[i][j] = false;
        }
    }

    struct node startNode = {.x = 0, .y = 0, .step = 1, .isbreak = false,};
    visited[startNode.y][startNode.x] = true;
    qNode.push(startNode);
    
    while(!qNode.empty()) {
        struct node tmpNode = qNode.front();
        qNode.pop();
        
        struct node upNode = {.x = tmpNode.x, .y = tmpNode.y - 1, .step = tmpNode.step};
        struct node downNode = {.x = tmpNode.x, .y = tmpNode.y + 1, .step = tmpNode.step};
        struct node rightNode = {.x = tmpNode.x + 1, .y = tmpNode.y, .step = tmpNode.step};
        struct node leftNode = {.x = tmpNode.x - 1, .y = tmpNode.y, .step = tmpNode.step};

        if (tmpNode.x == M - 1 && tmpNode.y == N - 1) {
            result = tmpNode.step;
            break;
        }

        if (tmpNode.isbreak) {
            
            if (tmpNode.y > 0 && mapM[tmpNode.y - 1][tmpNode.x] == false && visited_with_break[tmpNode.y - 1][tmpNode.x] == false) {
                upNode.isbreak = true;
                upNode.step++;
                visited_with_break[tmpNode.y - 1][tmpNode.x] = true;
                qNode.push(upNode);
            }
            if (tmpNode.y < N - 1 && mapM[tmpNode.y + 1][tmpNode.x] == false && visited_with_break[tmpNode.y + 1][tmpNode.x] == false ) {
                downNode.isbreak = true;
                downNode.step++;
                visited_with_break[tmpNode.y + 1][tmpNode.x] = true;
                qNode.push(downNode);
            }
            if (tmpNode.x < M - 1 && mapM[tmpNode.y][tmpNode.x + 1] == false && visited_with_break[tmpNode.y][tmpNode.x + 1] == false) {
                rightNode.isbreak = true;
                rightNode.step++;
                visited_with_break[tmpNode.y][tmpNode.x + 1] = true;
                qNode.push(rightNode);
            }
            if (tmpNode.x > 0 && mapM[tmpNode.y][tmpNode.x - 1] == false && visited_with_break[tmpNode.y][tmpNode.x - 1] == false) {
                leftNode.isbreak = true;
                leftNode.step++;
                visited_with_break[tmpNode.y][tmpNode.x - 1] = true;
                qNode.push(leftNode);
            }
        } else {
            
            if (tmpNode.y > 0 && mapM[tmpNode.y - 1][tmpNode.x] == false && visited[tmpNode.y - 1][tmpNode.x] == false) {
                upNode.isbreak = false;
                upNode.step++;
                visited[tmpNode.y - 1][tmpNode.x] = true;
                qNode.push(upNode);
            }
            if (tmpNode.y < N - 1 && mapM[tmpNode.y + 1][tmpNode.x] == false  && visited[tmpNode.y + 1][tmpNode.x] == false) {
                downNode.isbreak = false;
                downNode.step++;
                visited[tmpNode.y + 1][tmpNode.x] = true;
                qNode.push(downNode);
            }
            if (tmpNode.x < M - 1 && mapM[tmpNode.y][tmpNode.x + 1] == false && visited[tmpNode.y][tmpNode.x + 1] == false) {
                rightNode.isbreak = false;
                rightNode.step++;
                visited[tmpNode.y][tmpNode.x + 1] = true;
                qNode.push(rightNode);
            } 
            if (tmpNode.x > 0 && mapM[tmpNode.y][tmpNode.x - 1] == false && visited[tmpNode.y][tmpNode.x - 1] == false) {
                leftNode.isbreak = false;
                leftNode.step++;
                visited[tmpNode.y][tmpNode.x - 1] = true;
                qNode.push(leftNode);
            } 
            if (tmpNode.y > 0 && mapM[tmpNode.y - 1][tmpNode.x] == true && visited_with_break[tmpNode.y - 1][tmpNode.x] == false) {
                upNode.isbreak = true;
                upNode.step++;
                visited_with_break[tmpNode.y - 1][tmpNode.x] = true;
                qNode.push(upNode);
            } 
            if (tmpNode.y < N - 1 && mapM[tmpNode.y + 1][tmpNode.x] == true && visited_with_break[tmpNode.y + 1][tmpNode.x] == false) {
                downNode.isbreak = true;
                downNode.step++;
                visited_with_break[tmpNode.y + 1][tmpNode.x] = true;
                qNode.push(downNode);
            } 
            if (tmpNode.x < M - 1 && mapM[tmpNode.y][tmpNode.x + 1] == true  && visited_with_break[tmpNode.y][tmpNode.x + 1] == false) {
                rightNode.isbreak = true;
                rightNode.step++;
                visited_with_break[tmpNode.y][tmpNode.x + 1] = true;
                qNode.push(rightNode);
            } 
            if (tmpNode.x > 0 && mapM[tmpNode.y][tmpNode.x - 1] == true  && visited_with_break[tmpNode.y][tmpNode.x - 1] == false) {
                leftNode.isbreak = true;
                leftNode.step++;
                visited_with_break[tmpNode.y][tmpNode.x - 1] = true;
                qNode.push(leftNode);
            }
        }
    }

    cout << result;
    
    return 0;
}