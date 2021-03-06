/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SSBLookupResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _URLContainsUserInfo;
	NSArray* _serviceLookupResults;

}

@property (nonatomic,readonly) NSArray * serviceLookupResults;                               //@synthesize serviceLookupResults=_serviceLookupResults - In the implementation block
@property (nonatomic,readonly) BOOL URLContainsUserInfo;                                     //@synthesize URLContainsUserInfo=_URLContainsUserInfo - In the implementation block
@property (getter=isPhishing,nonatomic,readonly) BOOL phishing; 
@property (getter=isMalware,nonatomic,readonly) BOOL malware; 
@property (getter=isUnwantedSoftware,nonatomic,readonly) BOOL unwantedSoftware; 
@property (getter=isKnownToBeUnsafe,nonatomic,readonly) BOOL knownToBeUnsafe; 
+(BOOL)supportsSecureCoding;
-(id)_initWithServiceLookUpResults:(id)arg1 URLContainsUserInfo:(BOOL)arg2 ;
-(BOOL)isUnwantedSoftware;
-(id)_initWithServiceLookUpResults:(id)arg1 ;
-(NSArray *)serviceLookupResults;
-(BOOL)isKnownToBeUnsafe;
-(BOOL)isMalware;
-(BOOL)isPhishing;
-(BOOL)URLContainsUserInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

