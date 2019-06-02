/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterVerdict.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface NEFilterDataVerdict : NEFilterVerdict <NSSecureCoding, NSCopying> {

	unsigned long long _passBytes;
	unsigned long long _peekBytes;
	NSURL* _url;

}

@property (assign) unsigned long long passBytes;              //@synthesize passBytes=_passBytes - In the implementation block
@property (assign) unsigned long long peekBytes;              //@synthesize peekBytes=_peekBytes - In the implementation block
@property (retain) NSURL * url;                               //@synthesize url=_url - In the implementation block
+(id)allowVerdict;
+(id)dropVerdict;
+(id)needRulesVerdict;
+(id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2 ;
+(id)dataVerdictWithPassBytes:(unsigned long long)arg1 peekBytes:(unsigned long long)arg2 ;
+(BOOL)supportsSecureCoding;
-(unsigned long long)passBytes;
-(unsigned long long)peekBytes;
-(void)setPassBytes:(unsigned long long)arg1 ;
-(void)setPeekBytes:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
@end
