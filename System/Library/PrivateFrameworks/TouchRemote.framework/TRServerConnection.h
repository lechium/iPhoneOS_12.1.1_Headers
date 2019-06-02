/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRConnection.h>

@class SFService;

@interface TRServerConnection : TRConnection {

	SFService* _service;

}

@property (assign,nonatomic,__weak) SFService * service;              //@synthesize service=_service - In the implementation block
-(SFService *)service;
-(void)setService:(SFService *)arg1 ;
-(id)initWithService:(id)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(void)invalidate;
-(void)sendResponse:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
@end

