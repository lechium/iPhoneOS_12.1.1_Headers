/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface DCAsset : NSObject {

	unsigned long long _version;
	double _publicKeyRefreshInterval;
	NSData* _publicKey;

}

@property (assign,nonatomic) unsigned long long version;                   //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) double publicKeyRefreshInterval;              //@synthesize publicKeyRefreshInterval=_publicKeyRefreshInterval - In the implementation block
@property (nonatomic,copy) NSData * publicKey;                             //@synthesize publicKey=_publicKey - In the implementation block
+(id)assetWithMobileAsset:(id)arg1 ;
-(double)publicKeyRefreshInterval;
-(void)setPublicKeyRefreshInterval:(double)arg1 ;
-(NSData *)publicKey;
-(void)setPublicKey:(NSData *)arg1 ;
-(id)description;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
@end

