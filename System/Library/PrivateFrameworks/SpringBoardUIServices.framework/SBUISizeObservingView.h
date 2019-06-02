/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardFoundation/SBFView.h>

@protocol SBUISizeObservingViewDelegate;
@interface SBUISizeObservingView : SBFView {

	BOOL _delegateInterestedInSizeChanges;
	id<SBUISizeObservingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBUISizeObservingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SBUISizeObservingViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id<SBUISizeObservingViewDelegate>)delegate;
@end

