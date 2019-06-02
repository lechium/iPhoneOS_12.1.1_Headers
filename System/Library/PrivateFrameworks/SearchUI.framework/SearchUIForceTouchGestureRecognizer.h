/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIForceTouchGestureRecognizer.h>

@protocol SearchUIFeedbackDelegate;
@class UIView, SBFApplication, SFSearchResult;

@interface SearchUIForceTouchGestureRecognizer : SBUIForceTouchGestureRecognizer {

	BOOL _canHaveSmallSpotlightIcons;
	UIView* _thumbnailView;
	SBFApplication* _application;
	SFSearchResult* _result;
	id<SearchUIFeedbackDelegate> _selectionAndFeedbackDelegate;

}

@property (__weak) UIView * thumbnailView;                                                 //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (retain) SBFApplication * application;                                           //@synthesize application=_application - In the implementation block
@property (retain) SFSearchResult * result;                                                //@synthesize result=_result - In the implementation block
@property (assign) BOOL canHaveSmallSpotlightIcons;                                        //@synthesize canHaveSmallSpotlightIcons=_canHaveSmallSpotlightIcons - In the implementation block
@property (__weak) id<SearchUIFeedbackDelegate> selectionAndFeedbackDelegate;              //@synthesize selectionAndFeedbackDelegate=_selectionAndFeedbackDelegate - In the implementation block
-(void)updateWithResult:(id)arg1 ;
-(UIView *)thumbnailView;
-(void)setThumbnailView:(UIView *)arg1 ;
-(void)setCanHaveSmallSpotlightIcons:(BOOL)arg1 ;
-(void)setSelectionAndFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(void)iconButtonPressed;
-(void)updateApplicationIfNecessary;
-(BOOL)canHaveSmallSpotlightIcons;
-(id<SearchUIFeedbackDelegate>)selectionAndFeedbackDelegate;
-(id)engagementFeedbackForTriggerEvent:(unsigned long long)arg1 ;
-(id)initWithView:(id)arg1 canHaveSmallSpotlightIcons:(BOOL)arg2 selectionAndFeedbackDelegate:(id)arg3 ;
-(id)thumbnailViewCopy;
-(id)webClipID;
-(id)widgetBundleID;
-(void)didPeek;
-(void)didPop;
-(void)setResult:(SFSearchResult *)arg1 ;
-(double)cornerRadius;
-(SFSearchResult *)result;
-(id)bundleID;
-(id)shortcutItems;
-(id)bundleURL;
-(SBFApplication *)application;
-(void)setApplication:(SBFApplication *)arg1 ;
@end

