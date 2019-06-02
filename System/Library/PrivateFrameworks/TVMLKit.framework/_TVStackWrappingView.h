/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIImage, NSArray, UICollectionView, UIView;

@interface _TVStackWrappingView : UIView {

	UIImageView* _bgImageView;
	UIImage* _backgroundImage;
	NSArray* _headerSupplementaryViews;
	UICollectionView* _stackView;
	UIView* _backgroundView;
	NSArray* _supplementaryCellLayoutAttributes;

}

@property (nonatomic,retain) UIImage * backgroundImage;                                       //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,copy) NSArray * headerSupplementaryViews;                                //@synthesize headerSupplementaryViews=_headerSupplementaryViews - In the implementation block
@property (nonatomic,retain) UICollectionView * stackView;                                    //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                         //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supplementaryCellLayoutAttributes;              //@synthesize supplementaryCellLayoutAttributes=_supplementaryCellLayoutAttributes - In the implementation block
-(NSArray *)supplementaryCellLayoutAttributes;
-(void)setHeaderSupplementaryViews:(NSArray *)arg1 ;
-(void)configureSupplementaryCellLayoutAttributesWithAutomaticInsets:(UIEdgeInsets)arg1 ;
-(NSArray *)headerSupplementaryViews;
-(UIView *)backgroundView;
-(id)preferredFocusEnvironments;
-(UICollectionView *)stackView;
-(void)safeAreaInsetsDidChange;
-(UIImage *)backgroundImage;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setStackView:(UICollectionView *)arg1 ;
@end

