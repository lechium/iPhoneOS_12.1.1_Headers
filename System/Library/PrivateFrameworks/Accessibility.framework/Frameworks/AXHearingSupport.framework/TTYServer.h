/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHeardServerMessageDelegate.h>

@protocol OS_dispatch_queue;
@class NSLock, NSMutableDictionary, NSObject, HCServer, NSString;

@interface TTYServer : NSObject <AXHeardServerMessageDelegate> {

	NSLock* _dataResponseBlocksLock;
	NSMutableDictionary* _databaseResponseBlocks;
	NSObject*<OS_dispatch_queue> _commonRequestQueue;
	HCServer* _server;
	/*^block*/id _actionCompletionBlock;

}

@property (nonatomic,copy) id actionCompletionBlock;                //@synthesize actionCompletionBlock=_actionCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)resetConnection;
-(void)setShouldSuppressIncomingNotification:(BOOL)arg1 ;
-(void)registerForUpdates:(/*^block*/id)arg1 forCallUID:(id)arg2 ;
-(void)sendString:(id)arg1 forCallUID:(id)arg2 ;
-(id)valueForTTYSetting:(id)arg1 ;
-(void)setTTYDictionaryAvailability:(BOOL)arg1 ;
-(BOOL)deleteConversationWithCallUID:(id)arg1 ;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(void)registerResponseBlock:(/*^block*/id)arg1 forUUID:(id)arg2 ;
-(void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(void)handleMessageError:(id)arg1 destructive:(BOOL)arg2 ;
-(void)displayCallPromptForContact:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)cancelCallPromptDisplay;
-(void)findConversationForCallUID:(id)arg1 andResult:(/*^block*/id)arg2 ;
-(void)setActionCompletionBlock:(id)arg1 ;
-(id)actionCompletionBlock;
-(void)_managerAXPIDState:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end

