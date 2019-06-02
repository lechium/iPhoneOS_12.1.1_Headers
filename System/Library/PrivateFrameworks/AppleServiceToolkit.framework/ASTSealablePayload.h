/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface ASTSealablePayload : NSObject {

	BOOL _sealed;
	NSData* _payload;
	NSString* _base64Signature;
	NSData* _signature;

}

@property (nonatomic,retain) NSData * payload;                         //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSString * base64Signature;               //@synthesize base64Signature=_base64Signature - In the implementation block
@property (nonatomic,retain) NSData * signature;                       //@synthesize signature=_signature - In the implementation block
@property (assign,getter=isSealed,nonatomic) BOOL sealed;              //@synthesize sealed=_sealed - In the implementation block
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(NSString *)base64Signature;
-(id)initWithPayload:(id)arg1 signature:(id)arg2 ;
-(id)generatePayload;
-(BOOL)isSealed;
-(BOOL)sealWithPayloadSigner:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setBase64Signature:(NSString *)arg1 ;
-(void)setSealed:(BOOL)arg1 ;
-(id)sealedDescription;
-(id)description;
-(NSData *)payload;
-(void)setPayload:(NSData *)arg1 ;
@end

