/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMediaAccessory.h>
#import <libobjc.A.dylib/HMDAccessoryMinimumUserPrivilegeCapable.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDAccessoryDisassociation.h>
#import <libobjc.A.dylib/HMDAccessoryUserManagement.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMFPairingIdentity, NSString, HMFExponentialBackoffTimer;

@interface HMDAirPlayAccessory : HMDMediaAccessory <HMDAccessoryMinimumUserPrivilegeCapable, HMFTimerDelegate, HMDAccessoryDisassociation, HMDAccessoryUserManagement, HMFLogging> {

	HMFPairingIdentity* _pairingIdentity;
	NSString* _password;
	long long _minimumUserPriviledge;
	HMFExponentialBackoffTimer* _configurationRetryTimer;

}

@property (nonatomic,readonly) HMFExponentialBackoffTimer * configurationRetryTimer;              //@synthesize configurationRetryTimer=_configurationRetryTimer - In the implementation block
@property (copy,readonly) NSString * password;                                                    //@synthesize password=_password - In the implementation block
@property (readonly) long long minimumUserPriviledge;                                             //@synthesize minimumUserPriviledge=_minimumUserPriviledge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL supportsDisassociation; 
@property (readonly) BOOL supportsUserManagement; 
@property (copy,readonly) HMFPairingIdentity * pairingIdentity;                                   //@synthesize pairingIdentity=_pairingIdentity - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(HMFPairingIdentity *)pairingIdentity;
-(void)timerDidFire:(id)arg1 ;
-(void)setReachable:(BOOL)arg1 ;
-(void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3 ;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(id)initWithTransaction:(id)arg1 home:(id)arg2 ;
-(void)disassociateWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)supportsDisassociation;
-(BOOL)supportsUserManagement;
-(void)setPairingIdentity:(HMFPairingIdentity *)arg1 ;
-(BOOL)supportsMinimumUserPrivilege;
-(void)handleUpdatedMinimumUserPrivilege:(long long)arg1 ;
-(void)handleUpdatedPassword:(id)arg1 ;
-(void)addUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pairingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)advertisement;
-(void)handleUpdatedName:(id)arg1 ;
-(void)populateModelObject:(id)arg1 version:(long long)arg2 ;
-(void)setAdvertisement:(id)arg1 ;
-(void)handleUpdatedAdvertisement:(id)arg1 ;
-(HMFExponentialBackoffTimer *)configurationRetryTimer;
-(long long)minimumUserPriviledge;
-(void)setPassword:(NSString *)arg1 ;
-(void)setMinimumUserPriviledge:(long long)arg1 ;
-(void)disassociateUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
@end
