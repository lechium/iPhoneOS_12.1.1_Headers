/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@class MPUBorderConfiguration;

@interface MPUBorderView : UIView {

	BOOL _hidesWhenFullyTransparent;
	MPUBorderConfiguration* _borderConfiguration;

}

@property (nonatomic,copy) MPUBorderConfiguration * borderConfiguration;              //@synthesize borderConfiguration=_borderConfiguration - In the implementation block
@property (assign,nonatomic) BOOL hidesWhenFullyTransparent;                          //@synthesize hidesWhenFullyTransparent=_hidesWhenFullyTransparent - In the implementation block
@property (nonatomic,readonly) double requiredOutsetForDropShadow; 
@property (nonatomic,readonly) UIEdgeInsets resizableImageCapInsets; 
+(double)requiredOutsetForDropShadow;
-(double)requiredOutsetForDropShadow;
-(MPUBorderConfiguration *)borderConfiguration;
-(UIEdgeInsets)resizableImageCapInsets;
-(BOOL)hidesWhenFullyTransparent;
-(void)setHidesWhenFullyTransparent:(BOOL)arg1 ;
-(void)setBorderConfiguration:(MPUBorderConfiguration *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

