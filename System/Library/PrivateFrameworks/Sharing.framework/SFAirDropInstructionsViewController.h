/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SFCollectionViewDelegateLayout.h>

@class SFCollectionViewLayout, UITextView, SFAirDropActiveIconView, NSString;

@interface SFAirDropInstructionsViewController : UIViewController <SFCollectionViewDelegateLayout> {

	SFCollectionViewLayout* _collectionViewLayout;
	CGSize _minimumPreferredContentSize;
	UITextView* _instructionsTextView;
	SFAirDropActiveIconView* _airDropActiveIconView;

}

@property (nonatomic,readonly) UITextView * instructionsTextView;                            //@synthesize instructionsTextView=_instructionsTextView - In the implementation block
@property (nonatomic,readonly) SFAirDropActiveIconView * airDropActiveIconView;              //@synthesize airDropActiveIconView=_airDropActiveIconView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)_airDropText;
-(void)_updateFontSizes;
-(void)_layoutiOSSubviews;
-(void)updatePreferredContentSize;
-(id)_fontWithStyle:(id)arg1 maxSizeCategory:(id)arg2 traits:(unsigned)arg3 ;
-(double)_titleLabelHeight;
-(CGSize)_cachedPreferredItemSize;
-(id)_instructionsText;
-(id)attributedStringWithTitle:(id)arg1 content:(id)arg2 ;
-(id)_instructionsBaseFormatString;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3 ;
-(UITextView *)instructionsTextView;
-(SFAirDropActiveIconView *)airDropActiveIconView;
@end
