/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKImageBalloonView.h>

@class UIImageView, UILabel, NSString;

@interface CKTitledImageBalloonView : CKImageBalloonView {

	UIImageView* _chevron;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIImageView * chevron;                                             //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic,__weak) id<CKTitledImageBalloonViewDelegate> delegate; 
-(void)tapGestureRecognized:(id)arg1 ;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)configureForLocatingChatItem:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UIEdgeInsets)alignmentRectInsets;
-(void)prepareForReuse;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setOrientation:(char)arg1 ;
-(void)setChevron:(UIImageView *)arg1 ;
-(UIImageView *)chevron;
@end
