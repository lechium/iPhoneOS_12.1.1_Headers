/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface CUBitCoderDecryptRequest : NSObject {

	NSData* _aad;
	unsigned long long _authTagLength;
	NSData* _data;
	NSData* _nonce;

}

@property (nonatomic,copy) NSData * aad;                                    //@synthesize aad=_aad - In the implementation block
@property (assign,nonatomic) unsigned long long authTagLength;              //@synthesize authTagLength=_authTagLength - In the implementation block
@property (nonatomic,copy) NSData * data;                                   //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSData * nonce;                                  //@synthesize nonce=_nonce - In the implementation block
-(NSData *)aad;
-(void)setAad:(NSData *)arg1 ;
-(unsigned long long)authTagLength;
-(void)setAuthTagLength:(unsigned long long)arg1 ;
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end

