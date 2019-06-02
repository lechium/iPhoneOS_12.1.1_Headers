/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIBarButtonItem, NSString;

@interface SFBarButtonItemLongPressGestureRecognizer : UILongPressGestureRecognizer <UIGestureRecognizerDelegate> {

	UIBarButtonItem* _barButtonItem;
	id _target;
	SEL _longPressAction;
	SEL _touchDownAction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)gestureRecognizerTarget:(id)arg1 longPressAction:(SEL)arg2 touchDownAction:(SEL)arg3 attachedToBarButtonItem:(id)arg4 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_updateMinimumPressDurationForContentSizeCategory:(id)arg1 ;
-(void)_invokeLongPressAction;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)longPress:(id)arg1 ;
@end

