/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessExpress/DADisableableObject.h>

@class NSString, DADClient;

@interface DADClientDelegate : DADisableableObject {

	BOOL _finished;
	BOOL _consumerCancelled;
	NSString* _delegateID;
	DADClient* _client;
	NSString* _accountID;

}

@property (assign,nonatomic,__weak) DADClient * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSString * accountID;                   //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) BOOL finished;                          //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL consumerCancelled;                 //@synthesize consumerCancelled=_consumerCancelled - In the implementation block
@property (nonatomic,retain) NSString * delegateID;                  //@synthesize delegateID=_delegateID - In the implementation block
-(BOOL)finished;
-(void)setFinished:(BOOL)arg1 ;
-(void)setAccountID:(NSString *)arg1 ;
-(void)disable;
-(NSString *)accountID;
-(NSString *)delegateID;
-(void)userRequestsCancel;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 ;
-(void)setConsumerCancelled:(BOOL)arg1 ;
-(BOOL)consumerCancelled;
-(void)setDelegateID:(NSString *)arg1 ;
-(DADClient *)client;
-(void)setClient:(DADClient *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
@end
