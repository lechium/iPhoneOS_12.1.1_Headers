/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/ATXNotificationsRecord.h>

@class NSString;

@interface ATXNotificationsActionPredictionRecord : ATXNotificationsRecord {

	NSString* _actionPredBundleId;

}
-(BOOL)addEvent:(id)arg1 ;
-(long long)determineEndingInteraction;
-(id)initWithNotificationId:(id)arg1 timestamp:(id)arg2 ;
-(BOOL)isMatchActionPredBundleId:(id)arg1 ;
-(id)init;
@end

