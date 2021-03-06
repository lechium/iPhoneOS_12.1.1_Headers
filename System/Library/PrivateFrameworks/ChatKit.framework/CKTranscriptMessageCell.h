/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCell.h>

@class UIButton;

@interface CKTranscriptMessageCell : CKTranscriptCell {

	BOOL _wantsContactImageLayout;
	UIButton* _failureButton;

}

@property (nonatomic,retain) UIButton * failureButton;                                     //@synthesize failureButton=_failureButton - In the implementation block
@property (assign,nonatomic) BOOL wantsContactImageLayout;                                 //@synthesize wantsContactImageLayout=_wantsContactImageLayout - In the implementation block
@property (assign,nonatomic) BOOL failed; 
@property (nonatomic,readonly) BOOL failureButtonAdjustsContentAlignmentRect; 
+(double)failureButtonWidthPlusSpacing;
-(BOOL)failed;
-(void)layoutSubviewsForContents;
-(id)contactImageView;
-(UIButton *)failureButton;
-(void)setWantsContactImageLayout:(BOOL)arg1 ;
-(void)setFailed:(BOOL)arg1 ;
-(BOOL)wantsContactImageLayout;
-(BOOL)failureButtonAdjustsContentAlignmentRect;
-(void)setFailureButton:(UIButton *)arg1 ;
-(id)description;
-(UIEdgeInsets)safeAreaInsets;
@end

