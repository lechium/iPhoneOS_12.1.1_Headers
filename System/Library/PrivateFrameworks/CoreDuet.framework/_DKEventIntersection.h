/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray;

@interface _DKEventIntersection : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _events;

}

@property (readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (readonly) NSArray * events;                //@synthesize events=_events - In the implementation block
+(id)eventIntersectionWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSArray *)events;
@end

