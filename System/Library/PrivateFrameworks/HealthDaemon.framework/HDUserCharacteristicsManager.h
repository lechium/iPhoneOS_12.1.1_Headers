/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, NSDate, NSDictionary, NSHashTable, NSString;

@interface HDUserCharacteristicsManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject> {

	BOOL _shouldUpdateQuantityCharacteristics;
	BOOL _needsUpdateAfterUnlock;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSDate* _userProfileLastUpdated;
	NSDictionary* _lastUserProfile;
	NSHashTable* _observers;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observerQueue;              //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,readonly) BOOL shouldUpdateQuantityCharacteristics;              //@synthesize shouldUpdateQuantityCharacteristics=_shouldUpdateQuantityCharacteristics - In the implementation block
@property (nonatomic,retain) NSDate * userProfileLastUpdated;                         //@synthesize userProfileLastUpdated=_userProfileLastUpdated - In the implementation block
@property (nonatomic,copy) NSDictionary * lastUserProfile;                            //@synthesize lastUserProfile=_lastUserProfile - In the implementation block
@property (assign,nonatomic) BOOL needsUpdateAfterUnlock;                             //@synthesize needsUpdateAfterUnlock=_needsUpdateAfterUnlock - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(HDProfile *)profile;
-(void)daemonReady:(id)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(id)diagnosticDescription;
-(id)userCharacteristicForType:(id)arg1 error:(id*)arg2 ;
-(void)setProfile:(HDProfile *)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_userCharacteristicForType:(id)arg1 entity:(id*)arg2 error:(id*)arg3 ;
-(BOOL)_setUserCharacteristic:(id)arg1 forType:(id)arg2 shouldInsertSample:(BOOL)arg3 updateProfileAndSync:(BOOL)arg4 error:(id*)arg5 ;
-(void)_userCharacteristicsDidChangeShouldUpdateUserProfile:(BOOL)arg1 shouldSync:(BOOL)arg2 ;
-(void)_updateQuantityCharacteristicsAndUserProfile;
-(void)_queue_updateQuantityCharacteristics;
-(void)_queue_updateUserProfile;
-(void)_queue_alertObserversDidUpdateUserProfile;
-(id)_mostRecentSampleOfType:(id)arg1 error:(id*)arg2 ;
-(void)_queue_updateQuantityCharacteristicsAndUserProfileIfNeeded;
-(BOOL)setUserCharacteristic:(id)arg1 forType:(id)arg2 error:(id*)arg3 ;
-(double)restingCaloriesFromTotalCalories:(double)arg1 timeInterval:(double)arg2 authorizedToRead:(BOOL)arg3 ;
-(void)addProfileObserver:(id)arg1 ;
-(void)removeProfileObserver:(id)arg1 ;
-(BOOL)shouldUpdateQuantityCharacteristics;
-(NSDate *)userProfileLastUpdated;
-(void)setUserProfileLastUpdated:(NSDate *)arg1 ;
-(NSDictionary *)lastUserProfile;
-(void)setLastUserProfile:(NSDictionary *)arg1 ;
-(BOOL)needsUpdateAfterUnlock;
-(void)setNeedsUpdateAfterUnlock:(BOOL)arg1 ;
-(void)dealloc;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

