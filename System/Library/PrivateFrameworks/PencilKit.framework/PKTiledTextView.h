/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKTiledView.h>

@class PKAttachmentView, UIButton;

@interface PKTiledTextView : PKTiledView {

	PKAttachmentView* _standInEndAttachmentView;
	UIButton* _tapToRadarButton;

}

@property (nonatomic,retain) PKAttachmentView * standInEndAttachmentView;              //@synthesize standInEndAttachmentView=_standInEndAttachmentView - In the implementation block
@property (nonatomic,retain) UIButton * tapToRadarButton;                              //@synthesize tapToRadarButton=_tapToRadarButton - In the implementation block
-(void)_layoutSubviews;
-(UIButton *)tapToRadarButton;
-(void)setTapToRadarButton:(UIButton *)arg1 ;
-(void)setLinedPaper:(id)arg1 ;
-(id)standInAttachmentView;
-(void)canvasViewWillBeginNewStroke:(id)arg1 withTouch:(id)arg2 ;
-(void)canvasViewDidEndStroke:(id)arg1 ;
-(BOOL)canAddStroke;
-(BOOL)insertAttachmentIfInBlankSpace:(CGPoint)arg1 ;
-(id)initInScrollView:(id)arg1 ;
-(void)textDidBeginEditing:(id)arg1 ;
-(void)textDidEndEditing:(id)arg1 ;
-(void)_setupTapToRadarButton;
-(void)updateEndAttachment;
-(PKAttachmentView *)standInEndAttachmentView;
-(BOOL)hasEndAttachment;
-(CGRect)frameOfEndAttachment;
-(void)_tapToRadarButtonTapped:(id)arg1 ;
-(id)saveTempData:(id)arg1 name:(id)arg2 ;
-(void)appendPath:(id)arg1 attachmentString:(id)arg2 ;
-(void)setStandInEndAttachmentView:(PKAttachmentView *)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)textDidChange:(id)arg1 ;
@end

