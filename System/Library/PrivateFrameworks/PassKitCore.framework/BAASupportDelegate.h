/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BAASupportDelegate <NSObject>
@required
+(int)generateSigKey:(unsigned)arg1 keyData:(id*)arg2 attestation:(id*)arg3 pubKey:(id*)arg4;
+(int)setSigKey:(unsigned)arg1 expirationDate:(unsigned long long)arg2 keyData:(id)arg3 certificates:(id)arg4;
+(int)getSigKeyExpDate:(unsigned)arg1 expirationDate:(unsigned long long*)arg2;
+(int)confirmSigKey:(unsigned)arg1 status:(int)arg2;
+(int)getBlessedUser:(unsigned*)arg1 keybagUUID:(unsigned char)arg2;
+(BOOL)isInternal;

@end

