# Independent Set

Solutions to the independent set problem.

> Find the largest independent set of the given undirected graph.

# Naiv

Die naive Lösung gehst durch alle mögliche Kombinationen des Graphen.

## Algorithmus

```
1. Für int i = (Größe des Graphen); i > 0; i -= 1:

  2. Mache eine Liste von allen möglichen
     Kombinationen mit Größe i.
     
  3. Für jede Kombination:
  
    4. Ist jede Knoten nicht mit irgendeinem anderen
       Knoten in der Kombination verbunden?

       5. Wir fanden eine unabhängige Menge.

6. Wir fanden keine unabhängige Menge.
```

# Example

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
