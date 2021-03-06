/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UIView;

@interface PKTextAttachmentDrawingResizeView : UIView {

	BOOL _top;
	BOOL _highlighted;
	BOOL _enabled;
	UIImageView* _knobView;
	UIView* _separatorView;
	UIView* _separatorHighlightedView;

}

@property (assign,nonatomic) BOOL top;                                       //@synthesize top=_top - In the implementation block
@property (nonatomic,retain) UIImageView * knobView;                         //@synthesize knobView=_knobView - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                         //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UIView * separatorHighlightedView;              //@synthesize separatorHighlightedView=_separatorHighlightedView - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                               //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL shown; 
-(id)init:(BOOL)arg1 ;
-(double)resizeContentInset;
-(void)show:(BOOL)arg1 enabled:(BOOL)arg2 animated:(BOOL)arg3 ;
-(UIView *)separatorHighlightedView;
-(void)setSeparatorHighlightedView:(UIView *)arg1 ;
-(void)setKnobView:(UIImageView *)arg1 ;
-(UIImageView *)knobView;
-(BOOL)shown;
-(BOOL)top;
-(void)setTop:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(UIView *)separatorView;
-(void)didMoveToWindow;
-(void)setSeparatorView:(UIView *)arg1 ;
-(BOOL)enabled;
@end

