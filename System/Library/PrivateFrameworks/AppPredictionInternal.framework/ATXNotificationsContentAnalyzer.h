/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSDate;

@interface ATXNotificationsContentAnalyzer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _ppnames;
	NSArray* _ppscores;
	NSDate* _lastUpdated;

}
-(void)updateAnalyzers;
-(id)analyzeContent:(id)arg1 ;
-(BOOL)isExpired;
-(id)init;
@end

