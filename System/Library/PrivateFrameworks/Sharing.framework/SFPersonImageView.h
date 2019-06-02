/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImageView.h>

@interface SFPersonImageView : UIImageView {

	BOOL _overlay;
	BOOL _darkStyle;
	BOOL _isDevice;

}

@property (assign,nonatomic) BOOL overlay;                //@synthesize overlay=_overlay - In the implementation block
@property (assign,nonatomic) BOOL darkStyle;              //@synthesize darkStyle=_darkStyle - In the implementation block
@property (assign,nonatomic) BOOL isDevice;               //@synthesize isDevice=_isDevice - In the implementation block
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)overlay;
-(void)setOverlay:(BOOL)arg1 ;
-(BOOL)darkStyle;
-(void)setDarkStyle:(BOOL)arg1 ;
-(BOOL)isDevice;
-(void)setIsDevice:(BOOL)arg1 ;
-(id)initWithPersonImageView:(id)arg1 ;
@end
