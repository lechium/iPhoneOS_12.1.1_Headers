/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface CCUIStatusUpdateQueue : NSObject {

	NSMutableArray* _queuedIdentifiers;
	NSMutableDictionary* _latestUpdateByIdentifier;

}
-(void)removeAllStatusUpdates;
-(void)enqueueStatusUpdate:(id)arg1 forIdentifier:(id)arg2 ;
-(id)dequeueNextStatusUpdate;
-(id)init;
@end

