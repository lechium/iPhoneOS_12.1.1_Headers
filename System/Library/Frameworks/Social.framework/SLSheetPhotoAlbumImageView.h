/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class CALayer, NSMutableArray, UILabel;

@interface SLSheetPhotoAlbumImageView : SLSheetImagePreviewView {

	CALayer* _frameLayer;
	CALayer* _glossLayer;
	NSMutableArray* _frameViews;
	long long _imageQuantity;
	long long _numPreviewImagesAdded;
	UILabel* _imageCountLabel;
	BOOL _allAttachmentsAreImages;

}
+(unsigned long long)displayedFrameMaximum;
-(void)setPreviewImage:(id)arg1 forAttachment:(id)arg2 ;
-(id)_itemCountString;
-(void)addPreviewImage:(id)arg1 ;
-(BOOL)_shouldDisplayImageCountLabel;
-(id)initWithPrincipalAttachments:(id)arg1 ;
-(void)setItemCountString:(id)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(UIEdgeInsets)alignmentRectInsets;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
@end
