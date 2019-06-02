/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLAssertion;

@interface SAMLEvidence : SAMLBaseElement

@property (nonatomic,readonly) NSString * assertionIdRef; 
@property (nonatomic,readonly) NSString * assertionURIRef; 
@property (nonatomic,readonly) SAMLAssertion * assertion; 
+(id)createElement:(id*)arg1 ;
-(SAMLAssertion *)assertion;
-(NSString *)assertionIdRef;
-(NSString *)assertionURIRef;
@end

