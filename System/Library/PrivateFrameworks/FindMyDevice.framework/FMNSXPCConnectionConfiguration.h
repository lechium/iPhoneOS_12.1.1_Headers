/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FMNSXPCConnectionConfigurable.h>

@class NSString, NSXPCInterface;

@interface FMNSXPCConnectionConfiguration : NSObject <FMNSXPCConnectionConfigurable> {

	BOOL _machService;
	NSString* _serviceName;
	NSXPCInterface* _remoteInterface;
	NSXPCInterface* _exportedInterface;
	unsigned long long _options;

}

@property (nonatomic,retain) NSString * serviceName;                          //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteInterface;                //@synthesize remoteInterface=_remoteInterface - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;              //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (assign,nonatomic) unsigned long long options;                      //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL machService;                                //@synthesize machService=_machService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identityConfiguration;
+(id)fmipConfiguration;
+(id)helperConfiguration;
+(id)userNotificationConfiguration;
+(id)btDiscoveryConfiguration;
-(BOOL)machService;
-(void)setMachService:(BOOL)arg1 ;
-(void)setRemoteInterface:(NSXPCInterface *)arg1 ;
-(NSXPCInterface *)remoteInterface;
-(void)setServiceName:(NSString *)arg1 ;
-(unsigned long long)options;
-(NSXPCInterface *)exportedInterface;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(NSString *)serviceName;
@end

