#include <vector>

#ifndef IP_UTILS_H
#define IP_UTILS_H

class SubnetUtils {
    public:
        void determineClass();
        int configureCidrMaxHosts(int cidr, char ipClass);
        int getNumberOfSubnets(int cidr, char IpClass);
        void displaySubnetSolution(std::vector<int> octets, int maxHosts, int subnets);
};

#endif // !IP_UTILS_H

