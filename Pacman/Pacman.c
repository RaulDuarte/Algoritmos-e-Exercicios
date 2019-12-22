#include <stdio.h>

#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })

int main(){
    
    int N, i, j, cur, ans;
    int start, end, step;
    int MAX = 100;
    char grid[MAX][MAX];

    while(scanf("%d", &N) != EOF){
        ans = cur = 0;
        for(i = 0; i < N; i++){
            scanf(" %s", grid[i]);
            start = (i&1) ? N-1 : 0;
            end   = (i&1) ?  -1 : N;
            step  = (i&1) ?  -1 : 1;
            for(j = start; j != end; j += step){
                if(grid[i][j] == 'o')
                    cur++;
                if(grid[i][j] == 'A')
                    cur = 0;
                ans = max(cur, ans);
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}