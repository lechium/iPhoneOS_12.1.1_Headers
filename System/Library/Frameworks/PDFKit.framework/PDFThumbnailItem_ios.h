/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <PDFKit/PDFKitPlatformThumbnailItem.h>

@class UIImageView, UILabel, PDFPage, CALayer;

@interface PDFThumbnailItem_ios : UICollectionReusableView <PDFKitPlatformThumbnailItem> {

	UIImageView* _imageView;
	UILabel* _textField;
	BOOL _horizontalModeStyle;
	PDFPage* _page;
	CALayer* _borderEffect;

}

@property (assign,nonatomic) BOOL horizontalModeStyle; 
@property (assign,nonatomic,__weak) PDFPage * page;                      //@synthesize page=_page - In the implementation block
@property (assign,nonatomic,__weak) CALayer * borderEffect;              //@synthesize borderEffect=_borderEffect - In the implementation block
@property (retain) UIImageView * imageView;                              //@synthesize imageView=_imageView - In the implementation block
@property (retain) UILabel * textField;                                  //@synthesize textField=_textField - In the implementation block
-(BOOL)horizontalModeStyle;
-(void)setHorizontalModeStyle:(BOOL)arg1 ;
-(CALayer *)borderEffect;
-(void)setBorderEffect:(CALayer *)arg1 ;
-(void)setTextField:(UILabel *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(UILabel *)textField;
-(void)_commonInit;
-(PDFPage *)page;
-(void)setPage:(PDFPage *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
@end

