/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIBezierPath, UIImage;

@interface CNFRegShadowView : UIView {

	CGRect _cachedBounds;
	UIBezierPath* _cachedPath;
	UIImage* _shadowImage;

}

@property (assign,nonatomic) CGRect cachedBounds;                    //@synthesize cachedBounds=_cachedBounds - In the implementation block
@property (nonatomic,retain) UIBezierPath * cachedPath;              //@synthesize cachedPath=_cachedPath - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                  //@synthesize shadowImage=_shadowImage - In the implementation block
-(id)initWithFrame:(CGRect)arg1 shadowImage:(id)arg2 ;
-(void)setCachedPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)cachedPath;
-(CGRect)cachedBounds;
-(void)setCachedBounds:(CGRect)arg1 ;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

