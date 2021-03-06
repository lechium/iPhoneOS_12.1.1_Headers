/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSInputClue.h>

@class NSArray, NSSet, NSDate;

@interface CLSInputTimeClue : CLSInputClue {

	NSArray* _dateComponentsArray;
	NSArray* _events;
	NSSet* _localDates;
	NSDate* _localStartDate;
	NSDate* _localEndDate;
	NSSet* _universalDates;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;

}

@property (nonatomic,copy) NSArray * events;              //@synthesize events=_events - In the implementation block
+(id)clueWithDates:(id)arg1 ;
-(void)setEvents:(NSArray *)arg1 ;
-(id)universalDates;
-(NSArray *)events;
-(unsigned long long)numberOfDays;
-(id)localDates;
-(BOOL)isEqualToClue:(id)arg1 ;
-(void)_prepareWithProgressBlock:(/*^block*/id)arg1 ;
-(void)_computeDateProperties;
-(id)universalStartDate;
-(id)universalEndDate;
-(id)localEndDate;
-(id)localStartDate;
-(id)description;
-(double)timeInterval;
@end

