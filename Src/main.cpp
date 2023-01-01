#include <iostream>
#include <boost/asio.hpp>

int main ( int argc , char** argv )  {
    
    for ( int i = 1 ; i < argc ; i++ ) {
        std::cout << argv[i] << std::endl;
    }

    return 0;
}