/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, MSMessagesAppViewController;

@interface AVTUIControllerPresentation : NSObject {

	UIViewController* _controller;
	MSMessagesAppViewController* _modalMessagesController;

}

@property (nonatomic,readonly) UIViewController * controller;                                           //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) MSMessagesAppViewController * modalMessagesController;              //@synthesize modalMessagesController=_modalMessagesController - In the implementation block
+(void)setPendingGlobalPresentation:(id)arg1 ;
+(id)pendingGlobalPresentation;
-(id)initWithController:(id)arg1 ;
-(MSMessagesAppViewController *)modalMessagesController;
-(void)setModalMessagesController:(MSMessagesAppViewController *)arg1 ;
-(UIViewController *)controller;
@end

