/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPopoverController.h>

@protocol _UIViewServiceDummyPopoverControllerDelegate;
@interface _UIViewServiceDummyPopoverController : UIPopoverController {

	id<_UIViewServiceDummyPopoverControllerDelegate> _dummyPopoverControllerDelegate;

}

@property (assign,nonatomic,__weak) id<_UIViewServiceDummyPopoverControllerDelegate> dummyPopoverControllerDelegate;              //@synthesize dummyPopoverControllerDelegate=_dummyPopoverControllerDelegate - In the implementation block
+(Class)_popoverViewClass;
-(void)setPopoverContentSize:(CGSize)arg1 animated:(BOOL)arg2 ;
-(BOOL)_attemptsToAvoidKeyboard;
-(id<_UIViewServiceDummyPopoverControllerDelegate>)dummyPopoverControllerDelegate;
-(void)_popoverView:(id)arg1 didSetUseToolbarShine:(BOOL)arg2 ;
-(void)_super_setPopoverContentSize:(CGSize)arg1 ;
-(void)setDummyPopoverControllerDelegate:(id<_UIViewServiceDummyPopoverControllerDelegate>)arg1 ;
@end

