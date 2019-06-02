/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WiFiKitUI/WiFiKitUI-Structs.h>
@class NSString, NSArray, NSDate;

@interface WFNetworkSettingsConfig : NSObject {

	BOOL _current;
	BOOL _forgetable;
	BOOL _joinable;
	BOOL _manageable;
	BOOL _cloudSyncable;
	BOOL _canRenewLease;
	BOOL _autoJoinConfigurable;
	BOOL _autoJoinEnabled;
	BOOL _autoLoginConfigurable;
	BOOL _autoLoginEnabled;
	BOOL _httpProxyConfigurable;
	BOOL _httpProxyAuthenticationRequired;
	NSString* _ssid;
	NSArray* _healthRecommendations;
	long long _ipv4Config;
	NSString* _ipv4Address;
	NSString* _ipv4AddressManual;
	NSString* _ipv4SubnetMask;
	NSString* _ipv4SubnetMaskManual;
	NSString* _ipv4RouterAddress;
	NSString* _ipv4RouterAddressManual;
	NSString* _dhcpClientID;
	NSDate* _dhcpLeaseExpirationDate;
	long long _ipv6Config;
	NSArray* _ipv6Addresses;
	NSArray* _ipv6PrefixLengths;
	NSString* _ipv6AddressManual;
	NSString* _ipv6RouterAddress;
	NSString* _ipv6RouterAddressManual;
	NSString* _ipv6PrefixLengthManual;
	long long _dnsConfig;
	NSArray* _dnsSeverAddresses;
	NSArray* _dnsSearchDomains;
	long long _httpProxyConfig;
	NSString* _httpProxyServerAddress;
	NSString* _httpProxyServerPort;
	NSString* _httpProxyUsername;
	NSString* _httpProxyPassword;
	NSString* _httpProxyConfigPAC;

}

