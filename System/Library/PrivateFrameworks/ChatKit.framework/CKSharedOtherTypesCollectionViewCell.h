/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKSharedContentsCollectionViewCell.h>

@class UIImageView;

@interface CKSharedOtherTypesCollectionViewCell : CKSharedContentsCollectionViewCell {

	UIImageView* _thumbnailImageView;

}

@property (nonatomic,retain) UIImageView * thumbnailImageView;              //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
+(id)reuseIdentifier;
-(void)configureWithAttachmentItem:(id)arg1 ;
-(UIImageView *)thumbnailImageView;
-(void)configureWithThumbnail:(id)arg1 fileURL:(id)arg2 ;
-(void)setThumbnailImageView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
@end
