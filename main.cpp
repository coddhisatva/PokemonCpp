//
//  main.cpp
//  cpp_study2
//
//  Created by Conor Egan on 11/19/25.
//

#include <iostream>
#include "game.h"
#include "Move.h"
#include "Pokemon.h"

using std::string;
using std::cout;
using std::vector;
using std::endl;

int main(int argc, const char * argv[]) {
    // insert code here...
    /*
    cout << "num Args: " << argc << '\n';
    for (size_t i = 0; i < argc; i++) {
        cout << "argv[" << i << "]: " << argv[i] << " | ";
    } cout << '\n';
    //cout << "argv[0]: " << argv[0] << " | argv[1]: " << argv[1]
     */
    
    string userName;
    cout << "What's your name, trainer?:";
    std::cin >> userName;
    
    Game game(userName);
    game.run("GO!");
    
    game.chooseStarter();
    game.rivalAppears();
    
    cout << "Game over. :-)'\n'";
    
    return EXIT_SUCCESS;
}
