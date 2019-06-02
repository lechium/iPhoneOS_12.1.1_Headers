/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>

@class NSArray, UILabel, UIView, UIImageView, NSLayoutConstraint;

@interface MiroAssetSuggestionsCollectionViewCell : UICollectionViewCell {

	BOOL _isKeyAssetPicker;
	NSArray* _debugLabels;
	UILabel* _videoDurationLabel;
	UIView* _videoIndicator;
	UIView* _slomoIndicator;
	UILabel* _slomoDurationLabel;
	UIView* _timelapseIndicator;
	UILabel* _timelapseDurationLabel;
	UIImageView* _thumbnailView;
	UIView* _debugView;
	UIView* _debugGradient;
	UILabel* _debugLabel;
	NSLayoutConstraint* _videoIndicatorTopConstraint;
	NSLayoutConstraint* _videoIndicatorBottomConstraint;
	NSLayoutConstraint* _videoIndicatorLeadingConstraint;
	NSLayoutConstraint* _videoIndicatorTrailingConstraint;
	UIView* _selectionIndicator;

}

@property (nonatomic,retain) UIImageView * thumbnailView;                                        //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic,__weak) UIView * debugView;                                          //@synthesize debugView=_debugView - In the implementation block
@property (assign,nonatomic,__weak) UIView * debugGradient;                                      //@synthesize debugGradient=_debugGradient - In the implementation block
@property (assign,nonatomic,__weak) UILabel * debugLabel;                                        //@synthesize debugLabel=_debugLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * videoIndicatorTopConstraint;                   //@synthesize videoIndicatorTopConstraint=_videoIndicatorTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * videoIndicatorBottomConstraint;                //@synthesize videoIndicatorBottomConstraint=_videoIndicatorBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * videoIndicatorLeadingConstraint;               //@synthesize videoIndicatorLeadingConstraint=_videoIndicatorLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * videoIndicatorTrailingConstraint;              //@synthesize videoIndicatorTrailingConstraint=_videoIndicatorTrailingConstraint - In the implementation block
@property (nonatomic,retain) UIView * selectionIndicator;                                        //@synthesize selectionIndicator=_selectionIndicator - In the implementation block
@property (nonatomic,retain) NSArray * debugLabels;                                              //@synthesize debugLabels=_debugLabels - In the implementation block
@property (nonatomic,retain) UILabel * videoDurationLabel;                                       //@synthesize videoDurationLabel=_videoDurationLabel - In the implementation block
@property (nonatomic,retain) UIView * videoIndicator;                                            //@synthesize videoIndicator=_videoIndicator - In the implementation block
@property (nonatomic,retain) UIView * slomoIndicator;                                            //@synthesize slomoIndicator=_slomoIndicator - In the implementation block
@property (nonatomic,retain) UILabel * slomoDurationLabel;                                       //@synthesize slomoDurationLabel=_slomoDurationLabel - In the implementation block
@property (nonatomic,retain) UIView * timelapseIndicator;                                        //@synthesize timelapseIndicator=_timelapseIndicator - In the implementation block
@property (nonatomic,retain) UILabel * timelapseDurationLabel;                                   //@synthesize timelapseDurationLabel=_timelapseDurationLabel - In the implementation block
@property (assign) BOOL isKeyAssetPicker;                                                        //@synthesize isKeyAssetPicker=_isKeyAssetPicker - In the implementation block
-(UIImageView *)thumbnailView;
-(void)setThumbnailView:(UIImageView *)arg1 ;
-(void)setIsKeyAssetPicker:(BOOL)arg1 ;
-(void)configureWithAsset:(id)arg1 selected:(BOOL)arg2 ;
-(void)setDebugLabels:(NSArray *)arg1 ;
-(UIView *)debugGradient;
-(UIView *)videoIndicator;
-(UIView *)slomoIndicator;
-(UIView *)timelapseIndicator;
-(UIView *)selectionIndicator;
-(NSLayoutConstraint *)videoIndicatorTopConstraint;
-(NSLayoutConstraint *)videoIndicatorBottomConstraint;
-(NSLayoutConstraint *)videoIndicatorLeadingConstraint;
-(NSLayoutConstraint *)videoIndicatorTrailingConstraint;
-(BOOL)isKeyAssetPicker;
-(UILabel *)videoDurationLabel;
-(UILabel *)timelapseDurationLabel;
-(UILabel *)slomoDurationLabel;
-(NSArray *)debugLabels;
-(UILabel *)debugLabel;
-(void)setVideoDurationLabel:(UILabel *)arg1 ;
-(void)setVideoIndicator:(UIView *)arg1 ;
-(void)setSlomoIndicator:(UIView *)arg1 ;
-(void)setSlomoDurationLabel:(UILabel *)arg1 ;
-(void)setTimelapseIndicator:(UIView *)arg1 ;
-(void)setTimelapseDurationLabel:(UILabel *)arg1 ;
-(void)setDebugGradient:(UIView *)arg1 ;
-(void)setDebugLabel:(UILabel *)arg1 ;
-(void)setVideoIndicatorTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setVideoIndicatorBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setVideoIndicatorLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setVideoIndicatorTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSelectionIndicator:(UIView *)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)awakeFromNib;
-(void)applyLayoutAttributes:(id)arg1 ;
-(UIView *)debugView;
-(void)setDebugView:(UIView *)arg1 ;
@end

