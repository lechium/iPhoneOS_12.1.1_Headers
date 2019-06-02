/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol RPAuthenticatable
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (assign,nonatomic) unsigned pairSetupFlags; 
@property (assign,nonatomic) unsigned pairVerifyFlags; 
@property (nonatomic,copy) NSString * password; 
@property (assign,nonatomic) int passwordType; 
@property (nonatomic,copy) id authCompletionHandler; 
@property (nonatomic,copy) id showPasswordHandler; 
@property (nonatomic,copy) id hidePasswordHandler; 
@property (nonatomic,copy) id promptForPasswordHandler; 
@required
-(int)passwordType;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setPairSetupFlags:(unsigned)arg1;
-(unsigned)pairSetupFlags;
-(void)tryPassword:(id)arg1;
-(unsigned)pairVerifyFlags;
-(void)setPairVerifyFlags:(unsigned)arg1;
-(void)setPasswordType:(int)arg1;
-(id)authCompletionHandler;
-(void)setAuthCompletionHandler:(/*^block*/id)arg1;
-(id)showPasswordHandler;
-(void)setShowPasswordHandler:(/*^block*/id)arg1;
-(id)hidePasswordHandler;
-(void)setHidePasswordHandler:(/*^block*/id)arg1;
-(id)promptForPasswordHandler;
-(void)setPromptForPasswordHandler:(/*^block*/id)arg1;
-(void)setPassword:(id)arg1;
-(NSString *)password;

@end

