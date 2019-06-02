/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKitUI/WatchListKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, _TVImageView, TVImageElement, WLKUISportsOverlayView;

@interface WLKUISportsCellView : UIView {

	BOOL _shouldLayoutImageFirst;
	NSArray* _textRenderers;
	_TVImageView* _imageView;
	TVImageElement* _imageElement;
	_TVImageView* _appImageView;
	TVImageElement* _appImageElement;
	WLKUISportsOverlayView* _overlayView;
	CGSize _cellSize;

}

@property (assign,nonatomic) CGSize cellSize;                                   //@synthesize cellSize=_cellSize - In the implementation block
@property (assign,nonatomic) BOOL shouldLayoutImageFirst;                       //@synthesize shouldLayoutImageFirst=_shouldLayoutImageFirst - In the implementation block
@property (nonatomic,copy) NSArray * textRenderers;                             //@synthesize textRenderers=_textRenderers - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) TVImageElement * imageElement;                     //@synthesize imageElement=_imageElement - In the implementation block
@property (nonatomic,retain) _TVImageView * appImageView;                       //@synthesize appImageView=_appImageView - In the implementation block
@property (nonatomic,retain) TVImageElement * appImageElement;                  //@synthesize appImageElement=_appImageElement - In the implementation block
@property (nonatomic,retain) WLKUISportsOverlayView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
-(double)_imageOffset;
-(double)_textOffset;
-(void)setCellSize:(CGSize)arg1 ;
-(TVImageElement *)imageElement;
-(void)setImageElement:(TVImageElement *)arg1 ;
-(void)layoutWithElement:(id)arg1 ;
-(void)setTextRenderers:(NSArray *)arg1 ;
-(double)_textHeight;
-(NSArray *)textRenderers;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_TVImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(CGSize)cellSize;
-(void)setOverlayView:(WLKUISportsOverlayView *)arg1 ;
-(WLKUISportsOverlayView *)overlayView;
-(_TVImageView *)appImageView;
-(void)setAppImageView:(_TVImageView *)arg1 ;
-(void)setAppImageElement:(TVImageElement *)arg1 ;
-(TVImageElement *)appImageElement;
-(BOOL)shouldLayoutImageFirst;
-(void)prepareForCellReuse;
-(void)setShouldLayoutImageFirst:(BOOL)arg1 ;
@end

