/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassGroupViewDelegate <NSObject>
@optional
-(void)groupViewPanDidEnd:(id)arg1;
-(long long)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1;
-(void)groupViewTapped:(id)arg1;
-(BOOL)groupViewShouldAllowPanning:(id)arg1;
-(void)groupViewPanDidBegin:(id)arg1;
-(void)groupView:(id)arg1 panned:(CGPoint)arg2 withVelocity:(CGPoint)arg3;
-(void)groupViewDidUpdatePageControlVisibility:(id)arg1;
-(BOOL)groupViewCanShowBarcode:(id)arg1;
-(void)groupViewFrontPassDidUpdateBarcodeVisibility:(id)arg1 animated:(BOOL)arg2;
-(void)groupView:(id)arg1 didUpdatePassView:(id)arg2;
-(void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
-(BOOL)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
-(void)groupView:(id)arg1 frontmostPassViewDidChange:(id)arg2 withContext:(id)arg3;
-(unsigned long long)groupViewPassesSuppressedContent:(id)arg1;
-(id)groupViewReusablePassViewQueue:(id)arg1;
-(long long)groupViewContentModeForFrontmostPassWhenPiled:(id)arg1 withDefaultContentMode:(long long)arg2;

@end
