#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#define _GLIBCXX_DEBUG // check []
#define DIVISOR 1000000007

using namespace std;
typedef pair<int,int> pii;
typedef pair<int64_t, int64_t> pII;

template<typename T>
void cins(vector<T>& arr) { for(T& e: arr) cin >> e; }

#ifdef DEBUG
#define debug(fmt, ...) \
    printf("[debug: %s] " fmt, __func__, __VA_ARGS__)
#else
#define debug(fmt, ...)
#endif

int main(void) {
    int num, rels;
    cin >> num >> rels;
    vector<vector<int>> mat(num, vector<int>(num));
    for(int i = 0; i < rels; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        mat[a][b] = mat[b][a] = 1;
    }

    vector<int> ans(num);
    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num; j++) {
            if(i == j) continue;
            // exclude direct friends
            if(mat[i][j]) continue;
            int flag = 0;
            for(int k = 0; k < num; k++) {
                if(i == k) continue;
                if(j == k) continue;
                if(mat[i][k] && mat[k][j]) flag = 1;
            }
            ans[i] += flag;
        }
    }
    for(int elem: ans) {
        cout << elem << endl;
    }
    return 0;
}
