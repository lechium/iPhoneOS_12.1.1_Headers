/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RapportUI/RapportUI-Structs.h>
#import <libobjc.A.dylib/RPAuthenticatable.h>

@protocol OS_dispatch_queue;
@class NSString, RPCloudSession, RPPairingPromptViewController, RPPairingShowViewController, NSObject, UIViewController;

@interface RPUICloudSession : NSObject <RPAuthenticatable> {

	RPCloudSession* _cloudSession;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	RPPairingPromptViewController* _vcPrompt;
	RPPairingShowViewController* _vcShow;
	unsigned _pairSetupFlags;
	unsigned _pairVerifyFlags;
	int _passwordType;
	NSString* _password;
	/*^block*/id _authCompletionHandler;
	/*^block*/id _showPasswordHandler;
	/*^block*/id _hidePasswordHandler;
	/*^block*/id _promptForPasswordHandler;
	NSString* _destinationID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	UIViewController* _presentingViewController;
	NSString* _serviceIdentifier;

}

@property (nonatomic,retain) NSString * destinationID;                                 //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                     //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                     //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                               //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned pairSetupFlags;                                  //@synthesize pairSetupFlags=_pairSetupFlags - In the implementation block
@property (assign,nonatomic) unsigned pairVerifyFlags;                                 //@synthesize pairVerifyFlags=_pairVerifyFlags - In the implementation block
@property (nonatomic,copy) NSString * password;                                        //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) int passwordType;                                         //@synthesize passwordType=_passwordType - In the implementation block
@property (nonatomic,copy) id authCompletionHandler;                                   //@synthesize authCompletionHandler=_authCompletionHandler - In the implementation block
@property (nonatomic,copy) id showPasswordHandler;                                     //@synthesize showPasswordHandler=_showPasswordHandler - In the implementation block
@property (nonatomic,copy) id hidePasswordHandler;                                     //@synthesize hidePasswordHandler=_hidePasswordHandler - In the implementation block
@property (nonatomic,copy) id promptForPasswordHandler;                                //@synthesize promptForPasswordHandler=_promptForPasswordHandler - In the implementation block
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(int)passwordType;
-(void)_invalidated;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setPairSetupFlags:(unsigned)arg1 ;
-(unsigned)pairSetupFlags;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)serviceIdentifier;
-(void)tryPassword:(id)arg1 ;
-(unsigned)pairVerifyFlags;
-(void)setPairVerifyFlags:(unsigned)arg1 ;
-(void)setPasswordType:(int)arg1 ;
-(id)authCompletionHandler;
-(void)setAuthCompletionHandler:(id)arg1 ;
-(id)showPasswordHandler;
-(void)setShowPasswordHandler:(id)arg1 ;
-(id)hidePasswordHandler;
-(void)setHidePasswordHandler:(id)arg1 ;
-(id)promptForPasswordHandler;
-(void)setPromptForPasswordHandler:(id)arg1 ;
-(NSString *)destinationID;
-(void)setPassword:(NSString *)arg1 ;
-(void)setDestinationID:(NSString *)arg1 ;
-(void)_promptForPasswordWithFlags:(unsigned)arg1 throttleSeconds:(int)arg2 ;
-(void)_showPassword:(id)arg1 flags:(unsigned)arg2 ;
-(void)_hidePasswordWithFlags:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(UIViewController *)presentingViewController;
-(void)invalidate;
-(NSString *)label;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSString *)password;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
@end
