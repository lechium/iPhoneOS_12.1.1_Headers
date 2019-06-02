/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class UIView, UIImageView;

@interface SLSheetBevelledImageView : SLSheetImagePreviewView {

	UIView* _placeholderPreviewView;
	UIImageView* _placeholderGlyphView;
	BOOL _needsURLPlaceholderImage;

}

@property (assign,nonatomic) BOOL needsURLPlaceholderImage;              //@synthesize needsURLPlaceholderImage=_needsURLPlaceholderImage - In the implementation block
-(BOOL)needsURLPlaceholderImage;
-(BOOL)generatePreviewImageFromAttachments;
-(void)ensurePlaceholderPreviewImage;
-(void)setNeedsURLPlaceholderImage:(BOOL)arg1 ;
-(id)init;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
@end

