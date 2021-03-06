/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFHardwareSecureElementInfo, NSString, NSNumber;

@interface NFSecureElement : NSObject {

	NFHardwareSecureElementInfo* _info;
	BOOL _isDirty;

}

@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * rsaCertificate; 
@property (readonly) NSString * eccCertificate; 
@property (readonly) NSString * eckaCertificate; 
@property (readonly) BOOL isProductionSigned; 
@property (readonly) BOOL isInRestrictedMode; 
@property (readonly) unsigned long long OSVersion; 
@property (readonly) NSNumber * sequenceCounter; 
@property (readonly) unsigned supportedTechnologies; 
+(id)embeddedSecureElement;
+(unsigned)supportedTechnologies;
+(id)icefallSecureElement;
-(id)_initWithInfo:(id)arg1 ;
-(void)_markDirty;
-(unsigned)supportedTechnologies;
-(NSNumber *)sequenceCounter;
-(unsigned)hwType;
-(unsigned long long)OSVersion;
-(BOOL)isProductionSigned;
-(BOOL)isInRestrictedMode;
-(NSString *)serialNumber;
-(void)_setIsInRestrictedMode:(BOOL)arg1 ;
-(void)_updateSecureElementInfo:(id)arg1 ;
-(NSString *)rsaCertificate;
-(NSString *)eckaCertificate;
-(void)_updateIfDirty;
-(NSString *)eccCertificate;
-(id)manifestQueryBlob;
-(void)dealloc;
-(id)identifier;
-(id)info;
@end

