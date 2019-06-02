/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSProxyConnection.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/NSURLSessionStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSURLSessionStreamTask, NSInputStream, NSOutputStream;

@interface NSProxyConnectionStreamTask : NSProxyConnection <NSStreamDelegate, NSURLSessionStreamDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isConnected;
	NSString* _host;
	int _port;
	BOOL _dataAvailableForReading;
	NSURLSessionStreamTask* _streamTask;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;

}

@property (retain) NSInputStream * inputStream;                      //@synthesize inputStream=_inputStream - In the implementation block
@property (retain) NSOutputStream * outputStream;                    //@synthesize outputStream=_outputStream - In the implementation block
@property (assign) BOOL dataAvailableForReading;                     //@synthesize dataAvailableForReading=_dataAvailableForReading - In the implementation block
@property (retain) NSURLSessionStreamTask * streamTask;              //@synthesize streamTask=_streamTask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4 ;
-(void)write:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4 ;
-(void)read:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)readFromStream;
-(BOOL)dataAvailableForReading;
-(void)setDataAvailableForReading:(BOOL)arg1 ;
-(void)_onConnected:(int)arg1 ;
-(NSURLSessionStreamTask *)streamTask;
-(void)setStreamTask:(NSURLSessionStreamTask *)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(NSOutputStream *)outputStream;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(NSInputStream *)inputStream;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)cancel;
@end

