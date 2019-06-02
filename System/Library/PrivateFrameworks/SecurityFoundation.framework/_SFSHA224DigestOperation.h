/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFDigestOperationInternal.h>
#import <libobjc.A.dylib/SFDigestOperation.h>

@class NSString, NSData;

@interface _SFSHA224DigestOperation : NSObject <SFDigestOperationInternal, SFDigestOperation> {

	id _sha224DigestOperationInternal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSData * hashValue; 
@property (getter=_secKeyECDSAAlgorithm,nonatomic,readonly) const CFStringRef secKeyECDSAAlgorithm; 
@property (getter=_ccDigestInfo,nonatomic,readonly) const ccdigest_info* ccDigestInfo; 
+(long long)outputSize;
+(long long)blockSize;
+(id)digest:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSData *)hashValue;
-(const CFStringRef)_secKeyECDSAAlgorithm;
-(const ccdigest_info*)_ccDigestInfo;
-(void)addData:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

