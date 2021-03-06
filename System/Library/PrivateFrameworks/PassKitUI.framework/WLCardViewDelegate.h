/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WLCardViewDelegate <NSObject>
@optional
-(void)passViewTapped:(id)arg1;
-(BOOL)passViewCanShowBarcode:(id)arg1;
-(void)passViewUpdateBarcodeVisibility:(id)arg1 animated:(BOOL)arg2;
-(void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
-(BOOL)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
-(void)passView:(id)arg1 willPresentPassDetailsViewController:(id)arg2;
-(void)passView:(id)arg1 didPresentPassDetailsViewController:(id)arg2;
-(void)passViewDidBeginAuthenticating:(id)arg1;
-(void)passViewDidEndAuthenticating:(id)arg1;

@end

