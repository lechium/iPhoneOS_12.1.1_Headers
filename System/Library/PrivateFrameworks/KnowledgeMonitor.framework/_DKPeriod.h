/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DKPeriodType.h>

@class NSDate;

@interface _DKPeriod : NSObject <DKPeriodType> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (readonly) double duration; 
+(id)periodWithStart:(id)arg1 end:(id)arg2 ;
+(id)periodWithStart:(id)arg1 duration:(double)arg2 ;
+(id)periodWithEnd:(id)arg1 duration:(double)arg2 ;
-(BOOL)contains:(id)arg1 ;
-(id)initWithStart:(id)arg1 andEnd:(id)arg2 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)description;
-(double)duration;
@end
