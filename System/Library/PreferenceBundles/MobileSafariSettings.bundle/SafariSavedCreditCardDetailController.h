/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/WBUCreditCardCaptureViewControllerDelegate.h>

@class WBSCreditCardData, WBSCreditCardFormatter, NSDateFormatter, PSTextFieldSpecifier, NSArray, NSString;

@interface SafariSavedCreditCardDetailController : PSListController <WBUCreditCardCaptureViewControllerDelegate> {

	WBSCreditCardData* _creditCardData;
	WBSCreditCardFormatter* _creditCardFormatter;
	NSDateFormatter* _expirationDateFormatter;
	PSTextFieldSpecifier* _cardholderSpecifier;
	PSTextFieldSpecifier* _numberSpecifier;
	PSTextFieldSpecifier* _expirationDateSpecifier;
	PSTextFieldSpecifier* _descriptionSpecifier;
	NSArray* _deleteButtonSpecifiers;
	NSArray* _useCameraSpecifiers;
	BOOL _hasDefaultDescription;
	BOOL _editing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldSelectResponderOnAppearance;
-(void)creditCardCaptureViewControllerDidCancel:(id)arg1 ;
-(void)creditCardCaptureViewController:(id)arg1 didCaptureCreditCard:(id)arg2 ;
-(void)setSpecifier:(id)arg1 ;
-(void)_updateSpecifiers;
-(void)_setValue:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_updateRightBarButtonItem;
-(id)_specifierWithName:(id)arg1 ;
-(void)_updateDoneButtonForCardNumberString:(id)arg1 ;
-(id)_valueOfSpecifier:(id)arg1 ;
-(void)_updateSpecifiersFromCreditCardData:(id)arg1 ;
-(void)_setEditing:(BOOL)arg1 ;
-(id)_useCameraSpecifiers;
-(void)_deleteCreditCard:(id)arg1 ;
-(void)_useCamera:(id)arg1 ;
-(void)_endEditing:(id)arg1 ;
-(void)_edit:(id)arg1 ;
-(void)_cancelEditing:(id)arg1 ;
-(id)_deleteButtonSpecifiers;
-(void)_removeCreditCardDataAndPopViewController;
-(id)specifiers;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

