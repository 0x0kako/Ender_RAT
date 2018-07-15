#include <Windows.h>
#include <iostream>
#include "command_def.h"
#include "com_vars.h"
using namespace std;

void display_client_help()
{
	cout << "----> show <msg>   - Display a Message Box with <msg> on client's system" << endl;
	cout << "----> exit         - Go back to admin mode" << endl;
	cout << "----> disconnect   - Disconnect the current client" << endl;
	cout << "----> username     - Display Client PC's username" << endl;
}

void display_admin_help()
{
	cout << " Commands:" << endl;
	cout << "--> show clients - Display all the connected clients" << endl;
	cout << "--> client <id>  - To Open Client Interacting Panel for that Client" << endl;
	cout << "--> quit         - End this program" << endl;
	cout << "--> admin help   - Display this help message" << endl << "# ";
}

void show_clients()
{
	cout << " S.No." << string(15, ' ') << "ID" << endl;
	for(int i=0;i < client_ids.size();i++)
	{
		cout << " " << i << string(15, ' ') << client_ids[i] << endl;
	}
}

