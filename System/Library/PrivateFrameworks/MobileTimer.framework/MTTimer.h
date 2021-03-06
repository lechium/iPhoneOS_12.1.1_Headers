/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/MTScheduleable.h>
#import <libobjc.A.dylib/MTDictionarySerializable.h>
#import <libobjc.A.dylib/MTDiffable.h>
#import <libobjc.A.dylib/MTTimerIntentSupport.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MTTimerTime;
@class NSUUID, NSDate, NSString, MTSound, NSURL;

@interface MTTimer : NSObject <MTScheduleable, MTDictionarySerializable, MTDiffable, MTTimerIntentSupport, NAEquatable, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSUUID* _timerID;
	unsigned long long _state;
	double _duration;
	NSDate* _firedDate;
	NSDate* _lastModifiedDate;
	NSDate* _dismissedDate;
	NSString* _title;
	MTSound* _sound;
	id<MTTimerTime> _fireTime;
	/*^block*/id _currentDateProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * timerID; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double remainingTime; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,copy) id<MTTimerTime> fireTime;                   //@synthesize fireTime=_fireTime - In the implementation block
@property (assign,nonatomic) unsigned long long state;                 //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double duration;                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) MTSound * sound;                            //@synthesize sound=_sound - In the implementation block
@property (nonatomic,copy) NSDate * firedDate;                         //@synthesize firedDate=_firedDate - In the implementation block
@property (nonatomic,copy) NSDate * lastModifiedDate;                  //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,copy) NSDate * dismissedDate;                     //@synthesize dismissedDate=_dismissedDate - In the implementation block
@property (nonatomic,copy) id currentDateProvider;                     //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (nonatomic,readonly) NSString * timerIDString; 
@property (nonatomic,readonly) NSDate * fireDate; 
@property (nonatomic,readonly) NSUUID * timerID;                       //@synthesize timerID=_timerID - In the implementation block
@property (nonatomic,readonly) NSURL * timerURL; 
@property (nonatomic,readonly) NSString * displayTitle; 
@property (nonatomic,readonly) BOOL hasDefaultTitle; 
+(id)descriptionForState:(unsigned long long)arg1 ;
+(id)currentTimerFromTimers:(id)arg1 ;
+(BOOL)stateChangeIsAllowableFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
+(id)_timerTimeForState:(unsigned long long)arg1 remainingTime:(double)arg2 currentDateProvider:(/*^block*/id)arg3 ;
+(BOOL)supportsSecureCoding;
-(id<MTTimerTime>)fireTime;
-(void)setFireTime:(id<MTTimerTime>)arg1 ;
-(double)remainingTime;
-(NSURL *)timerURL;
-(NSDate *)firedDate;
-(NSDate *)dismissedDate;
-(void)setFiredDate:(NSDate *)arg1 ;
-(void)setDismissedDate:(NSDate *)arg1 ;
-(NSDate *)lastModifiedDate;
-(NSString *)displayTitle;
-(id)_initCommon;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(BOOL)shouldBeScheduled;
-(id)upcomingTriggersAfterDate:(id)arg1 ;
-(id)initWithState:(unsigned long long)arg1 duration:(double)arg2 currentDateProvider:(/*^block*/id)arg3 ;
-(NSString *)timerIDString;
-(id)timerByRestarting;
-(id)currentDateProvider;
-(void)setCurrentDateProvider:(id)arg1 ;
-(id)initWithState:(unsigned long long)arg1 duration:(double)arg2 ;
-(id)nextTriggerAfterDate:(id)arg1 ;
-(BOOL)hasDefaultTitle;
-(id)nextTrigger;
-(id)keyForIdentifier;
-(id)timerByUpdatingWithState:(unsigned long long)arg1 ;
-(BOOL)isCurrentTimer;
-(BOOL)isEqualToTimer:(id)arg1 ;
-(BOOL)_isEqualToTimer:(id)arg1 checkLastModified:(BOOL)arg2 ;
-(void)_copyStateOntoTimer:(id)arg1 ;
-(BOOL)isEqualIgnoringLastModifiedDate:(id)arg1 ;
-(NSUUID *)timerID;
-(id)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)state;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)_setDuration:(double)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSDate *)fireDate;
-(void)setSound:(MTSound *)arg1 ;
-(MTSound *)sound;
@end

