/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFClockItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSURL, NSDate, NSString;

@interface AFClockTimer : NSObject <AFClockItem, NSCopying, NSSecureCoding> {

	BOOL _isFiring;
	NSUUID* _timerID;
	NSURL* _timerURL;
	NSString* _title;
	long long _state;
	double _duration;
	double _fireTimeInterval;
	NSDate* _fireDate;
	NSDate* _firedDate;
	NSDate* _dismissedDate;
	NSDate* _lastModifiedDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * itemID; 
@property (nonatomic,readonly) NSURL * itemURL; 
@property (nonatomic,readonly) BOOL isFiring; 
@property (nonatomic,copy,readonly) NSDate * firedDate; 
@property (nonatomic,copy,readonly) NSDate * dismissedDate; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,copy,readonly) NSUUID * timerID;                       //@synthesize timerID=_timerID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * timerURL;                       //@synthesize timerURL=_timerURL - In the implementation block
@property (nonatomic,readonly) BOOL isFiring;                               //@synthesize isFiring=_isFiring - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double fireTimeInterval;                     //@synthesize fireTimeInterval=_fireTimeInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDate * fireDate;                      //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * firedDate;                     //@synthesize firedDate=_firedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dismissedDate;                 //@synthesize dismissedDate=_dismissedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate;              //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
+(id)newWithBuilder:(/*^block*/id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(BOOL)isFiring;
-(double)fireTimeInterval;
-(NSURL *)timerURL;
-(NSDate *)firedDate;
-(NSDate *)dismissedDate;
-(id)initWithTimerID:(id)arg1 timerURL:(id)arg2 isFiring:(BOOL)arg3 title:(id)arg4 state:(long long)arg5 duration:(double)arg6 fireTimeInterval:(double)arg7 fireDate:(id)arg8 firedDate:(id)arg9 dismissedDate:(id)arg10 lastModifiedDate:(id)arg11 ;
-(NSURL *)itemURL;
-(NSDate *)lastModifiedDate;
-(NSUUID *)itemID;
-(NSUUID *)timerID;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)state;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)duration;
-(NSDate *)fireDate;
@end

