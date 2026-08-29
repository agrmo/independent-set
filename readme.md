# Independent Set

Independent set algorithms.

> Find the largest independent set of the given undirected graph.

# naive

The naive solution iterates through all combinations of graphs of decreasing size. This is apparently the best you can do with no additional information about the graph. All other implementations exploit some known structure about the graph.

## algorithm

```
1. for int i = (size of graph); i > 0; i -= 1:

  2. Enumerate all possible combinations of graphics
     with cardinality i.
     
  3. For each combination
  
    4. Is every node not directly connected to all other nodes?

       5. If true, an independent set is found.

6. An independent set is not found. 
```

# example

Graph:

```
[[1, 2],
[2, 3, 4],
[5, 6],
[6],
[6],
[6],
[]]

       0--------1
      /  _____// \
     / _/    /    \
    /_/     /      \
   2----   3        4
    \   \   \       /
     \   \   \_    /
      \   \____\  /
       5---------6
```

Execution:

```
Looking for independent set size 7.
Checking subset: {0, 1, 2, 3, 4, 5, 6}
Looking for independent set size 6.
Checking subset: {0, 1, 2, 3, 4, 5}
Checking subset: {0, 1, 2, 3, 4, 6}
Checking subset: {0, 1, 2, 3, 5, 6}
Checking subset: {0, 1, 2, 4, 5, 6}
Checking subset: {0, 1, 3, 4, 5, 6}
Checking subset: {0, 2, 3, 4, 5, 6}
Checking subset: {1, 2, 3, 4, 5, 6}
Looking for independent set size 5.
Checking subset: {0, 1, 2, 3, 4}
Checking subset: {0, 1, 2, 3, 5}
Checking subset: {0, 1, 2, 4, 5}
Checking subset: {0, 1, 3, 4, 5}
Checking subset: {0, 2, 3, 4, 5}
Checking subset: {1, 2, 3, 4, 5}
Checking subset: {0, 1, 2, 3, 6}
Checking subset: {0, 1, 2, 4, 6}
Checking subset: {0, 1, 3, 4, 6}
Checking subset: {0, 2, 3, 4, 6}
Checking subset: {1, 2, 3, 4, 6}
Checking subset: {0, 1, 2, 5, 6}
Checking subset: {0, 1, 3, 5, 6}
Checking subset: {0, 2, 3, 5, 6}
Checking subset: {1, 2, 3, 5, 6}
Checking subset: {0, 1, 4, 5, 6}
Checking subset: {0, 2, 4, 5, 6}
Checking subset: {1, 2, 4, 5, 6}
Checking subset: {0, 3, 4, 5, 6}
Checking subset: {1, 3, 4, 5, 6}
Checking subset: {2, 3, 4, 5, 6}
Looking for independent set size 4.
Checking subset: {0, 1, 2, 3}
Checking subset: {0, 1, 2, 4}
Checking subset: {0, 1, 3, 4}
Checking subset: {0, 2, 3, 4}
Checking subset: {1, 2, 3, 4}
Checking subset: {0, 1, 2, 5}
Checking subset: {0, 1, 3, 5}
Checking subset: {0, 2, 3, 5}
Checking subset: {1, 2, 3, 5}
Checking subset: {0, 1, 4, 5}
Checking subset: {0, 2, 4, 5}
Checking subset: {1, 2, 4, 5}
Checking subset: {0, 3, 4, 5}
Largest independent set of Graph: {0, 3, 4, 5}
```
