/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NEAppProxyProviderContainerDelegate, OS_dispatch_queue;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NEAppProxyProvider, NSObject;

@interface NEAppProxyProviderContainer : NSObject {

	unsigned _delegateInterfaceIndex;
	NEAppProxyProvider* _provider;
	id<NEAppProxyProviderContainerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _flowQueue;
	NEFlowDirectorRef _director;
	/*^block*/id _stopCompletionHandler;

}

@property (retain) id<NEAppProxyProviderContainerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> flowQueue;                        //@synthesize flowQueue=_flowQueue - In the implementation block
@property (assign) NEFlowDirectorRef director;                                    //@synthesize director=_director - In the implementation block
@property (assign) unsigned delegateInterfaceIndex;                               //@synthesize delegateInterfaceIndex=_delegateInterfaceIndex - In the implementation block
@property (copy) id stopCompletionHandler;                                        //@synthesize stopCompletionHandler=_stopCompletionHandler - In the implementation block
@property (readonly) NEAppProxyProvider * provider;                               //@synthesize provider=_provider - In the implementation block
-(void)wake;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setInitialFlowDivertControlSocket:(id)arg1 ;
-(id)stopCompletionHandler;
-(void)setStopCompletionHandler:(id)arg1 ;
-(void)setFlowQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)flowQueue;
-(void)setDirector:(NEFlowDirectorRef)arg1 ;
-(NEFlowDirectorRef)director;
-(unsigned)delegateInterfaceIndex;
-(void)flowDivertOpenControlSocket;
-(void)flowDivertMatchAppRulesWithFlow:(unsigned)arg1 pid:(int)arg2 uuid:(unsigned char)arg3 signingIdentifier:(CFStringRef)arg4 ;
-(void)flowDivertNewFlow:(NEFlowRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDelegateInterfaceIndex:(unsigned)arg1 ;
-(void)handleAppMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 providerClass:(Class)arg2 ;
-(void)setDelegateInterface:(unsigned)arg1 ;
-(void)setDelegate:(id<NEAppProxyProviderContainerDelegate>)arg1 ;
-(id<NEAppProxyProviderContainerDelegate>)delegate;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setConfiguration:(id)arg1 ;
-(NEAppProxyProvider *)provider;
@end

