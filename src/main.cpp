#include <iostream>
#include "headers/IpClasses.h"
#include "headers/IpSubnet.h"
#include "headers/IpUtils.h"
#include "headers/Solution.h"
#include <vector>
#include <string>

int main() {
    std::cout << "Select a class (A, B, C)" << std::endl;
    std::cin >> ipClass.ipClassChoice;

    SubnetUtils utils;
    int choice;

    if (ipClass.ipClassChoice == 'A') {
        std::cout << "Select a cidr number between 8 - 30" << std::endl;
        std::cin >> choice;
        if (choice >=8 && choice <= 30) {
            ipSubnet.cidr = choice;
        } else {
            std::cout << "Out of range for class A cidr, defaulted to 8" << std::endl;
            ipSubnet.cidr = 8;
        }
    }

    if (ipClass.ipClassChoice == 'B') {
        std::cout << "Select a cidr number between 16 - 30" << std::endl;
        std::cin >> choice;
        if (choice >=16 && choice <= 30) {
            ipSubnet.cidr = choice;
        } else {
            std::cout << "Out of range for class B cidr, defaulted to 16" << std::endl;
            ipSubnet.cidr = 16;
        }
    }

    if (ipClass.ipClassChoice == 'C') {
        std::cout << "Select a cidr number between 24 - 30" << std::endl;
        std::cin >> choice;
        if (choice >=24 && choice <= 30) {
            ipSubnet.cidr = choice;
        } else {
            std::cout << "Out of range for class C cidr, defaulted to 24" << std::endl;
            ipSubnet.cidr = 24;
        }
    }

    if (ipClass.ipClassChoice == 'A')
    {
        std::cout << ipClass.ipClassChoice << std::endl;
        int maxhosts = utils.configureCidrMaxHosts(ipSubnet.cidr, ipClass.ipClassChoice);
        int subnets = utils.getNumberOfSubnets(ipSubnet.cidr, ipClass.ipClassChoice);
        std::cout << "max hosts: " << maxhosts << ", subnets: " << subnets << std::endl;
    }

    if (ipClass.ipClassChoice == 'B')
    {
        std::cout << ipClass.ipClassChoice << std::endl;
        int maxhosts = utils.configureCidrMaxHosts(ipSubnet.cidr, ipClass.ipClassChoice);
        int subnets = utils.getNumberOfSubnets(ipSubnet.cidr, ipClass.ipClassChoice);
        std::cout << "max hosts: " << maxhosts << ", subnets: " << subnets << std::endl;
    }

    if (ipClass.ipClassChoice == 'C')
    {
        std::cout << ipClass.ipClassChoice << std::endl;
        int maxhosts = utils.configureCidrMaxHosts(ipSubnet.cidr, ipClass.ipClassChoice);
        int subnets = utils.getNumberOfSubnets(ipSubnet.cidr, ipClass.ipClassChoice);
        std::cout << "max hosts: " << maxhosts << ", subnets: " << subnets << std::endl;
        std::vector<Solution> sol = utils.displaySubnetSolution(ipSubnet.address, maxhosts, subnets);

        std::cout << "Net Addr \t First Usable \t Last Usable \t Broadcast" << std::endl;
        for(Solution solution : sol)
        {
            std::cout << solution << std::endl;
        }

    }
    

}