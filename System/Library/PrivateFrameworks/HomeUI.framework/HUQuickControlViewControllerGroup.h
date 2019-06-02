/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HUQuickControlViewController;

@interface HUQuickControlViewControllerGroup : NSObject {

	HUQuickControlViewController* _primaryViewController;
	HUQuickControlViewController* _alternateViewController;

}

@property (nonatomic,readonly) HUQuickControlViewController * primaryViewController;                //@synthesize primaryViewController=_primaryViewController - In the implementation block
@property (nonatomic,readonly) HUQuickControlViewController * alternateViewController;              //@synthesize alternateViewController=_alternateViewController - In the implementation block
-(HUQuickControlViewController *)primaryViewController;
-(HUQuickControlViewController *)alternateViewController;
-(id)initWithPrimaryViewController:(id)arg1 alternateViewController:(id)arg2 ;
@end

