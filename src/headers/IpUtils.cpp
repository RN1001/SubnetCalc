#include "IpUtils.h"
#include "IpCidrHostsMaps.h"
#include <vector>
#include <iostream>

int SubnetUtils::configureCidrMaxHosts(int cidr, char ipClass) {
    if (ipClass == 'A') {
        if(cidrHostsMapClassA.at(cidr)) {
            return cidrHostsMapClassA.at(cidr);
        } else {
            std::cout << "Could Not find mapped value" << std::endl;
        }
    }
    return 0;
}

// int SubnetUtils::getNumberOfSubnets(int cidr, char ipClass) {

// }

// void SubnetUtils::displaySubnetSolution(std::vector<int> octets, int maxHosts, int subnets) {

// }