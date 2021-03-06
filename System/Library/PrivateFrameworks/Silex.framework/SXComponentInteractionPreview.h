/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXComponentInteraction, UIViewController;

@interface SXComponentInteractionPreview : NSObject {

	SXComponentInteraction* _interaction;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) SXComponentInteraction * interaction;                  //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(id)initWithInteraction:(id)arg1 viewController:(id)arg2 ;
-(UIViewController *)viewController;
-(SXComponentInteraction *)interaction;
@end

