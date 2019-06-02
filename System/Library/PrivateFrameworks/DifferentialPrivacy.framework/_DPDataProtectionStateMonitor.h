/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _DPDataProtectionMaster, NSUUID;

@interface _DPDataProtectionStateMonitor : NSObject {

	/*^block*/id _changeHandler;
	_DPDataProtectionMaster* _master;
	NSUUID* _handlerUUID;

}

@property (nonatomic,readonly) _DPDataProtectionMaster * master;              //@synthesize master=_master - In the implementation block
@property (readonly) NSUUID * handlerUUID;                                    //@synthesize handlerUUID=_handlerUUID - In the implementation block
@property (copy) id changeHandler;                                            //@synthesize changeHandler=_changeHandler - In the implementation block
+(id)dataProtectionClassA;
+(id)dataProtectionClassC;
+(id)dataProtectionClassD;
-(void)setChangeHandler:(id)arg1 ;
-(BOOL)isDataAvailableFor:(id)arg1 ;
-(id)changeHandler;
-(_DPDataProtectionMaster *)master;
-(NSUUID *)handlerUUID;
-(id)init;
-(void)dealloc;
@end

