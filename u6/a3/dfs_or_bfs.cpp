#include "dfs_or_bfs.hpp"

void add_neighbors(Undirected_graph g, std::deque<int> &to_visit, int next, bool dfs)
 {
 // TODO
 }


std::vector<int> dfs_or_bfs(Undirected_graph g, int start_node, bool dfs)
 {
 std::vector<int> visited; // Durchlaufene Knoten
 std::set<int> had;        // Bereits durchlaufene Knoten; set für schnellen member-check
 std::deque<int> to_visit; // Worklist

 // Der Startknoten kommt in die Worklist
  to_visit.push_back(start_node);

 // Solange es was zu tun gibt...
  while(!to_visit.empty())
   {
   // ... entnimm' den nächsten zu untersuchenden Knoten
   int next = to_visit.front();
    to_visit.pop_front();

   // Wenn dieser noch nicht untersucht wurde...
     if(had.find(next) == had.end())
      {
      // ... dann wird er jetzt untersucht:
       had.insert(next);        // Er wurde bereits durchlaufen
       visited.push_back(next); // und gehört damit in die Ergebnisliste.

      // Zudem müssen die Kinder des Knotens auch durchsucht werden:
       add_neighbors(g, to_visit, next, dfs);
      }
   }

  return visited;
 }


