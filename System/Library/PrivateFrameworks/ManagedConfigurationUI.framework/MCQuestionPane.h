/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <Preferences/PSEditingPane.h>

@class MCQuestionView, UITransitionView;

@interface MCQuestionPane : PSEditingPane {

	MCQuestionView* _questionView;
	UITransitionView* _transitionView;
	double _navigationBarHeight;
	double _statusBarHeight;

}

@property (assign,nonatomic) double navigationBarHeight;              //@synthesize navigationBarHeight=_navigationBarHeight - In the implementation block
@property (assign,nonatomic) double statusBarHeight;                  //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
-(BOOL)requiresKeyboard;
-(void)viewDidBecomeVisible;
-(void)disableInputField;
-(void)enableInputField;
-(void)_slide:(int)arg1 toQuestionWithProperties:(id)arg2 ;
-(void)_updateInPlaceWithProperties:(id)arg1 ;
-(id)responseValue;
-(void)setProperties:(id)arg1 withStyle:(int)arg2 ;
-(void)setNavigationBarHeight:(double)arg1 ;
-(void)setStatusBarHeight:(double)arg1 ;
-(double)navigationBarHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)statusBarHeight;
-(void)setProperties:(id)arg1 ;
-(void)transitionViewDidComplete:(id)arg1 ;
@end

