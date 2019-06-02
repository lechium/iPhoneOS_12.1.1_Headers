/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WKScriptMessageHandler.h>
#import <libobjc.A.dylib/SXWebContentDocumentStateProviding.h>
#import <libobjc.A.dylib/SXWebContentDocumentStateReporting.h>

@class WKUserContentController, NSMutableArray, NFStateMachine, NSString;

@interface SXWebContentDocumentStateManager : NSObject <WKScriptMessageHandler, SXWebContentDocumentStateProviding, SXWebContentDocumentStateReporting> {

	WKUserContentController* _userContentController;
	NSMutableArray* _onReadyBlocks;
	NSMutableArray* _onLoadBlocks;
	NSMutableArray* _onUnloadBlocks;
	NFStateMachine* _stateMachine;

}

@property (nonatomic,readonly) WKUserContentController * userContentController;              //@synthesize userContentController=_userContentController - In the implementation block
@property (nonatomic,readonly) NSMutableArray * onReadyBlocks;                               //@synthesize onReadyBlocks=_onReadyBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * onLoadBlocks;                                //@synthesize onLoadBlocks=_onLoadBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * onUnloadBlocks;                              //@synthesize onUnloadBlocks=_onUnloadBlocks - In the implementation block
@property (nonatomic,readonly) NFStateMachine * stateMachine;                                //@synthesize stateMachine=_stateMachine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKUserContentController *)userContentController;
-(void)onLoad:(/*^block*/id)arg1 ;
-(void)documentStartedLoading;
-(void)documentIsReady;
-(void)documentWillUnload;
-(void)onReady:(/*^block*/id)arg1 ;
-(void)onUnload:(/*^block*/id)arg1 ;
-(id)initWithUserContentController:(id)arg1 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(NSMutableArray *)onLoadBlocks;
-(NSMutableArray *)onReadyBlocks;
-(NSMutableArray *)onUnloadBlocks;
-(NFStateMachine *)stateMachine;
@end

