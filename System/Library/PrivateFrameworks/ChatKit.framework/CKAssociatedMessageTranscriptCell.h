/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMessageContentCell.h>

@protocol CKAssociatedMessageTranscriptCellDelegate;
@class UIView;

@interface CKAssociatedMessageTranscriptCell : CKTranscriptMessageContentCell {

	id<CKAssociatedMessageTranscriptCellDelegate> _delegate;
	UIView* _associatedItemView;
	double _cumulativeAssociatedOffset;
	CGSize _size;
	CGSize _parentSize;
	IMAssociatedMessageGeometryDescriptor _geometryDescriptor;

}

@property (assign,nonatomic,__weak) id<CKAssociatedMessageTranscriptCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * associatedItemView;                                                //@synthesize associatedItemView=_associatedItemView - In the implementation block
@property (assign,nonatomic) IMAssociatedMessageGeometryDescriptor geometryDescriptor;                   //@synthesize geometryDescriptor=_geometryDescriptor - In the implementation block
@property (assign,nonatomic) CGSize size;                                                                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGSize parentSize;                                                          //@synthesize parentSize=_parentSize - In the implementation block
@property (assign,nonatomic) double cumulativeAssociatedOffset;                                          //@synthesize cumulativeAssociatedOffset=_cumulativeAssociatedOffset - In the implementation block
-(void)addFilter:(id)arg1 ;
-(void)clearFilters;
-(void)layoutSubviewsForAlignmentContents;
-(void)configureForChatItem:(id)arg1 ;
-(void)setCumulativeAssociatedOffset:(double)arg1 ;
-(void)setParentSize:(CGSize)arg1 ;
-(IMAssociatedMessageGeometryDescriptor)geometryDescriptor;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hidesCheckmark;
-(void)setGeometryDescriptor:(IMAssociatedMessageGeometryDescriptor)arg1 ;
-(void)setAssociatedItemView:(UIView *)arg1 ;
-(UIView *)associatedItemView;
-(CGSize)parentSize;
-(double)cumulativeAssociatedOffset;
-(BOOL)failureButtonAdjustsContentAlignmentRect;
-(CGRect)associatedViewFrame:(CGRect)arg1 inContainerFrame:(CGRect)arg2 ;
-(CGSize)size;
-(void)setDelegate:(id<CKAssociatedMessageTranscriptCellDelegate>)arg1 ;
-(id<CKAssociatedMessageTranscriptCellDelegate>)delegate;
-(void)prepareForReuse;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setSize:(CGSize)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
@end

