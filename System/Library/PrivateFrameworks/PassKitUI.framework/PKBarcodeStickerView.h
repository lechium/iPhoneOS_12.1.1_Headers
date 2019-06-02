/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class PKBarcode, UIImage, UIImageView, NSMutableArray, UILabel, UIView;

@interface PKBarcodeStickerView : UIButton {

	PKBarcode* _barcode;
	UIImage* _barcodeImage;
	UIImageView* _matteView;
	UIImageView* _barcodeView;
	NSMutableArray* _stickerConstraints;
	NSMutableArray* _matteConstraints;
	UILabel* _altTextLabel;
	BOOL _drawBarcode;
	long long _validity;

}

@property (assign,nonatomic) long long validity;                //@synthesize validity=_validity - In the implementation block
@property (nonatomic,readonly) UIView * matteView;              //@synthesize matteView=_matteView - In the implementation block
+(long long)validityStateForPass:(id)arg1 ;
+(CGSize)_sizeForBarcode:(id)arg1 ;
+(PKBarcodeQuietZone)_quiteZoneForBarcode:(id)arg1 ;
-(void)_updateValidity;
-(id)initWithBarcode:(id)arg1 validityState:(long long)arg2 ;
-(void)setValidity:(long long)arg1 ;
-(CGSize)_varianceForBarcode:(id)arg1 ;
-(id)barcodeImage;
-(id)_resizedBarcode:(id)arg1 desiredSize:(CGSize)arg2 ;
-(void)_updateDrawBarcode;
-(void)_generateMatteRect:(CGRect*)arg1 barcodeRect:(CGRect*)arg2 altTextRect:(CGRect*)arg3 boundingSize:(CGSize)arg4 ;
-(long long)validity;
-(UIView *)matteView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

