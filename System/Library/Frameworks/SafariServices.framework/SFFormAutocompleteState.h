/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WBUFormAutoCompleteState.h>
#import <libobjc.A.dylib/WBSOneTimeCodeMonitorObserver.h>

@class SFFormAutoFillFrameHandle, WBSFormMetadata, WBSFormControlMetadata, NSString, _SFFormAutoFillController, _SFFormAutoFillInputSession, UIView, WBSFormAutoFillMetadataCorrector, NSArray;

@interface SFFormAutocompleteState : WBUFormAutoCompleteState <WBSOneTimeCodeMonitorObserver> {

	SFFormAutoFillFrameHandle* _frame;
	WBSFormMetadata* _formMetadata;
	WBSFormControlMetadata* _textFieldMetadata;
	NSString* _textFieldValue;
	_SFFormAutoFillController* _autoFillController;
	_SFFormAutoFillInputSession* _inputSession;
	BOOL _fetchingLoginCredentialSuggestions;
	UIView* _emptyInputView;
	WBSFormAutoFillMetadataCorrector* _metadataCorrector;
	NSArray* _cachedExternalCredentialIdentities;
	NSString* _prefixForSuggestions;

}

@property (nonatomic,readonly) _SFFormAutoFillInputSession * inputSession;              //@synthesize inputSession=_inputSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateSuggestions;
-(id)initWithFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 inputSession:(id)arg4 autoFillController:(id)arg5 ;
-(id)textSuggestionForStreamlinedAutoFillWithCredentialIdentity:(id)arg1 ;
-(_SFFormAutoFillInputSession *)inputSession;
-(void)textDidChangeInFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 ;
-(BOOL)shouldShowIconsInPasswordPicker;
-(void)_updateTextFieldValue;
-(void)fillCredentialAfterAuthenticationIfNeeded:(id)arg1 setAsDefaultCredential:(BOOL)arg2 submitForm:(BOOL)arg3 ;
-(id)_textSuggestionForExternalCredentialIdentity:(id)arg1 ;
-(id)_textSuggestionForCredentialDisplayData:(id)arg1 submitForm:(BOOL)arg2 ;
-(id)_matchingKeychainCredentialsIncludingCredentialsWithEmptyUsernames:(BOOL)arg1 ;
-(void)_updateSuggestions:(unsigned long long)arg1 ;
-(void)_autoFillOneTimeCodeFieldsWithValue:(id)arg1 ;
-(void)_suggestLoginCredentialsShowingQuickTypeKey:(BOOL)arg1 ;
-(void)autoFillFormWithCreditCardDataAfterAuthenticationIfNeeded:(id)arg1 ;
-(BOOL)_suggestUsernamesForRegistrationIfPossible:(unsigned long long)arg1 ;
-(void)_gatherAndShowAddressBookAutoFillSuggestions;
-(id)_correctedFormMetadata:(id)arg1 ;
-(id)_bestTextFieldMetadataForMetadata:(id)arg1 ;
-(id)_suggestionsForAutoFillDisplayData:(id)arg1 ;
-(void)setPrefixForSuggestions:(id)arg1 ;
-(void)autoFillValues:(id)arg1 setAutoFilled:(BOOL)arg2 andFocusFieldAfterFilling:(BOOL)arg3 fieldToFocus:(id)arg4 submitForm:(BOOL)arg5 ;
-(void)codesUpdatedForOneTimeCodeMonitor:(id)arg1 ;
-(void)setAutoFillButtonTitle:(id)arg1 ;
-(void)fillCredentialAfterAuthenticationIfNeeded:(id)arg1 setAsDefaultCredential:(BOOL)arg2 ;
-(void)autoFillValuesAfterAuthenticationIfNeeded:(id)arg1 ;
-(Class)_passwordPickerViewControllerClass;
-(id)externalCredentialIdentities;
-(void)setShowingKeyboardInputView:(BOOL)arg1 ;
-(void)getTextFieldMetadata:(id*)arg1 formMetadata:(id*)arg2 ;
-(id)textFieldValue;
-(void)fetchFormMetadataWithCompletion:(/*^block*/id)arg1 ;
-(void)autoFillValues:(id)arg1 setAutoFilled:(BOOL)arg2 andFocusFieldAfterFilling:(BOOL)arg3 fieldToFocus:(id)arg4 ;
-(void)autoFillGeneratedPassword:(id)arg1 inForm:(long long)arg2 ;
-(void)annotateForm:(long long)arg1 withValues:(id)arg2 ;
-(void)fillGeneratedPassword:(id)arg1 inField:(id)arg2 ;
-(void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 clearField:(id)arg3 ;
-(BOOL)shouldOfferActionAutoFillCredentials;
-(void)dealloc;
-(id)frame;
-(void)invalidate;
-(id)webView;
@end

