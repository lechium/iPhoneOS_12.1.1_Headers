/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface _DKSyncChanges : NSObject {

	NSArray* _additionChangeSets;
	NSArray* _deletionChangeSets;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSArray * additionChangeSets;              //@synthesize additionChangeSets=_additionChangeSets - In the implementation block
@property (nonatomic,readonly) NSArray * deletionChangeSets;              //@synthesize deletionChangeSets=_deletionChangeSets - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
-(NSArray *)deletionChangeSets;
-(NSArray *)additionChangeSets;
-(id)initWithAdditionChangeSets:(id)arg1 deletionChangeSets:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end
