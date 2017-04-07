#include <iostream>
#include <boost/progress.hpp>
using namespace boost;

int main() {
    boost::progress_timer t;

    std::cout << "hello world" << std::endl;
}