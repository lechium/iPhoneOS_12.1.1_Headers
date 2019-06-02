/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class DNDEventBehaviorResolutionService, NSObject, MFFuture;

@interface _MFSoundBehaviorOverridesMonitor : NSObject {

	DNDEventBehaviorResolutionService* _dndBehaviorResolutionService;
	NSObject*<OS_dispatch_queue> _dndBehaviorResolutionServiceQueue;
	MFFuture* _behaviorOverrideTypes;

}

@property (readonly) MFFuture * behaviorOverrideTypes;              //@synthesize behaviorOverrideTypes=_behaviorOverrideTypes - In the implementation block
+(id)sharedInstance;
-(id)_resolveDNDBehavior;
-(MFFuture *)behaviorOverrideTypes;
-(id)init;
@end

