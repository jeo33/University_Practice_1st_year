#include "menu.h"
 void menu::drive()
{
	do {
		cout << "What kind of graph you want to creat:" << endl;

		cout << "1:Directed Graph" << endl;
		cout << "2:UndirectedGraph" << endl;
		cin >> GraphSelect;
	} while (GraphSelect != 1 && GraphSelect != 2);
	if (GraphSelect == 1)
	{
		while (keyLoop)
		{
			cout << "\n*********************************************" << endl;
			cout << "\n\nWelcom to Cplusplus Hotel Reservation System !!\n" << endl;
			cout << "1.Add Vertex\n" << endl;
			cout << "2.Add Edge\n" << endl;
			cout << "3.Remove Vertex by ID\n" << endl;
			cout << "4.Remove Edge\n" << endl;
			cout << "5.Show path by given vertex ID\n" << endl;
			cout << "6.Check edge exist or not\n" << endl;
			cout << "7.Check if value is contained by vertex\n" << endl;
			cout << "8.Show all paths\n" << endl;
			cout << "9.Print all vertex info\n" << endl;
			cout << "0.Quit\n" << endl;
			cout << "\n*********************************************" << endl;

			int commandKey;
			cout << "Please enter the number to select the option :";
			cin >> commandKey;
			cout << endl;
			switch (commandKey)

			{
			case 1:
			{	int num;
				string s;
				cout << "Please enter your vertex id(number):" << endl;
				cin >> num;
				cout << "Please enter your vertex string:" << endl;
				cin >> s;
				Vertex temp(num, s);
				if (G->CheckVertex(temp) || G->CheckVertex(num))
				{
					cout << "Already exist vertex" << endl;
					break;
				}

				else G->addVertex(temp);
				G->setGraph();
			}
			break;
			case 2:
			{
				int s;
				int d;
				cout << "Please enter your start vertex id:" << endl;
				cin >> s;
				cout << "Please enter your end vertex id:" << endl;
				cin >> d;
				Edge temp(s, d);
				G->addEdge(temp);
				G->setGraph();
			}

			break;
			case 3:
			{
				int s;
				int pos;
				cout << "Please enter vertex id that you want to remove" << endl;
				cin >> s;
				pos = G->checkVertexId(s);
				G->removeVertex(G->VertexArray[pos]);
				G->setGraph();
			}
			break;
			case 4:
			{
				int s;
				int d;
				cout << "Please enter your start vertex id:" << endl;
				cin >> s;
				cout << "Please enter your end vertex id:" << endl;
				cin >> d;
				Edge temp(s, d);
				G->removeEdge(temp);
				G->setGraph();
			}
			break;
			case 5:
			{
				int s;
				int pos;
				cout << "Please enter vertex id that you want to show paths" << endl;
				cin >> s;
				pos = G->checkVertexId(s);
				for (auto& t : G->VertexArray)
				{
					G->printPaths(G->VertexArray[pos], t);
				}
				G->setGraph();
			}
			break;
			case 6:
			{
				int s;
				int d;

				cout << "Please enter your start vertex id:" << endl;
				cin >> s;
				cout << "Please enter your end vertex id:" << endl;
				cin >> d;
				Edge temp(s, d);
				if (G->CheckEdge(temp)) cout << "it is in the graph" << endl;
				else cout << "Unfortunately we can't find it in our graph" << endl;
			}
			break;
			case 7:
			{
				int num;
				string s;

				cout << "Please enter your vertex string:" << endl;
				cin >> s;

				if (G->CheckVertexValue(s)) cout << "it is in the graph" << endl;
				else cout << "Unfortunately we can't find it in our graph" << endl;
			}
			break;
			case 8:
			{	int i;
			int pos;
			cout << "Please enter your vertex id:" << endl;
			cin >> i;
			pos = G->checkVertexId(i);
			for (auto& t : G->VertexArray)
			{
				G->printPaths(G->VertexArray[pos], t);
			}
			}
			break;
			case 9:
			{
				
				G->print();
				cout << endl;
				for (auto& t : G->VertexArray)
				{
					cout << t.id << " :" << t.Value << endl;
				}

			}
			break;
			case 0:
			{
				keyLoop = 0;
				break;
			}
			break;

			}

		}
	}
	else if (GraphSelect == 2)
	{

		while (keyLoop)
		{
			cout << "\n*********************************************" << endl;
			cout << "\n\nWelcom to Cplusplus Hotel Reservation System !!\n" << endl;
			cout << "1.Add Vertex\n" << endl;
			cout << "2.Add Edge\n" << endl;
			cout << "3.Remove Vertex by ID\n" << endl;
			cout << "4.Remove Edge\n" << endl;
			cout << "5.Show path by given vertex ID\n" << endl;
			cout << "6.Check edge exist or not\n" << endl;
			cout << "7.Check if value is contained by vertex\n" << endl;
			cout << "8.Show all paths\n" << endl;
			cout << "9.Print all vertex info\n" << endl;
			cout << "0.Quit\n" << endl;
			cout << "\n*********************************************" << endl;

			int commandKey;
			cout << "Please enter the number to select the option :";
			cin >> commandKey;
			cout << endl;
			switch (commandKey)

			{
			case 1:
			{	int num;
				string s;
				cout << "Please enter your vertex id(number):" << endl;
				cin >> num;
				cout << "Please enter your vertex string:" << endl;
				cin >> s;
				Vertex temp(num, s);
				if (g->CheckVertex(temp) || g->CheckVertex(num))
				{
					cout << "Already exist vertex" << endl;
					break;
				}

				else g->addVertex(temp);
				g->setGraph();
			}
			break;
			case 2:
			{
				int s;
				int d;
				cout << "Please enter your start vertex id:" << endl;
				cin >> s;
				cout << "Please enter your end vertex id:" << endl;
				cin >> d;
				Edge temp(s, d);
				g->addEdge(temp);
				g->setGraph();
			}
			break;
			case 3:
			{
				int s;
				int pos;
				cout << "Please enter vertex id that you want to remove" << endl;
				cin >> s;
				pos = g->checkVertexId(s);
				g->removeVertex(g->VertexArray[pos]);
				g->setGraph();
			}
			break;
			case 4:
			{
				int s;
				int d;
				cout << "Please enter your start vertex id:" << endl;
				cin >> s;
				cout << "Please enter your end vertex id:" << endl;
				cin >> d;
				Edge temp(s, d);
				g->removeEdge(temp);
				g->setGraph();
			}
			break;
			case 5:
			{
				int s;
				int pos;
				cout << "Please enter vertex id that you want to show paths" << endl;
				cin >> s;
				pos = g->checkVertexId(s);
				for (auto& t : g->VertexArray)
				{
					g->printPaths(g->VertexArray[pos]);
				}
				g->setGraph();
			}
			break;
			case 6:
			{
				int s;
				int d;

				cout << "Please enter your start vertex id:" << endl;
				cin >> s;
				cout << "Please enter your end vertex id:" << endl;
				cin >> d;
				Edge temp(s, d);
				if (g->CheckEdge(temp)) cout << "it is in the graph" << endl;
				else cout << "Unfortunately we can't find it in our graph" << endl;
				g->setGraph();
			}
			break;
			case 7:
			{
				int num;
				string s;

				cout << "Please enter your vertex string:" << endl;
				cin >> s;

				if (g->CheckVertexValue(s)) cout << "it is in the graph" << endl;
				else cout << "Unfortunately we can't find it in our graph" << endl;
				g->setGraph();
			}
			break;
			case 8:
			{	int i;
			int pos;
			cout << "Please enter your vertex id:" << endl;
			cin >> i;
			pos = g->checkVertexId(i);
			for (auto& t : g->VertexArray)
			{
				g->printPaths(g->VertexArray[pos]);
			}
			}
			break;
			case 9:
			{
				
				g->print();
				cout << endl;
				for (auto& t : g->VertexArray)
				{
					cout << t.id << " :" << t.Value << endl;
				}

			}
			break;
			case 0:
			{
				keyLoop = 0;
				break;
			}
			break;

			}

		}

	}
}