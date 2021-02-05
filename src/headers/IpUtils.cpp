#include "IpUtils.h"
#include "IpCidrHostsMaps.h"
#include "IpMaxSubnetMaps.h"
#include "Solution.h"
#include <vector>
#include <iostream>

int SubnetUtils::configureCidrMaxHosts(int cidr, char ipClass) {
    if (ipClass == 'A') {
        if(maxHostsMapClassA.at(cidr)) {
            return maxHostsMapClassA.at(cidr);
        } else {
            std::cout << "Could Not find mapped value" << std::endl;
        }
    }
    if (ipClass == 'B') {
        if(maxHostsMapClassB.at(cidr)) {
            return maxHostsMapClassB.at(cidr);
        } else {
            std::cout << "Could Not find mapped value" << std::endl;
        }
    }
    if (ipClass == 'C') {
        if(maxHostsMapClassC.at(cidr)) {
            return maxHostsMapClassC.at(cidr);
        } else {
            std::cout << "Could Not find mapped value" << std::endl;
        }
    }
    return 0;
}

int SubnetUtils::getNumberOfSubnets(int cidr, char ipClass) {
    if (ipClass == 'A') {
        if(cidrMaxSubnetsMapClassA.at(cidr)) {
            return cidrMaxSubnetsMapClassA.at(cidr);
        } else {
            std::cout << "Could Not find mapped value" << std::endl;
        }
    }
     if (ipClass == 'B') {
        if(cidrMaxSubnetsMapClassB.at(cidr)) {
            return cidrMaxSubnetsMapClassB.at(cidr);
        } else {
            std::cout << "Could Not find mapped value" << std::endl;
        }
    }
     if (ipClass == 'C') {
        if(cidrMaxSubnetsMapClassC.at(cidr)) {
            return cidrMaxSubnetsMapClassC.at(cidr);
        } else {
            std::cout << "Could Not find mapped value" << std::endl;
        }
    }
    return 0;
}



std::vector<Solution> SubnetUtils::displaySubnetSolution(int octet, int maxHosts, int subnets) {
    std::vector<Solution> solution;

    for (int i = 0; i < subnets; i++)
    {
        if (i == 0)
        {
            solution.insert(solution.begin(), Solution(octet, octet + 1, (octet  + maxHosts - 2), (maxHosts - 1)));
            continue;
        }
        
        solution.insert(solution.end(), Solution(maxHosts * i, (maxHosts * i) + 1, (maxHosts * i) + maxHosts - 2, (maxHosts * i) + maxHosts - 1));
    }

    return solution;
}