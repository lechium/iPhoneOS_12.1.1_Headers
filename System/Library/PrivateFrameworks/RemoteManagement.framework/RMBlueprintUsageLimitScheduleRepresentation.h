/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RMBlueprintUsageLimitScheduleSimpleItem, NSArray;

@interface RMBlueprintUsageLimitScheduleRepresentation : NSObject {

	RMBlueprintUsageLimitScheduleSimpleItem* _simpleSchedule;
	NSArray* _customScheduleItems;

}

@property (nonatomic,retain) RMBlueprintUsageLimitScheduleSimpleItem * simpleSchedule;              //@synthesize simpleSchedule=_simpleSchedule - In the implementation block
@property (nonatomic,copy) NSArray * customScheduleItems;                                           //@synthesize customScheduleItems=_customScheduleItems - In the implementation block
-(void)setSimpleSchedule:(RMBlueprintUsageLimitScheduleSimpleItem *)arg1 ;
-(void)setCustomScheduleItems:(NSArray *)arg1 ;
-(RMBlueprintUsageLimitScheduleSimpleItem *)simpleSchedule;
-(NSArray *)customScheduleItems;
@end

