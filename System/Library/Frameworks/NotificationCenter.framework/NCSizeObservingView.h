/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NCSizeObservingViewDelegate;
@interface NCSizeObservingView : UIView {

	BOOL _delegateInterestedInSizeChanges;
	id<NCSizeObservingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NCSizeObservingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<NCSizeObservingViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id<NCSizeObservingViewDelegate>)delegate;
@end
