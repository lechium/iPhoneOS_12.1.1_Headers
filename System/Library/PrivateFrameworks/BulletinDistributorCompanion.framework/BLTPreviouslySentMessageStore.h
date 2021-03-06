/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject, NSString;

@interface BLTPreviouslySentMessageStore : NSObject {

	NSMutableDictionary* _messageDigests;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _saveTimer;
	NSString* _path;
	BOOL _dirty;

}

@property (assign,nonatomic) BOOL dirty;              //@synthesize dirty=_dirty - In the implementation block
-(id)initWithMessageStorePath:(id)arg1 ;
-(id)messageDigestForUnsentMessage:(id)arg1 messageKey:(id)arg2 ;
-(void)recordMessageDigestAsPreviouslySent:(id)arg1 messageKey:(id)arg2 ;
-(void)removeDigestForKey:(id)arg1 ;
-(void)_cancelSave;
-(void)_enqueueSave;
-(void)dealloc;
-(void)invalidate;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)dirty;
-(BOOL)isEmpty;
-(void)clear;
-(void)_save;
@end

