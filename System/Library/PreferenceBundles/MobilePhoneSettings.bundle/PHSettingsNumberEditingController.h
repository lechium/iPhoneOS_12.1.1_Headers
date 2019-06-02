/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <Preferences/PSListController.h>

@class NSString;

@interface PHSettingsNumberEditingController : PSListController {

	NSString* _previousString;
	NSString* _previousStringSuggestion;

}

@property (nonatomic,copy) NSString * previousString;                        //@synthesize previousString=_previousString - In the implementation block
@property (nonatomic,copy) NSString * previousStringSuggestion;              //@synthesize previousStringSuggestion=_previousStringSuggestion - In the implementation block
-(BOOL)shouldSelectResponderOnAppearance;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)setPreviousString:(NSString *)arg1 ;
-(NSString *)previousString;
-(id)specifiers;
-(NSString *)previousStringSuggestion;
-(void)setPreviousStringSuggestion:(NSString *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(SCD_Struct_PH3)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
@end
