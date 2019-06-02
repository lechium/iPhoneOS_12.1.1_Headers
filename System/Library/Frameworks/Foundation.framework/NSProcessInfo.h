/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSDictionary, NSArray, NSString;

@interface NSProcessInfo : NSObject {

	NSDictionary* environment;
	NSArray* arguments;
	NSString* hostName;
	NSString* name;
	long long automaticTerminationOptOutCounter;

}

@property (copy,readonly) NSString * userName; 
@property (copy,readonly) NSString * fullUserName; 
@property (copy,readonly) NSDictionary * environment; 
@property (copy,readonly) NSArray * arguments; 
@property (copy,readonly) NSString * hostName; 
@property (copy) NSString * processName; 
@property (readonly) int processIdentifier; 
@property (copy,readonly) NSString * globallyUniqueString; 
@property (copy,readonly) NSString * operatingSystemVersionString; 
@property (readonly) SCD_Struct_NS43 operatingSystemVersion; 
@property (readonly) unsigned long long processorCount; 
@property (readonly) unsigned long long activeProcessorCount; 
@property (readonly) unsigned long long physicalMemory; 
@property (readonly) double systemUptime; 
@property (assign) BOOL automaticTerminationSupportEnabled; 
+(id)processInfo;
-(void)performExpiringActivityWithReason:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_registerForHardwareStateNotifications;
-(void)_reactivateActivity:(id)arg1 ;
-(unsigned long long)operatingSystem;
-(void)setArguments:(NSArray *)arg1 ;
-(NSString *)hostName;
-(NSString *)userName;
-(BOOL)isOperatingSystemAtLeastVersion:(SCD_Struct_NS43)arg1 ;
-(BOOL)isTranslated;
-(void)disableSuddenTermination;
-(void)enableSuddenTermination;
-(void)_exitIfSuddenTerminationEnabledWithStatus:(int)arg1 ;
-(void)_exitWhenSuddenTerminationEnabledWithStatus:(int)arg1 ;
-(long long)_suddenTerminationDisablingCount;
-(void)disableAutomaticTermination:(id)arg1 ;
-(void)enableAutomaticTermination:(id)arg1 ;
-(void)setAutomaticTerminationSupportEnabled:(BOOL)arg1 ;
-(BOOL)automaticTerminationSupportEnabled;
-(void)_disableAutomaticTerminationOnly:(id)arg1 ;
-(void)_enableAutomaticTerminationOnly:(id)arg1 ;
-(void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)beginSuspensionOfSystemBehaviors:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)endSystemBehaviorSuspension:(id)arg1 ;
-(void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setProcessName:(NSString *)arg1 ;
-(BOOL)isLowPowerModeEnabled;
-(NSString *)globallyUniqueString;
-(id)operatingSystemName;
-(NSString *)operatingSystemVersionString;
-(long long)thermalState;
-(SCD_Struct_NS43)operatingSystemVersion;
-(id)beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 ;
-(NSArray *)arguments;
-(unsigned long long)physicalMemory;
-(void)endActivity:(id)arg1 ;
-(unsigned long long)activeProcessorCount;
-(void)dealloc;
-(NSDictionary *)environment;
-(double)systemUptime;
-(id)userHomeDirectory;
-(NSString *)processName;
-(int)processIdentifier;
-(unsigned long long)processorCount;
@end

