/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIWebAutoFillDelegate <NSObject>
@optional
-(void)webBrowserView:(id)arg1 textDidChangeInTextField:(id)arg2 inFrame:(id)arg3;
-(void)webBrowserView:(id)arg1 willSendSubmitEventToForm:(id)arg2 inFrame:(id)arg3 withValues:(id)arg4;
-(id)titleOfAutoFillButtonInWebBrowserView:(id)arg1;
-(void)webBrowserView:(id)arg1 clearFormAutoFillStateForFrame:(id)arg2;

@required
-(void)webBrowserView:(id)arg1 willSubmitForm:(id)arg2 toFrame:(id)arg3 fromFrame:(id)arg4 withValues:(id)arg5 submissionHandler:(/*^block*/id)arg6;
-(void)webBrowserView:(id)arg1 didBeginEditingTextField:(id)arg2 inFrame:(id)arg3;
-(void)webBrowserView:(id)arg1 didEndEditingTextField:(id)arg2 inFrame:(id)arg3;
-(void)webBrowserView:(id)arg1 didFocusTextField:(id)arg2 inFrame:(id)arg3;
-(id)webBrowserView:(id)arg1 suggestionsForString:(id)arg2;
-(BOOL)hasCurrentSuggestionsForWebBrowserView:(id)arg1;
-(void)webBrowserView:(id)arg1 acceptedAutoFillWord:(id)arg2;
-(BOOL)webBrowserViewShouldShowAutoFillButton:(id)arg1;
-(void)webBrowserView:(id)arg1 updateAutoFillButton:(id)arg2;
-(void)autoFillInWebBrowserView:(id)arg1;
-(void)webBrowserView:(id)arg1 preFillInFrame:(id)arg2;

@end

