/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol MKActionRowItemViewDelegate;
@class _MKUILabel, NSArray, MKPlaceCardActionItem;

@interface MKActionRowItemView : UIView {

	_MKUILabel* _label;
	_MKUILabel* _glyphLabel;
	unsigned long long _style;
	NSArray* _constraints;
	BOOL _enabled;
	BOOL _touched;
	BOOL _fullWidthMode;
	BOOL _highlighted;
	id<MKActionRowItemViewDelegate> _delegate;
	MKPlaceCardActionItem* _actionRowItem;

}

@property (assign,nonatomic,__weak) id<MKActionRowItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKPlaceCardActionItem * actionRowItem;                        //@synthesize actionRowItem=_actionRowItem - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                 //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL touched;                                                 //@synthesize touched=_touched - In the implementation block
@property (assign,nonatomic) BOOL fullWidthMode;                                           //@synthesize fullWidthMode=_fullWidthMode - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                             //@synthesize highlighted=_highlighted - In the implementation block
+(id)glyphFont;
+(double)widthBrandItem;
+(id)widthDictionary;
+(double)minWidthForString:(id)arg1 forSize:(id)arg2 ;
+(id)labelFont;
-(void)_contentSizeDidChange;
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)createConstraints;
-(id)initWithActionRowItem:(id)arg1 style:(unsigned long long)arg2 ;
-(void)setFullWidthMode:(BOOL)arg1 ;
-(void)updateColor;
-(void)setTouched:(BOOL)arg1 ;
-(void)_touchBegan;
-(void)_touchCancelled;
-(void)_touchEnded;
-(MKPlaceCardActionItem *)actionRowItem;
-(void)setActionRowItem:(MKPlaceCardActionItem *)arg1 ;
-(BOOL)touched;
-(BOOL)fullWidthMode;
-(void)dealloc;
-(void)setDelegate:(id<MKActionRowItemViewDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id<MKActionRowItemViewDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)enabled;
@end

