#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <string>
#include <map>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int cases;
	char str[100];

	cases = 0;
	while(gets(str)){
		if(!strcmp(str, "#")) break;
		else if(!strcmp(str, "HELLO")) printf("Case %d: ENGLISH\n", ++cases);
		else if(!strcmp(str, "HOLA")) printf("Case %d: SPANISH\n", ++cases);
		else if(!strcmp(str, "HALLO")) printf("Case %d: GERMAN\n", ++cases);
		else if(!strcmp(str, "BONJOUR")) printf("Case %d: FRENCH\n", ++cases);
		else if(!strcmp(str, "CIAO")) printf("Case %d: ITALIAN\n", ++cases);
		else if(!strcmp(str, "ZDRAVSTVUJTE")) printf("Case %d: RUSSIAN\n", ++cases);
		else printf("Case %d: UNKNOWN\n", ++cases);
	}
	
	return 0;
}

	