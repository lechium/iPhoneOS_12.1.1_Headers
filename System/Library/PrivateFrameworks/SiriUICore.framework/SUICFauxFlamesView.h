/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>

@interface SUICFauxFlamesView : UIView {

	long long _style;
	double _width;
	SCD_Struct_SU3 _sequenceAttributes;

}
+(id)_frameImagesForSequence:(SCD_Struct_SU3)arg1 ;
-(void)start:(BOOL)arg1 ;
-(void)stop:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 screenSize:(long long)arg2 ;
-(void)_cleanupView;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)didMoveToSuperview;
-(BOOL)isAnimating;
@end

