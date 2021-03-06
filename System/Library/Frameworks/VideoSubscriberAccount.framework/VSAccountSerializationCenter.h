/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, VSPersistentStorage, NSUndoManager;

@interface VSAccountSerializationCenter : NSObject {

	NSOperationQueue* _serializationQueue;
	VSPersistentStorage* _storage;

}

@property (nonatomic,retain) NSOperationQueue * serializationQueue;              //@synthesize serializationQueue=_serializationQueue - In the implementation block
@property (nonatomic,retain) VSPersistentStorage * storage;                      //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager; 
+(id)defaultSerializationCenter;
-(NSOperationQueue *)serializationQueue;
-(id)exportDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setSerializationQueue:(NSOperationQueue *)arg1 ;
-(VSPersistentStorage *)storage;
-(void)setStorage:(VSPersistentStorage *)arg1 ;
-(id)init;
-(NSUndoManager *)undoManager;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
@end

