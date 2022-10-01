#pragma once
#define import_random               srand(time(NULL));
#define randint(number, quantity)   rand() % number + quantity
#define print(material)				cout << material << endl;
#define $                           << " " <<
#define input(material)				cin >> material; 
#define input(material, message)    cout << message; cin >> material;
#define elif				        else if
#define and						    &&
#define or		                    ||
#define not                         !