/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WBUFormAutoCompleteState.h>

@class DOMHTMLInputElement, WebFrame;

@interface WBUFormAutoCompleteStateWK1 : WBUFormAutoCompleteState {

	DOMHTMLInputElement* _textField;
	WebFrame* _webFrame;

}

@property (nonatomic,readonly) WebFrame * webFrame;              //@synthesize webFrame=_webFrame - In the implementation block
-(id)initWithTextField:(id)arg1 webFrame:(id)arg2 ;
-(void)setAutoFillButtonTitle:(id)arg1 ;
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
-(WebFrame *)webFrame;
-(id)webView;
@end

