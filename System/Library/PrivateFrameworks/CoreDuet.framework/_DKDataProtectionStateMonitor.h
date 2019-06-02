/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _DKDataProtectionMaster, NSUUID;

@interface _DKDataProtectionStateMonitor : NSObject {

	_DKDataProtectionMaster* _master;
	NSUUID* _handlerUUID;
	/*^block*/id _changeHandler;

}

@property (copy) id changeHandler;              //@synthesize changeHandler=_changeHandler - In the implementation block
-(void)setChangeHandler:(id)arg1 ;
-(BOOL)isDataAvailableFor:(id)arg1 ;
-(id)changeHandler;
-(id)init;
-(void)dealloc;
@end

