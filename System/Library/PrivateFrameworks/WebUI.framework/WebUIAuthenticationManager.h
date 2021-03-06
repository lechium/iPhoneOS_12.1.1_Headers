/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIAlertController;

@interface WebUIAuthenticationManager : NSObject {

	NSMutableArray* _authenticationChallenges;
	UIAlertController* _alertController;
	BOOL _showingAuthenticationPanel;
	id _delegate;

}

@property (__weak) id delegate;                                                                                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=isShowingAuthenticationPanel,nonatomic,readonly) BOOL showingAuthenticationPanel;              //@synthesize showingAuthenticationPanel=_showingAuthenticationPanel - In the implementation block
-(id)authenticationChallenge;
-(void)cancelAuthentication;
-(void)_didResolveChallenge;
-(void)setShowingAuthentication:(BOOL)arg1 ;
-(void)addAuthenticationChallenge:(id)arg1 displayPanel:(BOOL)arg2 ;
-(void)addAuthenticationChallenge:(id)arg1 displayPanel:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addAuthenticationChallenge:(id)arg1 ;
-(void)removeAuthenticationChallenge:(id)arg1 ;
-(BOOL)isShowingAuthenticationPanel;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)_cancel;
@end

