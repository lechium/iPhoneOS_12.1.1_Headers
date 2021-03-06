/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RETextContentProvider.h>

@class NSDate, NSTimeZone;

@interface RETimeContentProvider : RETextContentProvider {

	NSDate* _date;
	NSTimeZone* _timeZone;

}

@property (nonatomic,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
+(id)timeContentProviderWithDate:(id)arg1 timeZone:(id)arg2 ;
-(id)initWithDate:(id)arg1 timeZone:(id)arg2 ;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
@end

