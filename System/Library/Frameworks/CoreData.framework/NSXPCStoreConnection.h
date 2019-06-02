/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCStore, NSXPCConnection;

@interface NSXPCStoreConnection : NSObject {

	NSXPCStore* _store;
	NSXPCConnection* _connection;

}
-(id)initForStore:(id)arg1 ;
-(void)sendMessageWithContext:(id)arg1 ;
-(id)createConnectionWithOptions:(id)arg1 ;
-(id)sendMessage:(id)arg1 store:(id)arg2 error:(id*)arg3 ;
-(void)reconnect;
-(void)dealloc;
-(void)disconnect;
@end
