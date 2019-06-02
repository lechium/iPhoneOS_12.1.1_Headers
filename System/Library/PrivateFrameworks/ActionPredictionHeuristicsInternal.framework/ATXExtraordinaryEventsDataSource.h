/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXHeuristicDevice, PPEventStore;

@interface ATXExtraordinaryEventsDataSource : NSObject {

	ATXHeuristicDevice* _device;
	PPEventStore* _extraordinaryEventStore;

}
+(id)_endOfDayAfterDate:(id)arg1 numberOfDays:(long long)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(id)_ekEventForHighlight:(id)arg1 eventStore:(id)arg2 ;
-(id)_fetchExtraordinaryEvents;
-(void)getEventsWithProminentFeature:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

