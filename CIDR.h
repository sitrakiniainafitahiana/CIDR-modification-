#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char get_data();
int verification_IP_Address(int num1, int num2, int num3, int num4, int MSR_value);
int *get_IP_bin (int num1, int num2, int num3, int num4);
int *get_netmask_bin (int MSR_value);
int *default_MSR (int *netmask_bin, int *IP_bin);
int *get_broadcast(int MSR_value, int *netmask_bin, int *IP_bin);
int *power ();
void *convertion(int *netmask_bin, int *IP_bin, int *network_address_bin, int *broadcast_bin, int *pow);
