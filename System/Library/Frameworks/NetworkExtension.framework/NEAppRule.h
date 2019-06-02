/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface NEAppRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	BOOL _noRestriction;
	BOOL _noDivertDNS;
	NSString* _matchSigningIdentifier;
	NSString* _matchDesignatedRequirement;
	NSString* _matchPath;
	NSArray* _matchDomains;
	NSArray* _additionalExecutables;
	NSArray* _matchAccountIdentifiers;

}

@property (copy) NSArray * additionalExecutables;                        //@synthesize additionalExecutables=_additionalExecutables - In the implementation block
@property (assign) BOOL noRestriction;                                   //@synthesize noRestriction=_noRestriction - In the implementation block
@property (copy) NSArray * matchAccountIdentifiers;                      //@synthesize matchAccountIdentifiers=_matchAccountIdentifiers - In the implementation block
@property (assign) BOOL noDivertDNS;                                     //@synthesize noDivertDNS=_noDivertDNS - In the implementation block
@property (readonly) NSString * matchSigningIdentifier;                  //@synthesize matchSigningIdentifier=_matchSigningIdentifier - In the implementation block
@property (readonly) NSString * matchDesignatedRequirement;              //@synthesize matchDesignatedRequirement=_matchDesignatedRequirement - In the implementation block
@property (copy) NSString * matchPath;                                   //@synthesize matchPath=_matchPath - In the implementation block
@property (copy) NSArray * matchDomains;                                 //@synthesize matchDomains=_matchDomains - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(NSString *)matchSigningIdentifier;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NSArray *)matchDomains;
-(void)setMatchDomains:(NSArray *)arg1 ;
-(BOOL)overlapsWithRule:(id)arg1 ;
-(NSArray *)additionalExecutables;
-(id)initWithSigningIdentifier:(id)arg1 ;
-(NSString *)matchPath;
-(void)setMatchPath:(NSString *)arg1 ;
-(NSArray *)matchAccountIdentifiers;
-(void)setMatchAccountIdentifiers:(NSArray *)arg1 ;
-(BOOL)noRestriction;
-(void)setNoRestriction:(BOOL)arg1 ;
-(void)setNoDivertDNS:(BOOL)arg1 ;
-(BOOL)noDivertDNS;
-(BOOL)signingIdentifierAllowed:(id)arg1 domainsRequired:(out BOOL*)arg2 ;
-(NSString *)matchDesignatedRequirement;
-(void)setAdditionalExecutables:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

