/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NWRemoteConnectionDirectorDelegate;
#import <Network/Network-Structs.h>
@class NSObject, NSMutableArray;

@interface NWRemoteConnectionDirector : NSObject {

	unsigned long long _maximumDataChunkSize;
	NSObject*<NWRemoteConnectionDirectorDelegate> _delegate;
	nw_protocol* _directorProtocol;
	nw_protocol* _defaultOutputHandler;
	nw_hash_tableRef _protocolHashTable;
	NSMutableArray* _writeRequests;

}

@property (__weak) NSObject*<NWRemoteConnectionDirectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) nw_protocol* directorProtocol;                                       //@synthesize directorProtocol=_directorProtocol - In the implementation block
@property (assign) nw_protocol* defaultOutputHandler;                                   //@synthesize defaultOutputHandler=_defaultOutputHandler - In the implementation block
@property (assign) nw_hash_tableRef protocolHashTable;                                  //@synthesize protocolHashTable=_protocolHashTable - In the implementation block
@property (retain) NSMutableArray * writeRequests;                                      //@synthesize writeRequests=_writeRequests - In the implementation block
@property (nonatomic,readonly) nw_protocol* protocol; 
@property (assign,nonatomic) unsigned long long maximumDataChunkSize;                   //@synthesize maximumDataChunkSize=_maximumDataChunkSize - In the implementation block
-(NSMutableArray *)writeRequests;
-(void)setWriteRequests:(NSMutableArray *)arg1 ;
-(void)setDefaultOutputProtocolHandler:(nw_protocol*)arg1 ;
-(nw_protocol*)defaultOutputHandler;
-(void)setDefaultOutputHandler:(nw_protocol*)arg1 ;
-(id)createOpenConnectionMessageForClientID:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 ;
-(id)createCloseConnectionMessageForClientID:(id)arg1 ;
-(id)createStartBrowseMessageForClientID:(id)arg1 descriptor:(id)arg2 parameters:(id)arg3 ;
-(id)createStopBrowseMessageForClientID:(id)arg1 ;
-(id)createSendDataMessageForClientID:(id)arg1 data:(id)arg2 receiveWindow:(unsigned)arg3 ;
-(BOOL)receiveRemoteReply:(id)arg1 ;
-(unsigned long long)dataModeForFlowID:(id)arg1 ;
-(nw_protocol*)outputHandlerForFlowID:(id)arg1 ;
-(void)setOutputProtocolHandler:(nw_protocol*)arg1 forFlowID:(id)arg2 dataMode:(unsigned long long)arg3 ;
-(void)receiveData:(id)arg1 forClient:(id)arg2 ;
-(unsigned long long)maximumDataChunkSize;
-(void)setMaximumDataChunkSize:(unsigned long long)arg1 ;
-(nw_protocol*)directorProtocol;
-(void)setDirectorProtocol:(nw_protocol*)arg1 ;
-(nw_hash_tableRef)protocolHashTable;
-(void)setProtocolHashTable:(nw_hash_tableRef)arg1 ;
-(void)dealloc;
-(void)setDelegate:(NSObject*<NWRemoteConnectionDirectorDelegate>)arg1 ;
-(NSObject*<NWRemoteConnectionDirectorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(nw_protocol*)protocol;
@end

