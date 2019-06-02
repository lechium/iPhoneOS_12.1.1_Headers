/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@class NSMutableArray, NSRecursiveLock, NSArray, NSString;

@interface HMDIdentityRegistry : HMFObject <HMFLogging, HMFDumpState> {

	NSMutableArray* _registeredIdentities;
	NSRecursiveLock* _lock;

}

@property (nonatomic,readonly) NSRecursiveLock * lock;              //@synthesize lock=_lock - In the implementation block
@property (readonly) NSArray * registeredIdentities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedRegistry;
-(id)dumpState;
-(void)registerIdentity:(id)arg1 device:(id)arg2 object:(id)arg3 ;
-(void)registerIdentity:(id)arg1 account:(id)arg2 object:(id)arg3 ;
-(NSArray *)registeredIdentities;
-(id)attributeDescriptions;
-(id)identityForIdentifier:(id)arg1 ;
-(id)identitiesForDevice:(id)arg1 ;
-(id)identitiesForAccount:(id)arg1 ;
-(id)accountsForIdentity:(id)arg1 ;
-(void)deregisterIdentity:(id)arg1 object:(id)arg2 ;
-(id)init;
-(void)reset;
-(NSRecursiveLock *)lock;
@end

