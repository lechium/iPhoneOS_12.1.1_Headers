/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKTimeTextProvider.h>

@class NSDateComponents, NSString, NSDate;

@interface CLKCurrentTimeTextProvider : CLKTimeTextProvider {

	unsigned long long _calendarUnits;
	NSDateComponents* _sessionComponents;
	NSString* _sessionCacheKey;
	BOOL _sessionInProgress;
	NSDate* _overrideDate;

}

@property (nonatomic,copy) NSDate * overrideDate;              //@synthesize overrideDate=_overrideDate - In the implementation block
+(id)textProviderWithTimeZone:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(void)_startSessionWithDate:(id)arg1 ;
-(id)_sessionCacheKey;
-(long long)_updateFrequency;
-(void)setOverrideDate:(NSDate *)arg1 ;
-(NSDate *)overrideDate;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(id)JSONObjectRepresentation;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_validate;
-(void)_endSession;
@end
