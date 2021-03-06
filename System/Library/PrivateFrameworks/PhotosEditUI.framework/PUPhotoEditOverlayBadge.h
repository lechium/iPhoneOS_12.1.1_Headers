/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosEditUI/PhotosEditUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel;

@interface PUPhotoEditOverlayBadge : UIView {

	NSString* _text;
	UILabel* _label;
	UIEdgeInsets _insets;

}

@property (nonatomic,readonly) UILabel * label;                  //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets insets;              //@synthesize insets=_insets - In the implementation block
@property (nonatomic,copy) NSString * text;                      //@synthesize text=_text - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(CGSize)intrinsicContentSize;
-(void)_updateLabel;
-(UIEdgeInsets)insets;
-(UILabel *)label;
@end

