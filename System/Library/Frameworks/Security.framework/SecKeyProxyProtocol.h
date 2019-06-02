/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SecKeyProxyProtocol
@required
-(void)initializeWithReply:(/*^block*/id)arg1;
-(void)getBlockSizeWithReply:(/*^block*/id)arg1;
-(void)getAttributesWithReply:(/*^block*/id)arg1;
-(void)getExternalRepresentationWithReply:(/*^block*/id)arg1;
-(void)getDescriptionWithReply:(/*^block*/id)arg1;
-(void)getAlgorithmIDWithReply:(/*^block*/id)arg1;
-(void)getPublicKey:(/*^block*/id)arg1;
-(void)performOperation:(long long)arg1 algorithm:(id)arg2 parameters:(id)arg3 reply:(/*^block*/id)arg4;

@end