@property (nonatomic,copy) NSString * ssid;                           //@synthesize ssid=_ssid - In the implementation block
@property (assign) BOOL current;                                      //@synthesize current=_current - In the implementation block
@property (assign) BOOL forgetable;                                   //@synthesize forgetable=_forgetable - In the implementation block
@property (assign) BOOL joinable;                                     //@synthesize joinable=_joinable - In the implementation block
@property (assign) BOOL manageable;                                   //@synthesize manageable=_manageable - In the implementation block
@property (assign) BOOL cloudSyncable;                                //@synthesize cloudSyncable=_cloudSyncable - In the implementation block
@property (assign) BOOL canRenewLease;                                //@synthesize canRenewLease=_canRenewLease - In the implementation block
@property (assign) BOOL autoJoinConfigurable;                         //@synthesize autoJoinConfigurable=_autoJoinConfigurable - In the implementation block
@property (assign) BOOL autoJoinEnabled;                              //@synthesize autoJoinEnabled=_autoJoinEnabled - In the implementation block
@property (assign) BOOL autoLoginConfigurable;                        //@synthesize autoLoginConfigurable=_autoLoginConfigurable - In the implementation block
@property (assign) BOOL autoLoginEnabled;                             //@synthesize autoLoginEnabled=_autoLoginEnabled - In the implementation block
@property (retain) NSArray * healthRecommendations;                   //@synthesize healthRecommendations=_healthRecommendations - In the implementation block
@property (assign) long long ipv4Config;                              //@synthesize ipv4Config=_ipv4Config - In the implementation block
@property (copy) NSString * ipv4Address;                              //@synthesize ipv4Address=_ipv4Address - In the implementation block
@property (copy) NSString * ipv4AddressManual;                        //@synthesize ipv4AddressManual=_ipv4AddressManual - In the implementation block
@property (copy) NSString * ipv4SubnetMask;                           //@synthesize ipv4SubnetMask=_ipv4SubnetMask - In the implementation block
@property (copy) NSString * ipv4SubnetMaskManual;                     //@synthesize ipv4SubnetMaskManual=_ipv4SubnetMaskManual - In the implementation block
@property (copy) NSString * ipv4RouterAddress;                        //@synthesize ipv4RouterAddress=_ipv4RouterAddress - In the implementation block
@property (copy) NSString * ipv4RouterAddressManual;                  //@synthesize ipv4RouterAddressManual=_ipv4RouterAddressManual - In the implementation block
@property (copy) NSString * dhcpClientID;                             //@synthesize dhcpClientID=_dhcpClientID - In the implementation block
@property (copy) NSDate * dhcpLeaseExpirationDate;                    //@synthesize dhcpLeaseExpirationDate=_dhcpLeaseExpirationDate - In the implementation block
@property (assign) long long ipv6Config;                              //@synthesize ipv6Config=_ipv6Config - In the implementation block
@property (retain) NSArray * ipv6Addresses;                           //@synthesize ipv6Addresses=_ipv6Addresses - In the implementation block
@property (retain) NSArray * ipv6PrefixLengths;                       //@synthesize ipv6PrefixLengths=_ipv6PrefixLengths - In the implementation block
@property (copy) NSString * ipv6AddressManual;                        //@synthesize ipv6AddressManual=_ipv6AddressManual - In the implementation block
@property (copy) NSString * ipv6RouterAddress;                        //@synthesize ipv6RouterAddress=_ipv6RouterAddress - In the implementation block
@property (copy) NSString * ipv6RouterAddressManual;                  //@synthesize ipv6RouterAddressManual=_ipv6RouterAddressManual - In the implementation block
@property (copy) NSString * ipv6PrefixLengthManual;                   //@synthesize ipv6PrefixLengthManual=_ipv6PrefixLengthManual - In the implementation block
@property (assign) long long dnsConfig;                               //@synthesize dnsConfig=_dnsConfig - In the implementation block
@property (retain) NSArray * dnsSeverAddresses;                       //@synthesize dnsSeverAddresses=_dnsSeverAddresses - In the implementation block
@property (copy) NSArray * dnsSearchDomains;                          //@synthesize dnsSearchDomains=_dnsSearchDomains - In the implementation block
@property (assign) BOOL httpProxyConfigurable;                        //@synthesize httpProxyConfigurable=_httpProxyConfigurable - In the implementation block
@property (assign) long long httpProxyConfig;                         //@synthesize httpProxyConfig=_httpProxyConfig - In the implementation block
@property (copy) NSString * httpProxyServerAddress;                   //@synthesize httpProxyServerAddress=_httpProxyServerAddress - In the implementation block
@property (copy) NSString * httpProxyServerPort;                      //@synthesize httpProxyServerPort=_httpProxyServerPort - In the implementation block
@property (assign) BOOL httpProxyAuthenticationRequired;              //@synthesize httpProxyAuthenticationRequired=_httpProxyAuthenticationRequired - In the implementation block
@property (copy) NSString * httpProxyUsername;                        //@synthesize httpProxyUsername=_httpProxyUsername - In the implementation block
@property (copy) NSString * httpProxyPassword;                        //@synthesize httpProxyPassword=_httpProxyPassword - In the implementation block
@property (copy) NSString * httpProxyConfigPAC;                       //@synthesize httpProxyConfigPAC=_httpProxyConfigPAC - In the implementation block
-(void)setSsid:(NSString *)arg1 ;
-(BOOL)current;
-(void)setCurrent:(BOOL)arg1 ;
-(BOOL)joinable;
-(BOOL)manageable;
-(BOOL)canRenewLease;
-(NSDate *)dhcpLeaseExpirationDate;
-(BOOL)httpProxyConfigurable;
-(NSString *)httpProxyConfigPAC;
-(BOOL)isEqualToNetworkSettingsConfig:(id)arg1 ;
-(void)setIpv4Config:(long long)arg1 ;
-(void)setIpv4AddressManual:(NSString *)arg1 ;
-(void)setIpv4Address:(NSString *)arg1 ;
-(void)setIpv4SubnetMaskManual:(NSString *)arg1 ;
-(void)setIpv4SubnetMask:(NSString *)arg1 ;
-(void)setIpv4RouterAddressManual:(NSString *)arg1 ;
-(void)setIpv4RouterAddress:(NSString *)arg1 ;
-(NSString *)dhcpClientID;
-(void)setDhcpClientID:(NSString *)arg1 ;
-(void)setIpv6Config:(long long)arg1 ;
-(void)setIpv6Addresses:(NSArray *)arg1 ;
-(void)setIpv6RouterAddress:(NSString *)arg1 ;
-(void)setDnsSeverAddresses:(NSArray *)arg1 ;
-(void)setDnsSearchDomains:(NSArray *)arg1 ;
-(void)setHttpProxyServerAddress:(NSString *)arg1 ;
-(void)setHttpProxyServerPort:(NSString *)arg1 ;
-(void)setHttpProxyUsername:(NSString *)arg1 ;
-(void)setHttpProxyPassword:(NSString *)arg1 ;
-(void)setHttpProxyAuthenticationRequired:(BOOL)arg1 ;
-(void)setHttpProxyConfigPAC:(NSString *)arg1 ;
-(void)setAutoJoinEnabled:(BOOL)arg1 ;
-(void)setAutoLoginEnabled:(BOOL)arg1 ;
-(NSArray *)healthRecommendations;
-(void)setJoinable:(BOOL)arg1 ;
-(NSArray *)ipv6Addresses;
-(NSArray *)ipv6PrefixLengths;
-(NSString *)httpProxyUsername;
-(void)setHealthRecommendations:(NSArray *)arg1 ;
-(void)setHttpProxyConfigurable:(BOOL)arg1 ;
-(void)setForgetable:(BOOL)arg1 ;
-(void)setCanRenewLease:(BOOL)arg1 ;
-(void)setAutoJoinConfigurable:(BOOL)arg1 ;
-(BOOL)autoJoinConfigurable;
-(BOOL)autoJoinEnabled;
-(void)setAutoLoginConfigurable:(BOOL)arg1 ;
-(BOOL)autoLoginConfigurable;
-(BOOL)autoLoginEnabled;
-(BOOL)forgetable;
-(void)setManageable:(BOOL)arg1 ;
-(void)setCloudSyncable:(BOOL)arg1 ;
-(BOOL)cloudSyncable;
-(NSString *)ipv4Address;
-(NSString *)ipv4RouterAddress;
-(NSString *)ipv4SubnetMask;
-(void)setDhcpLeaseExpirationDate:(NSDate *)arg1 ;
-(void)setIpv6AddressManual:(NSString *)arg1 ;
-(void)setIpv6RouterAddressManual:(NSString *)arg1 ;
-(void)setIpv6PrefixLengthManual:(NSString *)arg1 ;
-(void)setIpv6PrefixLengths:(NSArray *)arg1 ;
-(NSString *)ipv6RouterAddress;
-(long long)dnsConfig;
-(void)setDnsConfig:(long long)arg1 ;
-(NSArray *)dnsSeverAddresses;
-(BOOL)httpProxyAuthenticationRequired;
-(NSString *)httpProxyPassword;
-(void)setHttpProxyConfig:(long long)arg1 ;
-(id)changesBetweenConfig:(id)arg1 ;
-(BOOL)validIPv4Configuration;
-(long long)ipv4Config;
-(NSString *)ipv4AddressManual;
-(NSString *)ipv4SubnetMaskManual;
-(NSString *)ipv4RouterAddressManual;
-(BOOL)validIPv6Configuration;
-(long long)ipv6Config;
-(NSString *)ipv6AddressManual;
-(NSString *)ipv6PrefixLengthManual;
-(NSString *)ipv6RouterAddressManual;
-(BOOL)validProxyConfiguration;
-(long long)httpProxyConfig;
-(NSString *)httpProxyServerAddress;
-(NSString *)httpProxyServerPort;
-(NSString *)ssid;
-(NSArray *)dnsSearchDomains;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

