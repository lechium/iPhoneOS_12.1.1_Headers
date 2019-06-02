/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <CommunicationsSetupUI/CNFRegServerWebViewController.h>

@class NSTimer;

@interface CNFRegAccountWebViewController : CNFRegServerWebViewController {

	BOOL _failedBagLoad;
	BOOL _listeningForBagLoad;
	NSTimer* _bagLoadTimer;

}

@property (assign,nonatomic) BOOL failedBagLoad;              //@synthesize failedBagLoad=_failedBagLoad - In the implementation block
-(id)bagKey;
-(void)_reload;
-(id)initWithRegController:(id)arg1 ;
-(BOOL)shouldSetHeadersForRequest:(id)arg1 ;
-(void)setHeadersForRequest:(id)arg1 ;
-(BOOL)canSendURLRequest:(id)arg1 ;
-(void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(void)cancelTapped;
-(BOOL)_loadURLFromBag;
-(void)_startListeningForBagLoad;
-(void)_startBagLoadTimer;
-(void)setFailedBagLoad:(BOOL)arg1 ;
-(BOOL)failedBagLoad;
-(void)_showURLDidNotLoadAlert;
-(void)_stopCurrentReload;
-(void)doHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(id)clientInfoHeaderValue;
-(id)viewPortHeaderValue;
-(id)securityHeaderValue;
-(id)serviceHeaderValue;
-(id)interfaceLayoutHeaderValue;
-(void)_stopBagLoadTimer;
-(void)_stopListeningForBagLoad;
-(void)_bagLoadTimeout:(id)arg1 ;
-(void)_handleFTServerBagFinishedLoading;
-(id)_viewPortStringForSize:(CGSize)arg1 ;
-(id)_nonModalParentController;
-(id)_viewPortForFormSheetPresentation;
-(id)_viewPortForNormalPresentation;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(void)_reloadDelayed;
-(void)_showGenericErrorWithHandler;
-(id)pushTokenHeaderValue;
-(id)authIdHeaderValue;
-(id)authTokenHeaderValue;
-(id)logName;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
@end

