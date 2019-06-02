/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MailAccount.h>

@class NSURL, MFIMAPConnection, NSRecursiveLock, DeliveryAccount;

@interface MFFakeMailAccount : MailAccount {

	NSURL* _URL;
	MFIMAPConnection* _cachedConnection;
	NSRecursiveLock* _flagChangesLock;
	BOOL _managed;
	DeliveryAccount* _deliveryAccount;

}

@property (nonatomic,retain) DeliveryAccount * deliveryAccount;              //@synthesize deliveryAccount=_deliveryAccount - In the implementation block
@property (assign,getter=isManaged,nonatomic) BOOL managed;                  //@synthesize managed=_managed - In the implementation block
-(id)hostname;
-(int)cachePolicy;
-(BOOL)isManaged;
-(id)_URLScheme;
-(BOOL)supportsRemoteAppend;
-(BOOL)shouldFetchAgainWithError:(id)arg1 foregroundRequest:(BOOL)arg2 ;
-(BOOL)_shouldConfigureMailboxCache;
-(id)_mailboxPathPrefix;
-(void)setDeliveryAccount:(DeliveryAccount *)arg1 ;
-(BOOL)willPerformActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 result:(id*)arg3 ;
-(void)didFinishActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 withResult:(id)arg3 ;
-(id)powerAssertionIdentifierWithPrefix:(id)arg1 ;
-(BOOL)supportsFastRemoteBodySearch;
-(id)initWithURL:(id)arg1 rootMailboxUid:(id)arg2 ;
-(void)setUnreadCount:(unsigned)arg1 forMailbox:(id)arg2 ;
-(id)_nameForMailboxUid:(id)arg1 ;
-(unsigned)minID;
-(void)setCachedConnection:(id)arg1 ;
-(id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(int)arg3 ;
-(id)flagChangesForMailboxPath:(id)arg1 UID:(unsigned)arg2 connectTime:(double)arg3 ;
-(id)flagChangesLock;
-(void)setManaged:(BOOL)arg1 ;
-(DeliveryAccount *)deliveryAccount;
-(id)init;
-(id)description;
-(id)debugDescription;
-(BOOL)isActive;
-(id)initWithURL:(id)arg1 ;
-(id)uniqueId;
-(id)displayName;
-(id)username;
-(id)URLString;
@end

