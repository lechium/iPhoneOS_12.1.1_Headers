/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDPDevice, NSString, NSDictionary;

@interface CDPDRemoteSecretValidationResult : NSObject {

	BOOL _userDidCancel;
	BOOL _userDidReset;
	unsigned long long _secretType;
	CDPDevice* _device;
	NSString* _validSecret;
	NSDictionary* _recoveredInfo;

}

@property (assign,nonatomic) unsigned long long secretType;              //@synthesize secretType=_secretType - In the implementation block
@property (assign,nonatomic) BOOL userDidCancel;                         //@synthesize userDidCancel=_userDidCancel - In the implementation block
@property (assign,nonatomic) BOOL userDidReset;                          //@synthesize userDidReset=_userDidReset - In the implementation block
@property (nonatomic,copy) CDPDevice * device;                           //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) NSString * validSecret;                       //@synthesize validSecret=_validSecret - In the implementation block
@property (nonatomic,copy) NSDictionary * recoveredInfo;                 //@synthesize recoveredInfo=_recoveredInfo - In the implementation block
-(void)setUserDidCancel:(BOOL)arg1 ;
-(void)setRecoveredInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)recoveredInfo;
-(unsigned long long)secretType;
-(void)setSecretType:(unsigned long long)arg1 ;
-(BOOL)userDidReset;
-(void)setUserDidReset:(BOOL)arg1 ;
-(NSString *)validSecret;
-(void)setValidSecret:(NSString *)arg1 ;
-(CDPDevice *)device;
-(void)setDevice:(CDPDevice *)arg1 ;
-(BOOL)userDidCancel;
@end

