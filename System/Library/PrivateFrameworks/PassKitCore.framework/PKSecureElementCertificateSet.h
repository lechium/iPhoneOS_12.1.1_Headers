/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface PKSecureElementCertificateSet : NSObject <NSCopying, NSSecureCoding> {

	BOOL _supportsLegacyFormats;
	NSDictionary* _dictionary;

}

@property (assign,nonatomic) BOOL supportsLegacyFormats;                    //@synthesize supportsLegacyFormats=_supportsLegacyFormats - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithRSACertificate:(id)arg1 ECDSACertificate:(id)arg2 ;
-(id)certificateOfType:(unsigned long long)arg1 ;
-(BOOL)supportsLegacyFormats;
-(void)setSupportsLegacyFormats:(BOOL)arg1 ;
-(id)init;
-(NSDictionary *)dictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end
