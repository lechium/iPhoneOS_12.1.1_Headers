/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFClockItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSURL, NSString, NSDate;

@interface AFClockAlarm : NSObject <AFClockItem, NSCopying, NSSecureCoding> {

	BOOL _isFiring;
	BOOL _isEnabled;
	BOOL _isSnoozed;
	NSUUID* _alarmID;
	NSURL* _alarmURL;
	NSString* _title;
	unsigned long long _hour;
	unsigned long long _minute;
	unsigned long long _repeatOptions;
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
@property (nonatomic,copy,readonly) NSUUID * alarmID;                         //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * alarmURL;                         //@synthesize alarmURL=_alarmURL - In the implementation block
@property (nonatomic,readonly) BOOL isFiring;                                 //@synthesize isFiring=_isFiring - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long hour;                       //@synthesize hour=_hour - In the implementation block
@property (nonatomic,readonly) unsigned long long minute;                     //@synthesize minute=_minute - In the implementation block
@property (nonatomic,readonly) unsigned long long repeatOptions;              //@synthesize repeatOptions=_repeatOptions - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled;                                //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isSnoozed;                                //@synthesize isSnoozed=_isSnoozed - In the implementation block
@property (nonatomic,copy,readonly) NSDate * firedDate;                       //@synthesize firedDate=_firedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dismissedDate;                   //@synthesize dismissedDate=_dismissedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate;                //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
+(id)newWithBuilder:(/*^block*/id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(BOOL)isFiring;
-(NSDate *)firedDate;
-(NSDate *)dismissedDate;
-(NSURL *)alarmURL;
-(BOOL)isSnoozed;
-(NSURL *)itemURL;
-(unsigned long long)repeatOptions;
-(id)initWithAlarmID:(id)arg1 alarmURL:(id)arg2 isFiring:(BOOL)arg3 title:(id)arg4 hour:(unsigned long long)arg5 minute:(unsigned long long)arg6 repeatOptions:(unsigned long long)arg7 isEnabled:(BOOL)arg8 isSnoozed:(BOOL)arg9 firedDate:(id)arg10 dismissedDate:(id)arg11 lastModifiedDate:(id)arg12 ;
-(NSDate *)lastModifiedDate;
-(NSUUID *)itemID;
-(NSUUID *)alarmID;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)isEnabled;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hour;
-(unsigned long long)minute;
@end

