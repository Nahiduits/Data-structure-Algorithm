public class AdjacencyList{

   static class Edge{
    int src;
    int dest;

    public Edge(int s,int d,int w){
        this.src = s;
        this.dest = d;
        this.wt = w;
    }
   }

   public static void createGraph(ArrayList<Edge>graph[]){
       for(int i=0;i<graph.length;i++){
         graph[i] = new ArrayList<Edge>();
       }
       
       graph[0].add(new Edge(0,2,2));

       graph[1].add(new Edge(1,2,10));
       graph[1].add(new Edge(1,3,0));

       graph[2].add(new Edge(2,0,2));
       graph[2].add(new Edge(2,1,10));
       graph[2].add(new Edge(2,3,-1));

       graph[3].add(new Edge(3,1,0));
       graph[3].add(new Edge(3,2,-1));

   }

   public static void topSortUtil(ArrayList<Edge>graph[],int curr,boolean vis[],stack<Integer>stack){
      vis[curr] = true;

      for(int i=0;i<graph[curr].size();i++){
        Edge e = graph[curr].get(i);
        if(!vis[e.dest]){
            topSortUtil(graph,e.dest,vis,stack);
        }
      }
      stack.push(curr);
   }

   public static void topSort(ArrayList<Edge>graph[],int V){
      boolean vis[] = new boolean[V];
      Stack<Integer> stack = new Stack<>();

      for(int i=0;i<V;i++){
        if(!vis[i]){
            topSortUtil(graph,i,vis,stack);
        }
      }
      while(!stack.isEmpty()){
        System.out.print(stack.pop()+" ");
      }
   }



    public static void main(String args[]){
       int V = 4;

       ArrayList<Edge>graph[]= new ArrayList[V];
       createGraph(graph);

       topSort(graph,V);





    }
}


