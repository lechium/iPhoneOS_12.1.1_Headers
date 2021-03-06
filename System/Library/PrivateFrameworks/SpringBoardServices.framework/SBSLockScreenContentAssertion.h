/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SBSLockScreenContentAction;

@interface SBSLockScreenContentAssertion : NSObject {

	NSString* _slot;
	NSString* _identifier;
	SBSLockScreenContentAction* _action;
	/*^block*/id _errorHandler;

}

@property (nonatomic,retain) NSString * slot;                                                          //@synthesize slot=_slot - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) SBSLockScreenContentAction * action;                                      //@synthesize action=_action - In the implementation block
@property (setter=_setErrorHandler:,getter=_errorHandler,nonatomic,copy) id errorHandler;              //@synthesize errorHandler=_errorHandler - In the implementation block
+(BOOL)_isRestrictedDevice;
+(id)acquireContentProviderAssertionForType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)initWithType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)_setErrorHandler:(/*^block*/id)arg1 ;
-(void)_acquireAssertionWithType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 ;
-(/*^block*/id)_errorHandler;
-(NSString *)slot;
-(void)setSlot:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(SBSLockScreenContentAction *)action;
-(unsigned long long)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setAction:(SBSLockScreenContentAction *)arg1 ;
-(void)invalidate;
@end

