/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PKPeerPaymentAcceptableDocument : NSObject {

	unsigned long long _documentType;
	NSArray* _countryCodes;

}

@property (assign,nonatomic) unsigned long long documentType;              //@synthesize documentType=_documentType - In the implementation block
@property (nonatomic,retain) NSArray * countryCodes;                       //@synthesize countryCodes=_countryCodes - In the implementation block
-(void)setCountryCodes:(NSArray *)arg1 ;
-(NSArray *)countryCodes;
-(void)setDocumentType:(unsigned long long)arg1 ;
-(unsigned long long)documentType;
@end
