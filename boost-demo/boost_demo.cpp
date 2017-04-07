//
// Created by chao.zhang on 07/04/2017.
//
#include <iostream>
#include "boost_demo.h"
#include "Poco/URI.h"

void demo::test() {
    Poco::URI uri1("http://www.appinf.com:88/sample?example-query#frag");
    std::string scheme(uri1.getScheme());

    std::cout << scheme << std::endl;
}