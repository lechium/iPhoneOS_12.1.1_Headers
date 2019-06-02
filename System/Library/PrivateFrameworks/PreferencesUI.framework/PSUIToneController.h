/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSViewController.h>
#import <libobjc.A.dylib/TKTonePickerViewControllerDelegate.h>
#import <libobjc.A.dylib/TKVibrationPickerViewControllerDelegate.h>

@class TKTonePickerViewController, TKVibrationPickerViewController, NSString;

@interface PSUIToneController : PSViewController <TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate> {

	TKTonePickerViewController* _tonePickerViewController;
	TKVibrationPickerViewController* _vibrationPickerViewController;

}

@property (nonatomic,retain) TKTonePickerViewController * tonePickerViewController;                        //@synthesize tonePickerViewController=_tonePickerViewController - In the implementation block
@property (nonatomic,retain) TKVibrationPickerViewController * vibrationPickerViewController;              //@synthesize vibrationPickerViewController=_vibrationPickerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpecifier:(id)arg1 ;
-(void)_handleAlertOverridePolicyDidChangeNotification:(id)arg1 ;
-(TKTonePickerViewController *)tonePickerViewController;
-(id)_defaultToneIdentifierForTonePickerWithAlertType:(long long)arg1 topic:(id)arg2 ;
-(void)setTonePickerViewController:(TKTonePickerViewController *)arg1 ;
-(void)_insertTonePickerView;
-(void)_updateReloadSpecifierInParentController;
-(id)_defaultVibrationIdentifierForVibrationPickerWithAlertType:(long long)arg1 topic:(id)arg2 ;
-(void)setVibrationPickerViewController:(TKVibrationPickerViewController *)arg1 ;
-(TKVibrationPickerViewController *)vibrationPickerViewController;
-(void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2 ;
-(void)tonePickerViewController:(id)arg1 willPresentVibrationPickerViewController:(id)arg2 ;
-(void)tonePickerViewController:(id)arg1 didDismissVibrationPickerViewController:(id)arg2 ;
-(void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)viewDidLoad;
@end

