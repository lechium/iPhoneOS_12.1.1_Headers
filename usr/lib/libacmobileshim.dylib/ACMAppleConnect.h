/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ACMAppleConnect : NSObject {

	id _private;
	id _delegate;

}

@property (assign) id delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * version; 
@property (assign,nonatomic) unsigned long long logLevel; 
+(id)sharedInstance;
-(void)cancelRequests;
-(unsigned long long)logLevel;
-(void)setLogLevel:(unsigned long long)arg1 ;
-(void)authenticateWithRequest:(id)arg1 password:(id)arg2 ;
-(id)private;
-(void)handleMemoryWarningNotification:(id)arg1 ;
-(void)setupComponents;
-(void)authenticate:(id)arg1 ;
-(void)verifyServiceTicket:(id)arg1 ;
-(id)hideAppleConnectSignInDialog;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(NSString *)version;
@end

