/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIIndexBarView;


@protocol UIIndexBarVisualStyle <NSObject>
@property (assign,nonatomic,__weak) UIIndexBarView * indexBarView; 
@property (nonatomic,readonly) BOOL canBecomeFocused; 
@property (nonatomic,readonly) BOOL overlay; 
@property (nonatomic,readonly) double minLineHeight; 
@property (assign,nonatomic) BOOL expanded; 
@optional
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1;
-(void)drawRect:(CGRect)arg1;
-(void)setExpanded:(BOOL)arg1;
-(BOOL)expanded;
-(void)highlightedIndexUpdated;
-(void)entriesUpdated;
-(void)displayEntriesUpdated;
-(void)sizeUpdated;
-(void)deflectionUpdated;
-(void)deflectionReset:(BOOL)arg1;
-(BOOL)updateSectionForTouch:(id)arg1 withEvent:(id)arg2;
-(void)highlightStyleUpdated;
-(void)indexColorUpdated;

@required
-(CGSize*)sizeThatFits:(CGSize)arg1;
-(BOOL)canBecomeFocused;
-(id)initWithView:(id)arg1;
-(UIIndexBarView *)indexBarView;
-(BOOL)overlay;
-(double)minLineHeight;
-(id)displayEntryFromEntry:(id)arg1;
-(void)setIndexBarView:(id)arg1;

@end
