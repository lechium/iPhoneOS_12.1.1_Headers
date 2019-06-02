/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDControl.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ASDBooleanControl : ASDControl {

	BOOL _value;
	NSObject*<OS_dispatch_queue> _valueQueue;
	BOOL _settable;

}

@property (assign,nonatomic) BOOL value; 
@property (getter=isSettable,nonatomic,readonly) BOOL settable;              //@synthesize settable=_settable - In the implementation block
+(id)muteControlWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 ;
+(id)phantomPowerControlWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 ;
+(id)invertControlWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 ;
+(id)jackControlWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 ;
-(BOOL)changeValue:(BOOL)arg1 ;
-(BOOL)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(id)initWithPlugin:(id)arg1 ;
-(unsigned)baseClass;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 ;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned)arg4 ;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(BOOL)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(void*)arg5 forClient:(int)arg6 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)driverClassName;
-(BOOL)isPropertySettable:(const AudioObjectPropertyAddress*)arg1 ;
-(BOOL)setProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned)arg4 andData:(const void*)arg5 forClient:(int)arg6 ;
-(BOOL)isSettable;
-(id)initWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 andObjectClassID:(unsigned)arg6 ;
-(id)initWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 ;
-(BOOL)value;
-(void)setValue:(BOOL)arg1 ;
@end

