#include<bits/stdc++.h>
using namespace std;

class Graph{
	int V;
	list<int> *adj;
public:
	Graph(int V);
	void addEdge(int s,int w);
	void BFS(int s);
};

Graph::Graph(int V){
	this->V = V;
	adj = new list<int>[V];
}

void Graph:: addEdge(int s,int w){
	adj[s].push_back(w);
}

void Graph:: BFS(int s){
	bool *visited = new bool[V];
	for(int i=0;i<V;i++)
		visited[i]=false;
		
	list<int> queue;
	visited[s]=true;
	queue.push_back(s);
	list<int>:: iterator i;
	
	while(!queue.empty()){
		s= queue.front();
		cout<< s <<" ";
		queue.pop_front();
		
		for (i = adj[s].begin(); i != adj[s].end(); ++i)
		{
			if(!visited[*i])
			{
				visited[*i]=true;
				queue.push_back(*i);
			}
		}
	}
	
}  

int main(){
	int V,E,i,x,y,start;
	cout<<"Enter the no of vertices in the graph\n";
	cin>>V;
	Graph g(V);
	cout<<"Enter the no of edges in the graph\n";
	cin>>E;
	cout<<"Enter the edge values\n";
	for(i=0;i<E;i++){
		cin>>x>>y;
		g.addEdge(x,y);
	}
	cout<<"Enter the starting point of traversal\n";
	cin>>start;

	cout<<"breadth first search of the following graph is given below \n";
	g.BFS(start);
	
	return 0;
}
