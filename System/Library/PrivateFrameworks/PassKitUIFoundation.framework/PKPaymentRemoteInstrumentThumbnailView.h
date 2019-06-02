/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface PKPaymentRemoteInstrumentThumbnailView : UIView {

	UIImageView* _placeholderImageView;
	UIImageView* _cardImageView;

}

@property (nonatomic,retain) UIImageView * placeholderImageView;              //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,retain) UIImageView * cardImageView;                     //@synthesize cardImageView=_cardImageView - In the implementation block
-(id)initWithRemotePaymentInstrument:(id)arg1 ;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(UIImageView *)placeholderImageView;
-(UIImageView *)cardImageView;
-(void)_updateCardImage:(CGImageRef)arg1 ;
-(void)setCardImageView:(UIImageView *)arg1 ;
-(void)_prepareConstraints;
@end

