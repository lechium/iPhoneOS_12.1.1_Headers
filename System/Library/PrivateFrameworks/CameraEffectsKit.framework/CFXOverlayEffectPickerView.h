/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 5:59:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/CFXEffectPickerView.h>
#import <libobjc.A.dylib/JTCollectionViewDelegate.h>

@class UIView, JTCollectionView, JTCollectionViewFlowLayout, NSString;

@interface CFXOverlayEffectPickerView : CFXEffectPickerView <JTCollectionViewDelegate> {

	UIView* _contentView;
	JTCollectionView* _collectionView;
	JTCollectionViewFlowLayout* _collectionViewLayout;

}

@property (assign,nonatomic,__weak) UIView * contentView;                                    //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) JTCollectionView * collectionView;                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) JTCollectionViewFlowLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)subviewsDidLoad;
-(id)effectPickerNibName;
-(id)effectPickerCellNibName;
-(id)effectPickerCellReuseIdentifier;
-(void)updateThumbnailColumnSizeForCollectionSize;
-(void)didResizeCollectionViewToSize:(CGSize)arg1 ;
-(UIView *)contentView;
-(JTCollectionView *)collectionView;
-(void)setCollectionViewLayout:(JTCollectionViewFlowLayout *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(JTCollectionViewFlowLayout *)collectionViewLayout;
-(void)setCollectionView:(JTCollectionView *)arg1 ;
@end
