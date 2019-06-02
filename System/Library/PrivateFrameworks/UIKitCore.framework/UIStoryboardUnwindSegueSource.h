/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIViewController;

@interface UIStoryboardUnwindSegueSource : NSObject {

	NSMutableArray* _searchChain;
	UIViewController* _sourceViewController;
	SEL _unwindAction;
	id _sender;

}

@property (readonly) UIViewController * sourceViewController;              //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (readonly) SEL unwindAction;                                     //@synthesize unwindAction=_unwindAction - In the implementation block
@property (readonly) id sender;                                            //@synthesize sender=_sender - In the implementation block
-(id)init;
-(SEL)unwindAction;
-(UIViewController *)sourceViewController;
-(id)sender;
-(id)_childContainingUnwindSourceForViewController:(id)arg1 ;
-(id)_initWithSourceViewController:(id)arg1 action:(SEL)arg2 sender:(id)arg3 ;
-(id)_findDestination;
@end

