/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFMultiStateControlItem;

@interface HUQuickControlMultiStateViewController : HUQuickControlSingleControlViewController

@property (nonatomic,readonly) HFMultiStateControlItem * controlItem; 
+(Class)controlItemClass;
-(id)overrideStatusText;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(id)controlToViewValueTransformer;
-(void)modelValueDidChange;
-(BOOL)_useOverrideStatusText;
@end
