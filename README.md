
## Introduction
In this project you will build a variation of the Hollywood Graph in which vertices are actors
and edges connect actors that have appeared in a movie together. You will build a graph
with movies and actors as vertices and edges connecting each movie to its actors. For
example:

![Kevin Bacon Graph](https://introcs.cs.princeton.edu/java/45graph/images/movie-performer.png)

You will use the graph to query paths between a pair of actors or between a pair of
movies, or an actor and a movie, to see how they are connected (if at all). This
functionality will allow you to play the Six Degrees of Kevin Bacon Game, which was
popular on college campuses about a decade ago. The game is based on the ideas of six
degrees of separation and the small-world experiment.

Six degrees of separation is the idea that all living things and everything else in the world are six or fewer steps away from each
other so that a chain of "a friend of a friend" statements can be made to connect any two people in a maximum of six steps.

The goal of the Six Degrees of Kevin Bacon Game is to try to find the fewest number ofconnections to link any other actor with 
Kevin Bacon. It was discovered that you could connect Kevin Bacon with just about any other actor in 6 steps or so.

## The Kevin Bacon Game

Querying the actors in a movie is not much more than returning the corresponding line in the input file. Querying the list of movies in which an actor has appeared 
is a bit more complex since it isan inverted index, but it can be done without a graph. The graph model not only serves as an inverted index, it also provides the 
basis for more sophisticated processing, as we will seenext.At this point, we can get to work onthe Kevin Bacon Game explained in the introductionof this project. 
To implement the game, what we need to do is use the graph to query paths between pairs of actors or between pairs of movies. In fact, we want to find the shortest 
path(one with a minimal number of edges)between any pair of vertices.

# TASK 1. 
Extend LabeledGraphto add a member function that will perform breadth-first-searchon the graph to find shortest paths from a source vertex. The function 
should receive the source vertex, v, as argument and return a mapcontaining a parent-link representation of a tree rooted at v, which defines the shortest paths 
from vto every vertex that is connected to it.The signature of the function should be as follows:
map<int, int> breath-first-search(int v);

# TASK 2. 
Add a member function to LabeledGraphthat, given the parent map,it will return the path (from the source vertexfor which the parent map was built)to a 
specific target vertex. The signature of the function should be:
vector<int> pathTo(map<int, int> & parent_map, int target);

# TASK 3. 
Write a client programthat willbuild the graph from the input file providedin Part 3 of this project(movies.txtormovies_short.txt)andthen, itwill allow 
querying paths from a source vertex (e.g. “Kevin Bacon”) to any other vertex (actor or movie).The program should ask for the source vertex only once (at the beginning) 
and then it should repeatedly ask for a target vertex until the user decides to exit the program.A sample session is shown below. Notice that the input 
filesprovidedhave the names in a different format,soyou have to either enter the names as formatted on the fileor convert the user input to that format:

Enter source vertex: Chris Pratt
All (shortest) paths from Chris Pratt to other vertices have been created.
Enter a target vertex and I will display the shortestpath from Chris Pratt to that vertex(-1 to exit): Sam Worthington
ShortestPath from Chris Prattto Sam Worthington:
Chris Pratt --> Guardians of the Galaxy --> Zoe Saldana --> Avatar --> Sam Worthington
Enter a target vertex and I will display the shortestpath from Chris Pratt to that vertex(-1 to exit): Zoe Saldana
ShortestPath from Chris Prattto Zoe Saldana:
Chris Pratt --> Guardians of the Galaxy --> Zoe Saldana
Enter a target vertex and I will display the shortestpath from Chris Pratt to that vertex(-1 to exit): -1
Goodbye.
