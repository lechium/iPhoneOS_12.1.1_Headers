/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CRKCardSectionView <NSObject>
@property (nonatomic,copy) NSString * cardSectionViewIdentifier; 
@property (assign,nonatomic,__weak) UIView*<CRKComposableView> composedSuperview; 
@required
+(CGSize*)sizeThatFitsCardSection:(id)arg1 boundingSize:(CGSize)arg2;
-(UIView*<CRKComposableView>)composedSuperview;
-(void)removeFromComposedSuperview;
-(NSString *)cardSectionViewIdentifier;
-(void)setCardSectionViewIdentifier:(id)arg1;
-(void)setComposedSuperview:(id)arg1;
-(CGSize*)sizeThatFits:(CGSize)arg1;

@end
