/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKAnisetteServiceProtocol;
@class NSXPCConnection, NSLock, NSXPCListenerEndpoint, AKDevice;

@interface AKAnisetteProvisioningController : NSObject {

	NSXPCConnection* _anisetteServiceConnection;
	NSLock* _connectionLock;
	NSXPCListenerEndpoint* _daemonXPCEndpoint;
	AKDevice* _targetDevice;
	id<AKAnisetteServiceProtocol> _anisetteDataProvider;

}

@property (nonatomic,retain) AKDevice * targetDevice;                                         //@synthesize targetDevice=_targetDevice - In the implementation block
@property (nonatomic,retain) id<AKAnisetteServiceProtocol> anisetteDataProvider;              //@synthesize anisetteDataProvider=_anisetteDataProvider - In the implementation block
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(id)anisetteDataForURLRequest:(id)arg1 error:(id*)arg2 ;
-(void)anisetteDataForURLRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initForDevice:(id)arg1 provider:(id)arg2 ;
-(id)_anisetteServiceConnection;
-(id)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 error:(id*)arg2 ;
-(void)setTargetDevice:(AKDevice *)arg1 ;
-(id)anisetteDataWithError:(id*)arg1 ;
-(AKDevice *)targetDevice;
-(id<AKAnisetteServiceProtocol>)anisetteDataProvider;
-(void)setAnisetteDataProvider:(id<AKAnisetteServiceProtocol>)arg1 ;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)provisionWithCompletion:(/*^block*/id)arg1 ;
-(void)syncWithSIMData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)eraseWithCompletion:(/*^block*/id)arg1 ;
-(void)anisetteDataWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end

