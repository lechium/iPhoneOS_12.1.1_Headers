/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PMMDataProtectionMonitorDelegate;
#import <ProactiveMagicalMoments/ProactiveMagicalMoments-Structs.h>
@interface PMMDataProtectionMonitor : NSObject {

	id<PMMDataProtectionMonitorDelegate> _delegate;
	long long _encryptedDataAvailability;
	BOOL _unlockedSinceBoot;
	long long _dataProtectionStatus;
	opaque_pthread_rwlock_t _rwlock;

}

@property (assign,nonatomic,__weak) id<PMMDataProtectionMonitorDelegate> delegate; 
@property (nonatomic,readonly) long long encryptedDataAvailability; 
@property (nonatomic,readonly) BOOL unlockedSinceBoot; 
@property (nonatomic,readonly) long long dataProtectionStatus;                                  //@synthesize dataProtectionStatus=_dataProtectionStatus - In the implementation block
+(id)PMMDataProtectionMonitorDataProtectionStatus:(long long)arg1 ;
+(id)PMMDataProtectionMonitorEncryptedDataAvailabilityToString:(long long)arg1 ;
+(id)PMMDataProtectionMonitorLockStateToString:(long long)arg1 ;
-(void)_registerForKeyBagNotifications;
-(void)setDataProtectionStatus:(long long)arg1 ;
-(void)handkeKeybagLockStatusChange:(long long)arg1 ;
-(BOOL)dataProtectionEnabled;
-(long long)dataProtectionStatus;
-(BOOL)unlockedSinceBoot;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(long long)encryptedDataAvailability;
-(void)handleUnlockedSinceBoot;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<PMMDataProtectionMonitorDelegate>)arg1 ;
-(id<PMMDataProtectionMonitorDelegate>)delegate;
@end

