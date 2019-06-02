/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _HDProcessInfo : NSObject {

	unsigned _applicationState;
	int _pid;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned applicationState;                     //@synthesize applicationState=_applicationState - In the implementation block
@property (nonatomic,readonly) int pid;                                       //@synthesize pid=_pid - In the implementation block
+(id)processInfoWithDictionary:(id)arg1 ;
-(int)pid;
-(NSString *)bundleIdentifier;
-(unsigned)applicationState;
@end
