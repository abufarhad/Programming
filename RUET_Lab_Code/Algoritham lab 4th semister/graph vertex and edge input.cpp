//#include<bits/stdc++.h>
//using namespace std;
////#include <cstdio>
////#include <vector>
////#include <list>
////#include <utility>
////
//using namespace std;
//
//int main()
//{
//    int vertices, edges, v1, v2, weight;
//
//    printf("Enter the Number of Vertices -\n");
//    scanf("%d", &vertices);
//
//    printf("Enter the Number of Edges -\n");
//    scanf("%d", &edges);
//
//    // Adjacency List is a vector of list.
//    // Where each element is a pair<int, int>
//    // pair.first -> the edge's destination
//    // pair.second -> edge's weight
//   vector< list< pair<int, int> > > adjacencyList(vertices + 1);
// //vector< lis< pair<int, int> > > adjacencyList(vertices + 1);
//
//    printf("Enter the Edges V1 -> V2, of weight W\n");
//
//    for (int i = 1; i <= edges; ++i) {
//        scanf("%d%d%d", &v1, &v2, &weight);
//
//        // Adding Edge to the Directed Graph
//        adjacencyList[v1].push_back(make_pair(v2, weight));
//    }
//
//    printf("\nThe Adjacency List-\n");
//    // Printing Adjacency List
//    for (int i = 1; i < adjacencyList.size(); ++i) {
//        printf("adjacencyList[%d] ", i);
//
//        list< pair<int, int> >::iterator itr = adjacencyList[i].begin();
//
//        while (itr != adjacencyList[i].end()) {
//            printf(" -> %d(%d)", (*itr).first, (*itr).second);
//            ++itr;
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//
//

#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int main()
{
   int n,m ;
   cin>>n>>m;
   vector<vii> adjList(n+1); //For vertex 1...n
   //Reading edges for the input for graph
   for(int i=0;i<m;i++)
   {
      int u,v;
      cin>>u>>v;
    /*Here u->v is the edge and pair second term can be used to store weight in
      case of weighted graph.
    */
      adjList[u].push_back(make_pair(v,10));
   }
   //To print the edges stored in the adjacency list
   for(int i=1;i<=n;i++)
   {
       for(int j=0;j<(int)adjList[i].size();j++)
       {
           cout<<"Edge is "<<i<<" -> "<<adjList[i][j].first<<endl;
           cout<<"Weight is "<<adjList[i][j].second<<endl;
       }
   }
   return 0;
}
