/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableSet, NSMutableDictionary, NSString, NSArray;

@interface TTYSettings : NSObject {

	NSLock* _synchronizeDomainsLock;
	NSMutableSet* _registeredNotifications;
	NSMutableSet* _synchronizePreferences;
	NSMutableDictionary* _updateBlocks;

}

@property (nonatomic,retain) NSMutableSet * registeredNotifications;              //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableSet * synchronizePreferences;               //@synthesize synchronizePreferences=_synchronizePreferences - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updateBlocks;                  //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (assign,nonatomic) BOOL TTYHardwareEnabled; 
@property (assign,nonatomic) BOOL TTYSoftwareEnabled; 
@property (assign,nonatomic) BOOL incomingCallsTTY; 
@property (assign,nonatomic) BOOL ttyShouldBeRealtime; 
@property (nonatomic,retain) NSString * preferredRelayNumber; 
@property (nonatomic,retain) NSArray * cannedResponses; 
@property (assign,nonatomic) BOOL hasReceivedRTTCall; 
@property (assign,nonatomic) long long incomingTTYCallCount; 
@property (assign,nonatomic) long long outgoingTTYCallCount; 
@property (assign,nonatomic) double lastCallCountReset; 
@property (assign,nonatomic) double lastDBVacuum; 
@property (assign,nonatomic) BOOL internalOverrideTTYAvailability; 
+(void)initialize;
+(id)sharedInstance;
-(NSMutableDictionary *)updateBlocks;
-(void)setUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)_notificationForPreferenceKey:(id)arg1 ;
-(void)_registerForNotification:(id)arg1 ;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(id)_preferenceKeyForSelector:(SEL)arg1 ;
-(BOOL)TTYHardwareEnabledForContext:(id)arg1 ;
-(BOOL)TTYHardwareEnabled;
-(BOOL)TTYSoftwareEnabledForContext:(id)arg1 ;
-(BOOL)ttyShouldBeRealtime;
-(NSArray *)cannedResponses;
-(void)updateGizmoValueIfNeeded:(id)arg1 forPreferenceKey:(id)arg2 ;
-(long long)settingsVersion;
-(id)objectValueForKey:(id)arg1 withClass:(Class)arg2 andDefaultValue:(id)arg3 ;
-(void)setPreferredRelayNumber:(id)arg1 forContext:(id)arg2 ;
-(BOOL)boolValueForKey:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(void)setTTYHardwareEnabled:(BOOL)arg1 forContext:(id)arg2 ;
-(void)setTTYSoftwareEnabled:(BOOL)arg1 forContext:(id)arg2 ;
-(void)setIncomingCallsTTY:(BOOL)arg1 forContext:(id)arg2 ;
-(void)setTTYShouldBeRealtime:(BOOL)arg1 forContext:(id)arg2 ;
-(void)setSettingsVersion:(long long)arg1 ;
-(BOOL)incomingCallsTTY;
-(NSString *)preferredRelayNumber;
-(BOOL)hasReceivedRTTCall;
-(BOOL)internalOverrideTTYAvailability;
-(id)_selectorMap;
-(id)uuidFromContext:(id)arg1 ;
-(id)objectValueForKey:(id)arg1 andContext:(id)arg2 withClass:(Class)arg3 andDefaultValue:(id)arg4 ;
-(void)_synchronizeIfNecessary:(id)arg1 ;
-(BOOL)incomingCallsTTYForContext:(id)arg1 ;
-(long long)integerValueForKey:(id)arg1 withDefaultValue:(long long)arg2 ;
-(BOOL)ttyShouldBeRealtimeForContext:(id)arg1 ;
-(id)preferredRelayNumberForContext:(id)arg1 ;
-(BOOL)boolValueForKey:(id)arg1 andContext:(id)arg2 withDefaultValue:(BOOL)arg3 ;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 andContext:(id)arg3 ;
-(BOOL)shouldMigrateSettings;
-(void)migrateSettings;
-(SEL)selectorForPreferenceKey:(id)arg1 ;
-(id)notificationForSelector:(SEL)arg1 ;
-(void)setTTYHardwareEnabled:(BOOL)arg1 ;
-(void)setTTYSoftwareEnabled:(BOOL)arg1 ;
-(void)setIncomingCallsTTY:(BOOL)arg1 ;
-(long long)incomingTTYCallCount;
-(void)setIncomingTTYCallCount:(long long)arg1 ;
-(long long)outgoingTTYCallCount;
-(void)setOutgoingTTYCallCount:(long long)arg1 ;
-(double)lastCallCountReset;
-(void)setLastCallCountReset:(double)arg1 ;
-(double)lastDBVacuum;
-(void)setLastDBVacuum:(double)arg1 ;
-(void)setTtyShouldBeRealtime:(BOOL)arg1 ;
-(void)setPreferredRelayNumber:(NSString *)arg1 ;
-(void)setHasReceivedRTTCall:(BOOL)arg1 ;
-(void)setCannedResponses:(NSArray *)arg1 ;
-(void)resetCannedResponses;
-(void)setInternalOverrideTTYAvailability:(BOOL)arg1 ;
-(void)setSynchronizePreferences:(NSMutableSet *)arg1 ;
-(void)setRegisteredNotifications:(NSMutableSet *)arg1 ;
-(NSMutableSet *)registeredNotifications;
-(id)init;
-(void)dealloc;
-(id)currentLocale;
-(BOOL)TTYSoftwareEnabled;
-(id)valueForPreferenceKey:(id)arg1 ;
-(NSMutableSet *)synchronizePreferences;
@end

