#include <iostream>
#include <sstream>

#include "anbncn.hpp"

/**
 * Test harness for anbncn grammar.
 * @author Aaron Moss
 */
int main(int argc, char** argv) {
	using namespace std;
	
	string s;
	while ( getline(cin, s) ) {
		stringstream ss(s);
		parse::state ps(ss);
		cout << "`" << s << "' " << (anbncn::G(ps) ? "MATCHES" : "DOESN'T MATCH") << endl;
	}
}

