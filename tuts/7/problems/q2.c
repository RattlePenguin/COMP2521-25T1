// bfs(g, 0);
#  Printed  visited                   pred                      Queue (front at left)
            0  1  2  3  4  5  6  7    0  1  2  3  4  5  6  7
0     -     1  0  0  0  0  0  0  0    -  -  -  -  -  -  -  -    0

// bfs(g, 3);
#  Printed  visited                   pred                      Queue (front at left)
            0  1  2  3  4  5  6  7    0  1  2  3  4  5  6  7
0     -     0  0  0  1  0  0  0  0    -  -  -  -  -  -  -  -    3

// dfs(g, 0);
#  Printed  visited                   pred                      Stack (top at right)
            0  1  2  3  4  5  6  7    0  1  2  3  4  5  6  7
0     -     0  0  0  0  0  0  0  0    -  -  -  -  -  -  -  -    0

// dfs(g, 3);
#  Printed  visited                   pred                      Stack (top at right)
            0  1  2  3  4  5  6  7    0  1  2  3  4  5  6  7
0     -     0  0  0  0  0  0  0  0    -  -  -  -  -  -  -  -    3