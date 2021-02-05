#include <iostream>
#include "headers/IpClasses.h"
#include "headers/IpSubnet.h"
#include "headers/IpUtils.h"

int main() {
    std::cout << "Select a class (A, B, C)" << std::endl;
    std::cin >> ipClass.ipClassChoice;
    
    ipSubnet.cidr = 11;
    SubnetUtils utils;

    if (ipClass.ipClassChoice == 'A')
    {
        std::cout << ipClass.ipClassChoice << std::endl;
        int maxhosts = utils.configureCidrMaxHosts(ipSubnet.cidr, ipClass.ipClassChoice);
        std::cout << "max hosts: " << maxhosts << std::endl;
    }
    

}