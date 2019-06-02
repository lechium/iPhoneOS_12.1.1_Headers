/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKAppContext, JSManagedValue;

@interface MusicJSManagedObject : NSObject {

	IKAppContext* _appContext;
	JSManagedValue* _managedValue;
	id _object;
	id _owner;

}

@property (nonatomic,__weak,readonly) IKAppContext * appContext; 
@property (nonatomic,readonly) id object; 
@property (nonatomic,__weak,readonly) id owner; 
-(IKAppContext *)appContext;
-(id)initWithObject:(id)arg1 owner:(id)arg2 appContext:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)object;
-(id)owner;
@end
